# DSMRsimulator
A simulator that mimics DSMR smart meters. Usefull for testing P1 to $protocol devices.

It sends a static telegram every second at the TX pin.
This telegram is the example telegram found in the P1 companion standard
(https://www.netbeheernederland.nl/dossiers/slimme-meter-15/documenten)
It blinks the builtin LED when sending a telegram.

It was built using a Wemos D1 mini, because I had one close at hand. :-)

Future updates will include an acurate timestamp and correct CRC.