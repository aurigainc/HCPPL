/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:51 CEST 2020
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


#ifndef __RP_v281_H__
#define __RP_v281_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Reference Pointer
Repeat Pattern */
class RP : public HL7Data {
 public:
  RP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RP_1, /* Pointer */
    RP_2, /* Application ID */
    RP_3, /* Type of Data */
    RP_4, /* Subtype */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RP"; }
  RP *create() const { return new RP(); }

 private:
  void init() {
    setName("RP");
    /* Init members */
    addObject<ST>(RP_1, "RP.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(RP_2, "RP.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_3, "RP.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_4, "RP.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Pointer
   */
  ST *getRP_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  ST *getPointer(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  bool isRP_1(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointer(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application ID
   */
  HD *getRP_2(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  HD *getApplicationID(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  bool isRP_2(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationID(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of Data
   */
  ID *getRP_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  ID *getTypeofData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  bool isRP_3(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofData(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subtype
   */
  ID *getRP_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  ID *getSubtype(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  bool isRP_4(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubtype(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RP */

} /* End HL7_281 */

#endif /* __RP_v281_H__ */