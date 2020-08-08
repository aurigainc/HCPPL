/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:34 CEST 2020
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


#ifndef __SGT_v281_H__
#define __SGT_v281_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Segment Group Trailer */
class SGT : public HL7Segment {
 public:
  SGT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SGT_1,
    SGT_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SGT"; }
  SGT* create() const { return new SGT(); }

 private:
  void init() {
    setName("SGT");
    /* Init members */
    addObject<SI>(SGT_1, "SGT.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SGT_2, "SGT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - SGT
   */

  SI* getSGT_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGT_1);
  }

  SI* getSetIDSGT(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGT_1);
  }

  bool isSGT_1(size_t index = 0) {
    try {
      return this->getObject(index, SGT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDSGT(size_t index = 0) {
    try {
      return this->getObject(index, SGT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Group Name
   */

  ST* getSGT_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGT_2);
  }

  ST* getSegmentGroupName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGT_2);
  }

  bool isSGT_2(size_t index = 0) {
    try {
      return this->getObject(index, SGT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentGroupName(size_t index = 0) {
    try {
      return this->getObject(index, SGT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SGT */

} /* End of namespace HL7_281 */
#endif /* __SGT_v281_H__ */
