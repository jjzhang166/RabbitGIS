#ifndef GLOBAL_H
#define GLOBAL_H

#include "GlobalDir.h"
#include "Log.h"
#include <QObject>

/** 
 * @mainpage
 * 
 *
 */

/**
  * @defgroup RABBITGIS_GLOBAL 全局变更类模块  
  * @brief 全局变量模块  
  */

/**
 * @brief The CGlobal class
 * @ingroup RABBITGIS_GLOBAL
 */
class CGlobal : public QObject
{
    Q_OBJECT
private:
    explicit CGlobal(QObject *parent = 0);
    virtual ~CGlobal();

public:
    static CGlobal* Instance();

public:
    QString GetStyle();
    QString GetStyleMenu();
    int SetStyleMenu(QString szMenu, QString szFile);
private:
    QString m_szStyleFile;
    QString m_szStyleMenu;


signals:

public slots:
};
#endif // GLOBAL_H
