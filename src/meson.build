yuuko_sources = [
  'main.c',
  'yuuko-application.c',
  'yuuko-window.c',
]

yuuko_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.4'),
]

yuuko_sources += gnome.compile_resources('yuuko-resources',
  'yuuko.gresource.xml',
  c_name: 'yuuko'
)

executable('yuuko', yuuko_sources,
  dependencies: yuuko_deps,
       install: true,
)
