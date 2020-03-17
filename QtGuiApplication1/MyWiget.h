#pragma once
#include <QtWidgets/QWidget>
#include "ui_MyWiget.h"
#include "../SE_2/obj.h"


class MyWiget : public QWidget
{
	Q_OBJECT
public:
	int point_num = 0;
	std::set<QString> obj;
	vector<Line> lines;
	vector<Circle> circles;
	vector<Ray> rays;
	vector<Segment> segments;
	set<Point> points;
	QMap<QString,Line> line_map;
	QMap<QString, Ray> ray_map;
	QMap<QString, Segment>segment_map;
	QMap<QString, Circle>circle_map;

	MyWiget(QWidget *parent = Q_NULLPTR);


private:
	Ui::MyWigetClass ui;
	void paintEvent(QPaintEvent * event);
	void delete_obj(QString& str);
};
