; ntxuva make file for local development
core = "7.x"
api = "2"

projects[drupal][version] = "7.x"
; include the d.o. profile base
includes[] = "drupal-org.make"

; +++++ Libraries +++++

; mapiconmaker
libraries[mapiconmaker][directory_name] = "mapiconmaker"
libraries[mapiconmaker][type] = "library"
libraries[mapiconmaker][destination] = "libraries"
libraries[mapiconmaker][download][type] = "get"
libraries[mapiconmaker][download][url] = "" ; TODO add download URI

; Leaflet.markercluster
libraries[Leaflet.markercluster][directory_name] = "Leaflet.markercluster"
libraries[Leaflet.markercluster][type] = "library"
libraries[Leaflet.markercluster][destination] = "libraries"
libraries[Leaflet.markercluster][download][type] = "get"
libraries[Leaflet.markercluster][download][url] = "" ; TODO add download URI

; proxy
libraries[proxy][directory_name] = "proxy"
libraries[proxy][type] = "library"
libraries[proxy][destination] = "libraries"
libraries[proxy][download][type] = "get"
libraries[proxy][download][url] = "" ; TODO add download URI

; spyc
libraries[spyc][directory_name] = "spyc"
libraries[spyc][type] = "library"
libraries[spyc][destination] = "libraries"
libraries[spyc][download][type] = "get"
libraries[spyc][download][url] = "" ; TODO add download URI

; leaflet
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][type] = "library"
libraries[leaflet][destination] = "libraries"
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "" ; TODO add download URI

; Leaflet.awesome-markers
libraries[Leaflet.awesome-markers][directory_name] = "Leaflet.awesome-markers"
libraries[Leaflet.awesome-markers][type] = "library"
libraries[Leaflet.awesome-markers][destination] = "libraries"
libraries[Leaflet.awesome-markers][download][type] = "get"
libraries[Leaflet.awesome-markers][download][url] = "" ; TODO add download URI

; Leaflet.draw
libraries[Leaflet.draw][directory_name] = "Leaflet.draw"
libraries[Leaflet.draw][type] = "library"
libraries[Leaflet.draw][destination] = "libraries"
libraries[Leaflet.draw][download][type] = "get"
libraries[Leaflet.draw][download][url] = "" ; TODO add download URI

; spin.js
libraries[spin.js][directory_name] = "spin.js"
libraries[spin.js][type] = "library"
libraries[spin.js][destination] = "libraries"
libraries[spin.js][download][type] = "get"
libraries[spin.js][download][url] = "" ; TODO add download URI

; markerclusterer
libraries[markerclusterer][directory_name] = "markerclusterer"
libraries[markerclusterer][type] = "library"
libraries[markerclusterer][destination] = "libraries"
libraries[markerclusterer][download][type] = "get"
libraries[markerclusterer][download][url] = "" ; TODO add download URI

; chosen
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"
libraries[chosen][destination] = "libraries"
libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "" ; TODO add download URI

; markaspot-font
libraries[markaspot-font][directory_name] = "markaspot-font"
libraries[markaspot-font][type] = "library"
libraries[markaspot-font][destination] = "libraries"
libraries[markaspot-font][download][type] = "get"
libraries[markaspot-font][download][url] = "" ; TODO add download URI

