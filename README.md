# Introduzione

Questo repository contiene il codice svolto per mettere a confront i diversi standard del linguggio C.

In particolare, i file sorgente in questo repository si focalizzano sulle seguenti caratteristiche:

- Dichiarazione di funzione sullo stile di K&R
- Struct anonime
- Parametri di funzioni anonimi
- Dichiarazione e inizializzazione di struct
- _Intermingled variable declaration_, ovvero dichiarare le variabili in qualiasi punto di una funzione
- Stile dei commenti

che prendono alcune delle caratteristiche dei seguenti standard:  ANSI C (o C89), C99, C11, e C2x. C17 non è incluso perché non porta modifiche alla sintassi del linguaggio, ma solve dei bug della standard library (e annessi e connessi).

Il codice presente in questo repository è stato scritto durante le riprese del video [**CA-22-004**]((https://youtu.be/IzRWVpMphGI)) del canale YouTube [AFK](https://www.youtube.it/@valerio_afk).

* 📹 [Link al video](https://youtu.be/IzRWVpMphGI)

L'esercizio è stato svolto in C (gcc 11.3) utilizzando l'ambiente di sviluppo [Visual Studio Code](https://code.visualstudio.com/download) su Ubuntu 22.04 (Jammy Jellyfish).

Il codice caricato durante il commit iniziale è esattamente uguale a quello visto nel video **prima di apportare le modifiche viste nello stesso**. Quindi, il codice che scaricate da questo repository non compila se non settate lo standard corretto.

# Come compilare

Se usate GCC (si consiglia di usare la stessa versione da me usata), ecco quello che dovete scrivere se volete ricreare gli stessi errori visti nel video:

```bash
$ gcc -Wall -pedantic -std=c2x -o c2x c2x.c
$ gcc -Wall -pedantic -std=c11 -o c11 c11.c
$ gcc -Wall -pedantic -std=c99 -o c99 c99.c
$ gcc -Wall -pedantic -std=c89 -o c89 c89.c
```

# Contatti

Lasciate un commento al video è un ottimo modo per domande generiche. Domande specifiche sono incorragiate via e-mail, presente nella sezione `Informazioni` sul canale.

# Licence Agreement

The code in this repository is released under the terms of [GNU GPLv3 Licence Agreement](https://www.gnu.org/licenses/gpl-3.0.html). A summary of this (and other FOSS licences is provided [here](https://en.wikipedia.org/wiki/Comparison_of_free_and_open-source_software_licenses)).

# Disclaimer

The code provided in this repository is provided AS IS and is intended for educational purposes only.

From the MIT License

`THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE`

![GPLv3](https://img.shields.io/badge/license-GPLv3-brightgreen) ![C](https://img.shields.io/badge/C-gcc%2011.3-blue) 

[![Instagram Profile](https://img.shields.io/badge/Instagram-%40valerio__afk-ff69b4)](https://www.instagram.com/valerio_afk/) [![YouTube Channel](https://img.shields.io/badge/YouTube-%40valerio__afk-red)](https://www.youtube.it/@valerio_afk)
