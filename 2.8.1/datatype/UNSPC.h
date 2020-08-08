/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Warning: This file was automatically generated by [hapi-to-auriga.sh], please do not edit.
 *          Mon 22 Jun 16:45:29 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * June 2020
 */


#ifndef __UNSPC_H__
#define __UNSPC_H__

#include "../../common/Util.h"

namespace HL7_281 {

/* add comment here - UNSPC */
struct UNSPC : public HL7DataElement {
  UNSPC() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "UNSPC"; }
  UNSPC* create() const { return new UNSPC(); }
};

} /* End of namespace HL7_281 */

#endif /* __UNSPC_H__ */
