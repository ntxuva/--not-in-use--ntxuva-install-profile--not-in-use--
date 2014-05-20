; ntxuva make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[charts][version] = "2.0-rc1"
projects[charts][subdir] = "contrib"

projects[date][version] = "2.7"
projects[date][subdir] = "contrib"

projects[profiler_builder][version] = "1.x-dev"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[bootstrap_fieldgroup][version] = "1.0"
projects[bootstrap_fieldgroup][subdir] = "contrib"

projects[field_formatter_class][version] = "1.1"
projects[field_formatter_class][subdir] = "contrib"

projects[field_formatter_css_class][version] = "1.3"
projects[field_formatter_css_class][subdir] = "contrib"

projects[field_group][version] = "1.3"
projects[field_group][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[geolocation][version] = "1.4"
projects[geolocation][subdir] = "contrib"

projects[geolocation_osm][type] = module
projects[geolocation_osm][subdir] = "contrib"
projects[geolocation_osm][download][url] = "http://git.drupal.org/sandbox/markaspot/2182047.git"

projects[smtp][version] = "1.0"
projects[smtp][subdir] = "contrib"

;projects[markaspot][version] = "2.x-dev"
;projects[markaspot][subdir] = "contrib"

projects[l10n_update][version] = "1.0"
projects[l10n_update][subdir] = "contrib"

projects[i18n][version] = "1.11"
projects[i18n][subdir] = "contrib"

projects[panels][version] = "3.4"
projects[panels][subdir] = "contrib"

projects[oauth][version] = "3.2"
projects[oauth][subdir] = "contrib"
projects[workbench][subdir] = "contrib"

projects[backup_migrate][version] = "2.8"
projects[backup_migrate][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[field_formatter_settings][version] = "1.1"
projects[field_formatter_settings][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[login_destination][version] = "1.1"
projects[login_destination][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[twitter][version] = "5.8"
projects[twitter][subdir] = "contrib"
projects[twitter][patch][2132231] = "https://drupal.org/files/issues/Twitter-add_geo_and_entities_Twitter_object_2132231-1_0.patch"

projects[panels][version] = "3.4"
projects[panels][subdir] = "contrib"

projects[services][version] = "3.7"
projects[services][subdir] = "contrib"

projects[services][version] = "3.7"
projects[services][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha5"
projects[uuid][subdir] = "contrib"
projects[uuid][patch][2161375] = https://drupal.org/files/issues/custom_method_of_UUID_creation_2161375_1.patch

projects[chosen][version] = "2.0-beta4"
projects[chosen][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[variable][version] = "2.5"
projects[variable][subdir] = "contrib"

projects[better_exposed_filters][version] = "3.0-beta4"
projects[better_exposed_filters][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_datasource][version] = "1.x-dev"
projects[views_datasource][subdir] = "contrib"

projects[voipdrupal][version] = "1.0-beta5"
projects[voipdrupal][subdir] = "contrib"

projects[geophp][subdir] = "contrib"

projects[views_geojson][subdir] = "contrib"
projects[views_geojson][version] = 1.x-dev

; +++++ Themes +++++

; ember
projects[ember][type] = "theme"
projects[ember][version] = "2.0-alpha2"
projects[ember][subdir] = "contrib"

; markaspot
projects[markaspot][type] = "theme"
projects[markaspot][version] = "2.x-dev"
projects[markaspot][subdir] = "contrib"

; bootstrap
projects[bootstrap][type] = "theme"
projects[bootstrap][version] = "3.0"
projects[bootstrap][subdir] = "contrib"

