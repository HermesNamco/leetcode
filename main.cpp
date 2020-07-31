#include <QCoreApplication>
#include <QFile>
#include <QFileInfo>
#include <QtDebug>
#include <QRandomGenerator>

using namespace std;

void makeBigFile(){
    quint64 temp = 1;
    const quint64 file_size = (temp << 32);
    QFile f("testfile.txt");
    if(!f.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "error" << endl;
        return ;
    }
    QTextStream stream(&f);
    QFileInfo info(f);
    quint64 now_size = info.size();
    while(now_size < file_size){
        for(int i = 0;i < 1000;++ i){
            stream << QRandomGenerator::global()->generate() << " ";
        }
        stream << endl;
        info.refresh();
        now_size = info.size();
        qDebug() << now_size << endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeBigFile();

    return a.exec();
}
