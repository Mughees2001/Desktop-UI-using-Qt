#ifndef COUNTER_WINDOW_HPP
#define COUNTER_WINDOW_HPP

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class CounterWindow : public QMainWindow {
    Q_OBJECT
    
public:
    CounterWindow(QWidget *parent = nullptr);
    ~CounterWindow() = default;
    
private slots:
    void onIncrementClicked();
    
private:

    void setupUi();
    
    QWidget *m_centralWidget{nullptr};    
    QVBoxLayout *m_layout{nullptr};       
    QLabel *m_counterLabel{nullptr};      
    QPushButton *m_incrementButton{nullptr}; 
    int m_counter{0};                     
};

#endif 