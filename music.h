#ifndef MUSIC_H
#define MUSIC_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

class QLabel;
class Music : public QWidget
{
    Q_OBJECT

public:
    Music(QWidget *parent = 0);
    ~Music();
public slots:
    void OpenFileBtnClicked();
    void PlayMusicBtnClicked();
private:
    QPushButton     *m_pOpenFileBtn;
    QPushButton     *m_pPlayMusicBtn;

    QLabel                 *m_pMusicInfo;
};

#endif // MUSIC_H
