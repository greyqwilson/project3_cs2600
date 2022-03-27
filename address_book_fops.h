#ifndef ADDRESS_BOOK_FOPS_H
#define ADDRESS_BOOK_FOPS_H

#include "address_book.h"

Status load_file(AddressBook *address_book);
Status save_file(AddressBook *address_book);

#endif
