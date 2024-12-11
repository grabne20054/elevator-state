# Geometrical Shapes

Dieses Beispiel demonstriert die Vererbung am Beispiel von Klassen für geometrische Vektoren. Arbeiten Sie im Verzeichnis  **src/** und im Namespace **shapes**

Erstellen Sie eine Klassenstruktur um geometrische Objekte abbilden zu können. Implementieren Sie zumindest folgende geometrische Objekte: 

* Strecke (_LineSegment_)
* Polygonzug (_PolygonalChain_)
* Quadrat (_Square_)
* Rechtwinkeliges Dreieck (_RightTriangle_)

Alle Klassen sollen eine Methode ToString implementieren, welche als Rückgabewert einen std::string liefert, der das Objekt beschreibt. Die genaue Textausgabe obliegt Ihnen.

Strecke und Polygonzug sollen eine Methode Length implementieren, welche die Gesamtlänge berechnet. Der Rückgabewert soll vom Datentyp double sein.

Quadrat und rechtwinkeliges Dreieck sollen je eine Methode Area und Circumference implementieren, welche den Flächeninhalt und Umfang des Objektes berechnen. Der Rückgabewert soll jeweils vom Datentyp double sein.

## Hinweise

* Der Aufbau der Klassenstruktur wird im Unterricht gemeinsam erarbeitet

## Make Targets

Make wird immer vom Basisverzeichnis eines Workpackage aus aufgerufen (z.B. WP3-Inheritance). Jeglicher Aufruf basiert auf dem vollständigen Namen des Assignment-Verzeichnisses (z.B. 302-shapes).

* make [assignment-name]
  * main.cpp wird kompiliert
* make [assignment-name].test
  * test.cpp wird kompiliert und das Ergebnis ausgeführt. Basiert auf Criterion Unittests.
* make [assignment-name].tidy
  * Readability- und Security-Checks mit clang-tidy
* make [assignment-name].format
  * Coding Standard Checks mit clang-format
