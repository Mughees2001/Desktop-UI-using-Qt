project('qt-counter', 'cpp',
    version : '0.1.0',
    default_options : [
        'cpp_std=c++20',
        'warning_level=3',
        'werror=true'
    ]
)

qt5 = import('qt5')
qt5_dep = dependency('qt5', modules: ['Core', 'Widgets', 'Gui'])

preprocessed = qt5.preprocess(
    moc_headers : ['counter_window.hpp'],
    dependencies : qt5_dep
)

sources = [
    'main.cpp',
    'counter_window.cpp',
    preprocessed
]

executable('qt-counter',
    sources,
    dependencies : qt5_dep,
    install : true
)