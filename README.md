## cardserver
A small web server written in C for managing and dealing cards RESTfully.

The API contract is:
  getdeck/{num} - return the ID of a new "deck" of cards consisting of {num} standard 52-card decks. Defaults to 1 deck. Maximum of 10 decks. Return in the following format:

  ```javascript
  {
    status: 200,
    id: '54947df8-0e9e-4471-a2f9-9af509fb5889'
  }
  ```

  cards/{deckid}/{count} - request {count} cards from deck {deckid}, {count} defaults to 1 if not provided. Return in the following format:

  ```javascript
  {
    status: 200,
    cards: ['Ah', 'Kc', 'Ts']
  }
  ```

Failure codes:
* 404 - a deck that was requested wasn't found.
* 408 - the number of decks or cards requested was invalid.
