## 2.0.0 (2017-11-02)

Features:

* OASIS is now Maelstrom
* Save and load social data in JSON
* Save and load clan data in JSON
* Songs have been removed
* Added in .env file support
* List/create todo functionality
* Beautify logs

Maintenance:

* Areas have been brought back into the main repository until a better storage mechanism can be figured out
* Vagrant setup is a little more organized now

## 1.0.2 (2016-11-15)

Features:

* Don't disappear empty drink containers

Maintenance:

* Remove Keen.io and PagerDuty integrations

## 1.0.1 (2016-08-25)

Bugfixes:

* Adding new newbie help keywords are now automatically sorted upon insert

## 1.0.0 (2016-08-24)

Features:
* Save and load newbie help data in JSON (more JSON migrations to come)

Bugfixes:

* Fix newbie help list sorting

Maintenance:

* Separated `src` and `tests` directories
* Updated `Makefile` to compile binaries into `bin` directory
* Isolated `.o` files into `build` directory
* Start using SemVer specification (1.0.0 marks an incompatibility with previous versions)

## 0.0.4 (2016-02-12)

Features:

* Removed all classes
* Disabled all spells and skills until proper balancing can be done
* Replace "Mages" with "Casters"
* Replace "Thieves" with "Rogues"
* Replace "Warriors" with "Fighters"
* Remove triple classing
* Removed all but 4 races (Human, Elf, Dwarf, Halfling)
* Converted Pixies to Gnomes
* Removed race editor stuff

## 0.0.3 (2015-11-12)

Features:

* `idea`, `bug`, and `typo` reports are now delivered as GitHub issues
* `identify` is now a regular command, instead of a spell

Bugfixes:

* Changed default page length to 60 with a maximum of 150 lines because it isn't 1990 anymore

## 0.0.2 (2015-02-13)

Bugfixes:

* Fix the color orange in `ofind`

## 0.0.1 (2014-03-14)

Features:

* Indicate closed doors in exit list

Bugfixes:

* Fix `hotreboot` functionality
