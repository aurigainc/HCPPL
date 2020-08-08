/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:41 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __LRL_v281_H__
#define __LRL_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/XON.h"

namespace HL7_281 {

/* Location Relationship */
class LRL : public HL7Segment {
 public:
  LRL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LRL_1,
    LRL_2,
    LRL_3,
    LRL_4,
    LRL_5,
    LRL_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LRL"; }
  LRL* create() const { return new LRL(); }

 private:
  void init() {
    setName("LRL");
    /* Init members */
    addObject<PL>(LRL_1, "LRL.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LRL_2, "LRL.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(LRL_3, "LRL.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LRL_4, "LRL.4", HL7::initialized, HL7::repetition_off);
    addObject<XON>(LRL_5, "LRL.5", HL7::initialized, HL7::repetition_off);
    addObject<PL>(LRL_6, "LRL.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LRL
   */

  PL* getLRL_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_1);
  }

  PL* getPrimaryKeyValueLRL(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_1);
  }

  bool isLRL_1(size_t index = 0) {
    try {
      return this->getObject(index, LRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLRL(size_t index = 0) {
    try {
      return this->getObject(index, LRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getLRL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LRL_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LRL_2);
  }

  bool isLRL_2(size_t index = 0) {
    try {
      return this->getObject(index, LRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, LRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Unique Key
   */

  EI* getLRL_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LRL_3);
  }

  EI* getSegmentUniqueKey(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LRL_3);
  }

  bool isLRL_3(size_t index = 0) {
    try {
      return this->getObject(index, LRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentUniqueKey(size_t index = 0) {
    try {
      return this->getObject(index, LRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Relationship ID
   */

  CWE* getLRL_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LRL_4);
  }

  CWE* getLocationRelationshipID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LRL_4);
  }

  bool isLRL_4(size_t index = 0) {
    try {
      return this->getObject(index, LRL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationRelationshipID(size_t index = 0) {
    try {
      return this->getObject(index, LRL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organizational Location Relationship Value
   */

  XON* getLRL_5(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LRL_5);
  }

  XON* getOrganizationalLocationRelationshipValue(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LRL_5);
  }

  bool isLRL_5(size_t index = 0) {
    try {
      return this->getObject(index, LRL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationalLocationRelationshipValue(size_t index = 0) {
    try {
      return this->getObject(index, LRL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Location Relationship Value
   */

  PL* getLRL_6(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_6);
  }

  PL* getPatientLocationRelationshipValue(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_6);
  }

  bool isLRL_6(size_t index = 0) {
    try {
      return this->getObject(index, LRL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientLocationRelationshipValue(size_t index = 0) {
    try {
      return this->getObject(index, LRL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LRL */

} /* End of namespace HL7_281 */
#endif /* __LRL_v281_H__ */
