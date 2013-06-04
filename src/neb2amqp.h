/*--------------------------------
# Copyright (c) 2011 "Capensis" [http://www.capensis.com]
#
# This file is part of Canopsis.
#
# Canopsis is free software: you can redistribute it and/or modify
# it under the terms of the GNU Affero General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Canopsis is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Affero General Public License for more details.
#
# You should have received a copy of the GNU Affero General Public License
# along with Canopsis.  If not, see <http://www.gnu.org/licenses/>.
# ---------------------------------*/

#ifndef _neb2amqp_h_
#define _neb2amqp_h_

#include <amqp.h>
#include <stdbool.h>

#define AMQP_MSG_SIZE_MAX 8192

bool amqp_connect (void);
void amqp_disconnect (void);
bool amqp_publish (const char *routingkey, const char *message);
int send_event (const char *routingkey, const char *message);

void on_error(int x, char const *context);
void on_amqp_error(amqp_rpc_reply_t x, char const *context);

bool toggle_blackout (void);

#endif
