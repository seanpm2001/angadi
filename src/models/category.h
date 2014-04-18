/*****************************************************************************
 * category.h
 *
 * Created: 17/04/2014 by Manikk
 *
 * Copyright 2014 ThamiZha!. All rights reserved.
 *
 * Visit www.thamizha.com for more information.
 *
 * This file is a part of ThamiZha Angadi application.
 *
 * This file may be distributed under the terms of GNU Public License version
 * 3 (GPL v3) as defined by the Free Software Foundation (FSF). A copy of the
 * license should have been included with this file, or the project in which
 * this file belongs to. You may also find the details of GPL v3 at:
 * http://www.gnu.org/licenses/gpl-3.0.txt
 *
 * If you have any questions regarding the use of this file, feel free to
 * contact the author of this file, or the owner of the project in which
 * this file belongs to.
 *
 * Authors :
 * Manikk <manikk.h@gmail.com>
 *****************************************************************************/

#ifndef CATEGORY_H
#define CATEGORY_H

#include <QObject>
#include<QHash>
#include<QDateTime>
class Category : public QObject
{
   Q_OBJECT

   /* Q_PROPERTY(quint16 id READ id WRITE setId)
    Q_PROPERTY(QString code READ code WRITE setCode)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QChar status READ status WRITE setStatus)
    Q_PROPERTY(QDateTime createdDate READ createdDate WRITE setCreatedDate)
    Q_PROPERTY(quint16 modifiedBy READ modifiedBy WRITE setModifiedBy)
    Q_PROPERTY(QDateTime modifiedDate READ modifiedDate WRITE setModifiedDate)*/

public:
    explicit Category(QObject *parent = 0);


 /*   quint16 id();
    QString code();
    QString name();
    QChar status();
    QDateTime createdDate();
    QDateTime modifiedDate();
    quint16 modifiedBy();

    void setId(quint16);
    void setCode(QString);
    void setName(QString);
    void setStatus(QChar);
    void setCreatedDate(QDateTime);
    void setModifiedDate(QDateTime);
    void setModifiedBy(quint16);

    Category findById();
    Category findByCode();
    Category findByAttributes();

    QList<Category> findAll();
    QList<Category> findAllBySql();
    QList<Category> findAllByAttributes();

    void deleteAll();
    void deleteByCode();
    void deleteBySql();
    void deleteAllByAttributes();

    bool save();
    bool destroy();

    QList<Category> search();

    QList<QString> getAllProducts();
    QList<QString> getAllBills();
    QList<QString> getAllTransactions();

    QHash<QString,QString> validate();
    QHash<QString,QString> errors();*/

signals:

public slots:

private:
    /*quint16 m_id;
    QString m_code;
    QString m_name;
    QChar m_status;
    QDateTime m_createdDate;
    QDateTime m_modifiedDate;
    quint16 m_modifiedBy;

    QHash<QString,QString> errors;*/
};


#endif // CATEGORY_H
