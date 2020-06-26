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


#ifndef __QID_v281_H__
#define __QID_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Query Identification */
class QID : public HL7Segment {
 public:
  QID() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QID_1,
    QID_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QID"; }
  QID* create() const { return new QID(); }

 private:
  void init() {
    setName("QID");
    /* Init members */
    addObject<ST>(QID_1, "QID.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(QID_2, "QID.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getQID_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  bool isQID_1(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Query Name
   */

  CWE* getQID_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QID_2);
  }

  CWE* getMessageQueryName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QID_2);
  }

  bool isQID_2(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QID */

} /* End of namespace HL7_281 */
#endif /* __QID_v281_H__ */