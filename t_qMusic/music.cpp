#include "music.h"

#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMediaPlayer>

Music::Music(QWidget *parent)
    : QWidget(parent)
{
    this->setAttribute (Qt::WA_TranslucentBackground);

    m_pOpenFileBtn = new QPushButton;
    m_pOpenFileBtn->setText (tr("... "));
    m_pPlayMusicBtn = new QPushButton;
    m_pPlayMusicBtn->setText (tr("ChangePlayStatus"));
    m_pMusicInfo = new QLabel;
    m_pMusicInfo->setText (tr("MusicName"));

    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget (m_pOpenFileBtn);
    hLayout->addWidget (m_pPlayMusicBtn);

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget (m_pMusicInfo);
    vLayout->addLayout (hLayout);

    this->setLayout (vLayout);

    connect (m_pOpenFileBtn, SIGNAL(clicked(bool)), this, SLOT(OpenFileBtnClicked()));
    connect (m_pPlayMusicBtn, SIGNAL(clicked(bool)), this, SLOT(PlayMusicBtnClicked()));
}

Music::~Music()
{

}

void Music::OpenFileBtnClicked()
{
    /*const QStringList musicPaths = QStandardPaths::standardLocations(QStandardPaths::MusicLocation);
    const QString filePath =
        QFileDialog::getOpenFileName(this, tr("Open File"),
                                     musicPaths.isEmpty() ? QDir::homePath() : musicPaths.first(),
                                     tr("MP3 files (*.mp3);;All files (*.*)"));
    if (!filePath.isEmpty())
        playFile(filePath);*/

    /*playButton->setEnabled(true);
    infoLabel->setText(QFileInfo(filePath).fileName());

    mediaPlayer.setMedia(QUrl::fromLocalFile(filePath));
    mediaPlayer.play();*/
}

void Music::PlayMusicBtnClicked()
{

}
