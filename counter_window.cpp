#include "counter_window.hpp"
#include <QString>

CounterWindow::CounterWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi();
}

void CounterWindow::setupUi() {
    m_centralWidget = new QWidget(this);
    setCentralWidget(m_centralWidget);
    
    m_layout = new QVBoxLayout(m_centralWidget);
    
    m_counterLabel = new QLabel(QString("Counter: %1").arg(m_counter), this);
    m_counterLabel->setAlignment(Qt::AlignCenter);
    m_counterLabel->setStyleSheet("font-size: 24px; margin: 10px;");
    
    m_incrementButton = new QPushButton("Increment", this);
    m_incrementButton->setStyleSheet("padding: 10px; font-size: 18px;");
    
    m_layout->addWidget(m_counterLabel);
    m_layout->addWidget(m_incrementButton);
    m_layout->addStretch();
    
    connect(m_incrementButton, &QPushButton::clicked, this, &CounterWindow::onIncrementClicked);
}

void CounterWindow::onIncrementClicked() {
    m_counter++;
    m_counterLabel->setText(QString("Counter: %1").arg(m_counter));
}