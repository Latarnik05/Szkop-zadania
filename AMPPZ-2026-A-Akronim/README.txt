# A – Akronim (AMPPZ 2024)

Rozwiązanie zadania **A – Akronim** z zawodów AMPPZ 2024.  
Treść zadania: https://szkopul.edu.pl/problem/AXpjs6xcLjcvBC5sHIYe4Oef/site/?key=statement :contentReference[oaicite:3]{index=3}

## 📌 Opis problemu

Dany jest słownik n różnych słów zapisanych dużymi literami (A–Z).  
Należy sprawdzić, czy da się z nich zbudować **zdanie**, takie że:

- pierwsze litery słów w zdaniu tworzą słowo, które **też należy do słownika**,
- słowa mogą się powtarzać,
- akceptowane jest użycie słowa akronimu jako elementu zdania.  
  💡 Przykład: „XX XX” dla słownika zawierającego tylko „XX”.

Jeśli nie da się znaleźć takiego zdania, wypisz `-1`.  
Jeśli da się — wypisz:
1. liczbę słów w zdaniu,
2. samo zdanie (ciąg słów rozdzielonych spacjami). :contentReference[oaicite:4]{index=4}

## 🧠 Rozwiązanie

Dla każdego słowa ze słownika traktowanego jako potencjalny akronim
sprawdzam, czy da się je zrealizować jako zdanie:

1. Tworzę zbiór liter będących pierwszymi literami słów w słowniku.
2. Dla każdego słowa `S`:
   - sprawdzam, czy **każda litera** słowa `S`
     występuje jako pierwsza litera jakiegoś słowa w słowniku,
   - jeśli tak, `S` jest poprawnym akronimem.
3. Spośród wszystkich poprawnych akronimów wybieram **najkrótszy**,
   co minimalizuje liczbę słów w zdaniu.
4. Buduję zdanie, dobierając dla każdej litery akronimu
   dowolne słowo zaczynające się na tę literę.

Jeśli nie istnieje żaden poprawny akronim, program wypisuje `-1`.## 📊 Złożoność

- Czasowa: **O(n × L)**, gdzie `n` to liczba słów, a `L` to maksymalna długość słowa (≤ 8).
- Pamięciowa: **O(n)**.

## 🧾 Kompilacja i uruchomienie

Kompilacja:

```bash
g++ main.cpp -std=c++17 -O2 -o akronim