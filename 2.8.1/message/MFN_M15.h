/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:38 CEST 2020
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


#ifndef __MFN_M15__281_H__
#define __MFN_M15__281_H__

#include "../../common/Util.h"
#include "../segment/IIM.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct MFN_M15_MF_INV_ITEM; /* MF_INV_ITEM */

/* MF_INV_ITEM */
struct MFN_M15_MF_INV_ITEM : public HL7Group {
  MFN_M15_MF_INV_ITEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M15_IIM_1,
    MFN_M15_MFE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M15_MF_INV_ITEM"; }
  MFN_M15_MF_INV_ITEM* create() const { return new MFN_M15_MF_INV_ITEM(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M15.MF_INV_ITEM");
    addObject<IIM>(MFN_M15_IIM_1, "IIM.1", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M15_MFE_2, "MFE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  IIM* getIIM_1(size_t index = 0) {
    return (IIM*)this->getObjectSafe(index, MFN_M15_IIM_1);
  }
  MFE* getMFE_2(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M15_MFE_2);
  }

  /* Checker list */
  bool isIIM_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_IIM_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M15_MF_INV_ITEM */

/* MFN_M15 */
struct MFN_M15 : public HL7Message {
  MFN_M15() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M15_MSH_1,
    MFN_M15_SFT_2,
    MFN_M15_UAC_3,
    MFN_M15_MFI_4,
    MFN_M15_MFE_6,
    MFN_M15_IIM_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M15"; }
  MFN_M15* create() const { return new MFN_M15(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M15");
    addObject<MSH>(MFN_M15_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M15_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M15_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M15_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M15_MFE_6, "MFE.6", HL7::initialized, HL7::repetition_off);
    addObject<IIM>(MFN_M15_IIM_7, "IIM.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M15_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M15_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M15_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M15_MFI_4);
  }
  MFE* getMFE_6(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M15_MFE_6);
  }
  IIM* getIIM_7(size_t index = 0) {
    return (IIM*)this->getObjectSafe(index, MFN_M15_IIM_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_MFE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIIM_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M15_IIM_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M15_ */
} /* namespace HL7_281 */
#endif /*  __MFN_M15__281_H__ */
