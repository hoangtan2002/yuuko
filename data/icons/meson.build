application_id = 'com.yuuko.alert'

scalable_dir = 'hicolor' / 'scalable' / 'apps'
install_data(
  scalable_dir / ('@0@.svg').format(application_id),
  install_dir: get_option('datadir') / 'icons' / scalable_dir
)

symbolic_dir = 'hicolor' / 'symbolic' / 'apps'
install_data(
  symbolic_dir / ('@0@-symbolic.svg').format(application_id),
  install_dir: get_option('datadir') / 'icons' / symbolic_dir
)

app_icon_dir = 'hicolor' / '48x48' / 'apps'
install_data(
  app_icon_dir/ ('@0@.png').format(application_id),
  install_dir: get_option('datadir') / 'icons' / app_icon_dir
)