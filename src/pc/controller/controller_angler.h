#ifndef CONTROLLER_ANGLER_H
#define CONTROLLER_ANGLER_H

#include <stdbool.h>
#include "controller_api.h"

bool angler_on_key_down(int scancode);
bool angler_on_key_up(int scancode);
void angler_on_all_keys_up(void);

extern struct ControllerAPI controller_angler;

#endif
