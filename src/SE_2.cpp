#include<iostream>
#include<set>
#include<vector>
#include<fstream>
#include"obj.h"

using namespace std;


int main(int argv, char** args)
{
	if (args == nullptr) throw exception();
	ifstream input;
	ofstream output;
	set<Point> points;
	vector<Line> lines;
	vector<Segment> segments;
	vector<Ray> rays;
	vector<Circle> circles;
	int n = 0;
	char ch = '\0';
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	double x0 = 0, y0 = 0, r = 0;

	/*
	if (argv == 5 && strcmp(args[1], "-i") == 0 && strcmp(args[3], "-o") == 0) {
		input = ifstream(args[2]);
		output = ofstream(args[4]);
		input >> n;
	}*/
	input.open("input.txt");
	output.open("output.txt");

	input >> n;

		for (int i = 0; i < n; i++) {
			input >> ch;
			if (ch == 'L') {
				input >> x1 >> y1 >> x2 >> y2;
				lines.push_back(Line(x1,y1,x2,y2 ));
			}
			else if (ch == 'C') {
				input >> x0 >> y0 >> r;
				circles.push_back(Circle(x0,y0,r));
			}
			else if (ch=='R') {
				input >> x1 >> y1 >> x2 >> y2;
				rays.push_back(Ray(x1,y1,x2,y2));
			}
			else if (ch == 'S') {
				input >> x1 >> y1 >> x2 >> y2;
				//要求 start_x<end_x || (start_X==end_x && start_y<end_y)
				if (x1 < x2) segments.push_back(Segment(x1, y1, x2, y2));
				else if(x1>x2)	segments.push_back(Segment(x2, y2, x1, y1));
				else if (y1 < y2) segments.push_back(Segment(x1, y1, x2, y2));
				else if(y2<y1) segments.push_back(Segment(x2, y2, x1, y1));
				else throw exception("Two same point!");
			}
		}

		int lines_size = lines.size();
		int circles_size = circles.size();
		int segments_size = segments.size();
		int rays_size = rays.size();
	
		for (int i = 0; i < lines_size; i++) {
			for (int j = i + 1; j < lines_size; j++) 	lines.at(i).upgrade_points(points, lines.at(j));
			for (auto& ray : rays) lines.at(i).upgrade_points(points, ray);
			for (auto& segment : segments) lines.at(i).upgrade_points(points, segment);
			for(auto& circle:circles) lines.at(i).upgrade_points(points, circle);
		}

		for (int i = 0; i < rays_size; i++) {
			for (int j = i + 1; j < rays_size; j++) 	rays.at(i).upgrade_points(points, rays.at(j));
			for (auto& segment : segments) rays.at(i).upgrade_points(points, segment);
			for (auto& circle : circles) 	rays.at(i).upgrade_points(points, circle);
		}

		for (int i = 0; i < segments_size; i++) {
			for (int j = i + 1; j < segments_size;j++) segments.at(i).upgrade_points(points, segments.at(j));
			for (auto& circle : circles) segments.at(i).upgrade_points(points, circle);
		}

		for (int i = 0; i < circles_size; i++) {
			for (int j = i + 1; j < circles_size; j++) {
				circles.at(i).upgrade_points(points, circles.at(j));
			}
		}
		
		cout << points.size()<<endl;
		for (auto& point : points)	cout << point.x << " " << point.y << endl;
		output << points.size();
		return 0;
}