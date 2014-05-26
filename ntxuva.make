api = 2
core = 7.x

; According to https://github.com/drush-ops/drush/issues/234#issuecomment-27656033
; https://drupal.org/comment/8140319#comment-8140319
; The following change fixed the issue
projects[drupal][type] = core
projects[drupal][version] = 7.28
projects[drupal][download][type] = get
projects[drupal][download][url] = http://ftp.drupal.org/files/projects/drupal-7.28.tar.gz

; NTXUVA Profile
projects[ntxuva][type] = profile
projects[ntxuva][download][type] = "git"
projects[ntxuva][download][url] = "https://github.com/ntxuva/ntxuva.git"
projects[ntxuva][download][branch] = "master"

; Mark-a-Spot Profile
;projects[markaspot][type] = profile
;projects[markaspot][download][type] = "git"
;projects[markaspot][download][url] = "http://git.drupal.org/project/markaspot.git"
;projects[markaspot][download][branch] = "7.x-2.x"
