#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QBarSet *set0 = new QBarSet("Игорь");
    //QBarSet *set1 = new QBarSet("Виктор");
    //QBarSet *set2 = new QBarSet("Ольга");
    //QBarSet *set3 = new QBarSet("Мария");
    //QBarSet *set4 = new QBarSet("Павел");

    //*set0 << 10 << 20 << 30 << 40 << 50 << 60;
    //*set1 << 50 << 70 << 40 << 45 << 80 << 70;
    //*set2 << 30 << 50 << 80 << 13 << 80 << 50;
    //*set3 << 50 << 60 << 70 << 30 << 40 << 25;
    //*set4 << 90 << 70 << 50 << 30 << 16 << 42;

    //QBarSeries *series = new QBarSeries();
    //series->append(set0);
    //series->append(set1);
    //series->append(set2);
    //series->append(set3);
    //series->append(set4);

    //QChart *chart = new QChart();
    //chart->addSeries(series);
    //chart->setTitle("Успеваемость студентов");
    //chart->setAnimationOptions(QChart::SeriesAnimations);

    //QStringList categories;
    //categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
    //QBarCategoryAxis *axis = new QBarCategoryAxis();
    //axis->append(categories);
    //chart->createDefaultAxes();
    //chart->setAxisX(axis, series);

    //QChartView *chartView = new QChartView(chart);
    //chartView->setParent(ui->horizontalFrame);

    //---------------Pie---------------//
    QPieSeries *pieSeries = new QPieSeries();
    pieSeries->append("Игорь", 10);
    pieSeries->append("Виктор", 20);
    pieSeries->append("Ольга", 30);
    pieSeries->append("Мария", 40);
    pieSeries->append("Павел", 50);

    QPieSlice *pieSlice = pieSeries->slices().at(1);
    pieSlice->setExploded();
    pieSlice->setLabelVisible();
    pieSlice->setPen(QPen(Qt::darkGreen, 2));
    pieSlice->setBrush(Qt::green);

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->setTitle("Успеваемость студентов");
    pieChart->setAnimationOptions(QChart::SeriesAnimations);

    QChartView *pieChartView = new QChartView(pieChart);
    pieChartView->setParent(ui->horizontalFrame);
    //---------------------------------//


}

MainWindow::~MainWindow()
{
    delete ui;
}
