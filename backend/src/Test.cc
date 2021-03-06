// Test.cc --- The main controller
//
// Copyright (C) 2006, 2007, 2008, 2009 Rob Caelers <robc@krandor.nl>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_DBUS
#include "DBus.hh"
#endif

#ifdef HAVE_TESTS

#include "nls.h"

#include "Test.hh"
#include "CoreFactory.hh"
#include "Core.hh"
#include "IApp.hh"

Test *Test::instance = NULL;

void
Test::quit()
{
  Core *core = Core::get_instance();

  core->application->terminate();
}

#endif
