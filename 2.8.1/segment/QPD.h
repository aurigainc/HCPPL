/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:16 CEST 2020
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


#ifndef __QPD_v281_H__
#define __QPD_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"
#include "../datatype/Varies.h"

namespace HL7_281 {

/* Query Parameter Definition */
class QPD : public HL7Segment {
 public:
  QPD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QPD_1,
    QPD_2,
    QPD_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QPD"; }
  QPD* create() const { return new QPD(); }

 private:
  void init() {
    setName("QPD");
    /* Init members */
    addObject<CWE>(QPD_1, "QPD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QPD_2, "QPD.2", HL7::initialized, HL7::repetition_off);
    addObject<Varies>(QPD_3, "QPD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Message Query Name
   */

  CWE* getQPD_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QPD_1);
  }

  CWE* getMessageQueryName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QPD_1);
  }

  bool isQPD_1(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Tag
   */

  ST* getQPD_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Parameters
   */

  Varies* getQPD_3(size_t index = 0) {
    return (Varies*)this->getObjectSafe(index, QPD_3);
  }

  Varies* getUserParameters(size_t index = 0) {
    return (Varies*)this->getObjectSafe(index, QPD_3);
  }

  bool isQPD_3(size_t index = 0) {
    try {
      return this->getObject(index, QPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserParameters(size_t index = 0) {
    try {
      return this->getObject(index, QPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QPD */

} /* End of namespace HL7_281 */
#endif /* __QPD_v281_H__ */
