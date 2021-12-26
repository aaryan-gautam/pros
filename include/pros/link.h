/**
 * \file pros/link.h
 *
 * Contains prototypes for functions related to the robot to robot communications.
 *
 * Visit https://pros.cs.purdue.edu/v5/api/c/link.html to learn
 * more.
 *
 * This file should not be modified by users, since it gets replaced whenever
 * a kernel upgrade occurs.
 *
 * Copyright (c) 2017-2021, Purdue University ACM SIGBots.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef _PROS_LINK_H_
#define _PROS_LINK_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
namespace pros {
#endif

typedef enum link_type_e {
    E_LINK_RECIEVER = 0,
    E_LINK_TRANSMITTER
} link_type_e_t;

#ifdef __cplusplus
namespace c {
#endif

/**
 * Initializes a link on a radio port, with an indicated type.
 *
 * \param port 
 *      The port of the radio for the intended link.
 * \param type
 *      Indicates whether the radio link on the brain is a transmitter or reciever,
 *      with the transmitter having double the transmitting bandwidth as the recieving
 *      end (1040 bytes/s vs 520 bytes/s).
 *
 * \return PROS_ERR if initialization fails, 1 if the initialization succeeds.
 */
uint32_t link_init(uint8_t port, link_type_e_t type);

/**
 * Checks if a radio link on a port is active or not.
 *
 * \param port 
 *      The port of the radio for the intended link.
 *
 * \return If a radio is connected to a port and it's connected to a link.
 */
bool link_connected(uint8_t port);


#ifdef __cplusplus
}
}
}
#endif

#endif
