project('qt-counter', 'cpp',
    version : '0.1.0',
    default_options : [
        'cpp_std=c++20',
        'warning_level=3',
        'werror=true'
    ]
)

qt6 = import('qt6')
qt6_dep = dependency('qt6', modules: ['Core', 'Widgets', 'Gui'])

preprocessed = qt6.preprocess(
    moc_headers : ['counter_window.hpp'],
    dependencies : qt6_dep
)

sources = [
    'main.cpp',
    'counter_window.cpp',
    preprocessed
]

executable('qt-counter',
    sources,
    dependencies : qt6_dep,
    install : true
)