/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:02:41 CEST 2020
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


#ifndef __DBC_O42__281_H__
#define __DBC_O42__281_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct DBC_O42_DONOR; /* DONOR */

/* DONOR */
struct DBC_O42_DONOR : public HL7Group {
  DBC_O42_DONOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DBC_O42_AL1_1,
    DBC_O42_ARV_2,
    DBC_O42_NTE_3,
    DBC_O42_OBX_4,
    DBC_O42_PD1_5,
    DBC_O42_PID_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "DBC_O42_DONOR"; }
  DBC_O42_DONOR* create() const { return new DBC_O42_DONOR(); }

 private:
  /* Initialize object */
  void init() {
    setName("DBC_O42.DONOR");
    addObject<AL1>(DBC_O42_AL1_1, "AL1.1", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DBC_O42_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DBC_O42_NTE_3, "NTE.3", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DBC_O42_OBX_4, "OBX.4", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DBC_O42_PD1_5, "PD1.5", HL7::optional, HL7::repetition_on);
    addObject<PID>(DBC_O42_PID_6, "PID.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AL1* getAL1_1(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DBC_O42_AL1_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DBC_O42_ARV_2);
  }
  NTE* getNTE_3(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DBC_O42_NTE_3);
  }
  OBX* getOBX_4(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DBC_O42_OBX_4);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DBC_O42_PD1_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DBC_O42_PID_6);
  }

  /* Checker list */
  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_3(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_4(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DBC_O42_DONOR */

/* DBC_O42 */
struct DBC_O42 : public HL7Message {
  DBC_O42() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DBC_O42_MSH_1,
    DBC_O42_SFT_2,
    DBC_O42_UAC_3,
    DBC_O42_PID_5,
    DBC_O42_PD1_6,
    DBC_O42_OBX_7,
    DBC_O42_NTE_8,
    DBC_O42_AL1_9,
    DBC_O42_ARV_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "DBC_O42"; }
  DBC_O42* create() const { return new DBC_O42(); }

 private:
  /* Initialize object */
  void init() {
    setName("DBC_O42");
    addObject<MSH>(DBC_O42_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DBC_O42_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DBC_O42_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(DBC_O42_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(DBC_O42_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<OBX>(DBC_O42_OBX_7, "OBX.7", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DBC_O42_NTE_8, "NTE.8", HL7::optional, HL7::repetition_off);
    addObject<AL1>(DBC_O42_AL1_9, "AL1.9", HL7::optional, HL7::repetition_off);
    addObject<ARV>(DBC_O42_ARV_10, "ARV.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DBC_O42_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DBC_O42_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DBC_O42_UAC_3);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DBC_O42_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DBC_O42_PD1_6);
  }
  OBX* getOBX_7(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DBC_O42_OBX_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DBC_O42_NTE_8);
  }
  AL1* getAL1_9(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DBC_O42_AL1_9);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DBC_O42_ARV_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_7(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_9(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_AL1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, DBC_O42_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DBC_O42_ */
} /* namespace HL7_281 */
#endif /*  __DBC_O42__281_H__ */
