; ntxuva make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.28"
; include the d.o. profile base
includes[] = "drupal-org.make"

; +++++ Profiles +++++

; NTXUVA Profile
projects[ntxuva][type] = profile
projects[ntxuva][download][type] = "git"
projects[markaspot][download][url] = "https://github.com/ntxuva/ntxuva.git"
projects[ntxuva][download][branch] = "master"

; Mark-a-Spot Profile
projects[markaspot][type] = profile
projects[markaspot][download][type] = "git"
projects[markaspot][download][url] = "http://git.drupal.org/project/markaspot.git"
projects[markaspot][download][branch] = "7.x-2.x"

; +++++ Libraries +++++

libraries[chosen][type] = libraries
libraries[chosen][download][type] = get
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/1.0.0/chosen_v1.0.0.zip"
libraries[chosen][directory_name] = chosen

libraries[Leaflet.awesome-markers][type] = libraries
libraries[Leaflet.awesome-markers][download][type] = git
libraries[Leaflet.awesome-markers][download][url] = "https://github.com/markaspot/Leaflet.awesome-markers.git"
libraries[Leaflet.awesome-markers][download][branch] = additional-colors
libraries[Leaflet.awesome-markers][directory_name] = Leaflet.awesome-markers

libraries[Leaflet.draw][type] = libraries
libraries[Leaflet.draw][download][type] = git
libraries[Leaflet.draw][download][url] = "https://github.com/Leaflet/Leaflet.draw.git"
libraries[Leaflet.draw][directory_name] = Leaflet.draw


libraries[Leaflet.markercluster][type] = libraries
libraries[Leaflet.markercluster][download][type] = git
libraries[Leaflet.markercluster][download][url] = "https://github.com/Leaflet/Leaflet.markercluster.git"
libraries[Leaflet.markercluster][directory_name] = Leaflet.markercluster

libraries[leaflet-locatecontrol][type] = libraries
libraries[leaflet-locatecontrol][download][type] = git
libraries[leaflet-locatecontrol][download][url] = "https://github.com/domoritz/leaflet-locatecontrol.git"
libraries[leaflet-locatecontrol][directory_name] = leaflet-locatecontrol

libraries[leaflet-plugins][type] = libraries
libraries[leaflet-plugins][download][type] = git
libraries[leaflet-plugins][download][url] = "https://github.com/shramov/leaflet-plugins.git"
libraries[leaflet-plugins][directory_name] = leaflet-plugins

libraries[Leaflet][type] = libraries
libraries[Leaflet][download][type] = file
libraries[Leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.2.zip"
libraries[Leaflet][directory_name] = leaflet

libraries[spin.js][type] = libraries
libraries[spin.js][download][type] = git
libraries[spin.js][download][url] = "https://github.com/fgnass/spin.js.git"
libraries[spin.js][directory_name] = spin.js

libraries[markaspot-font][type] = libraries
libraries[markaspot-font][download][type] = git
libraries[markaspot-font][download][url] = "https://github.com/markaspot/markaspot-font.git"
libraries[markaspot-font][directory_name] = markaspot-font

libraries[proxy][type] = libraries
libraries[proxy][download][type] = git
libraries[proxy][download][url] = "https://github.com/markaspot/Simple-php-proxy-script.git"
libraries[proxy][download][branch] = osm-nominatim
libraries[proxy][directory_name] = proxy

libraries[bootstrap][download][type] = "get"
libraries[bootstrap][download][url] = "https://github.com/twbs/bootstrap/archive/v3.1.1.zip"
libraries[bootstrap][directory_name] = "bootstrap"
libraries[bootstrap][destination] = "themes/mas"
libraries[bootstrap][overwrite] = TRUE


