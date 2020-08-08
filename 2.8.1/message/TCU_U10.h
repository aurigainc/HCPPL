/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:29 CEST 2020
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


#ifndef __TCU_U10__281_H__
#define __TCU_U10__281_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TCC.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct TCU_U10_TEST_CONFIGURATION; /* TEST_CONFIGURATION */

/* TEST_CONFIGURATION */
struct TCU_U10_TEST_CONFIGURATION : public HL7Group {
  TCU_U10_TEST_CONFIGURATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    TCU_U10_SPM_1,
    TCU_U10_TCC_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "TCU_U10_TEST_CONFIGURATION"; }
  TCU_U10_TEST_CONFIGURATION* create() const { return new TCU_U10_TEST_CONFIGURATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("TCU_U10.TEST_CONFIGURATION");
    addObject<SPM>(TCU_U10_SPM_1, "SPM.1", HL7::optional, HL7::repetition_on);
    addObject<TCC>(TCU_U10_TCC_2, "TCC.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  SPM* getSPM_1(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, TCU_U10_SPM_1);
  }
  TCC* getTCC_2(size_t index = 0) {
    return (TCC*)this->getObjectSafe(index, TCU_U10_TCC_2);
  }

  /* Checker list */
  bool isSPM_1(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_SPM_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCC_2(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_TCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* TCU_U10_TEST_CONFIGURATION */

/* TCU_U10 */
struct TCU_U10 : public HL7Message {
  TCU_U10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    TCU_U10_MSH_1,
    TCU_U10_SFT_2,
    TCU_U10_UAC_3,
    TCU_U10_EQU_4,
    TCU_U10_SPM_6,
    TCU_U10_TCC_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "TCU_U10"; }
  TCU_U10* create() const { return new TCU_U10(); }

 private:
  /* Initialize object */
  void init() {
    setName("TCU_U10");
    addObject<MSH>(TCU_U10_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(TCU_U10_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(TCU_U10_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(TCU_U10_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<SPM>(TCU_U10_SPM_6, "SPM.6", HL7::optional, HL7::repetition_off);
    addObject<TCC>(TCU_U10_TCC_7, "TCC.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, TCU_U10_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, TCU_U10_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, TCU_U10_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, TCU_U10_EQU_4);
  }
  SPM* getSPM_6(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, TCU_U10_SPM_6);
  }
  TCC* getTCC_7(size_t index = 0) {
    return (TCC*)this->getObjectSafe(index, TCU_U10_TCC_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_6(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_SPM_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCC_7(size_t index = 0) {
    try {
      return this->getObject(index, TCU_U10_TCC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* TCU_U10_ */
} /* namespace HL7_281 */
#endif /*  __TCU_U10__281_H__ */
