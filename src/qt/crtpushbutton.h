#ifndef XCRTPUSHBUTTON_H
#define XCRTPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class CrowntiumPushButton : public QPushButton
{
public:
    explicit CrowntiumPushButton(QWidget * parent = Q_NULLPTR);
    explicit CrowntiumPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // XCRTPUSHBUTTON_H
