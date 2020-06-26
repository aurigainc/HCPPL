/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:06:11 CEST 2020
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


#ifndef __QVR_Q17__281_H__
#define __QVR_Q17__281_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/Hxx.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct QVR_Q17_QBP; /* QBP */

/* QBP */
struct QVR_Q17_QBP : public HL7Group {
  QVR_Q17_QBP() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QVR_Q17_Hxx_1,
    FIELD_ID_MAX
  };

  const char* className() const { return "QVR_Q17_QBP"; }
  QVR_Q17_QBP* create() const { return new QVR_Q17_QBP(); }

 private:
  /* Initialize object */
  void init() {
    setName("QVR_Q17.QBP");
    addObject<Hxx>(QVR_Q17_Hxx_1, "Hxx.1", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  Hxx* getHxx_1(size_t index = 0) {
    return (Hxx*)this->getObjectSafe(index, QVR_Q17_Hxx_1);
  }

  /* Checker list */
  bool isHxx_1(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_Hxx_1) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QVR_Q17_QBP */

/* QVR_Q17 */
struct QVR_Q17 : public HL7Message {
  QVR_Q17() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QVR_Q17_MSH_1,
    QVR_Q17_SFT_2,
    QVR_Q17_UAC_3,
    QVR_Q17_QPD_4,
    QVR_Q17_RCP_6,
    QVR_Q17_DSC_7,
    QVR_Q17_Hxx_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "QVR_Q17"; }
  QVR_Q17* create() const { return new QVR_Q17(); }

 private:
  /* Initialize object */
  void init() {
    setName("QVR_Q17");
    addObject<MSH>(QVR_Q17_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QVR_Q17_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QVR_Q17_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QVR_Q17_QPD_4, "QPD.4", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QVR_Q17_RCP_6, "RCP.6", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(QVR_Q17_DSC_7, "DSC.7", HL7::optional, HL7::repetition_off);
    addObject<Hxx>(QVR_Q17_Hxx_8, "Hxx.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QVR_Q17_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QVR_Q17_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QVR_Q17_UAC_3);
  }
  QPD* getQPD_4(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QVR_Q17_QPD_4);
  }
  RCP* getRCP_6(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QVR_Q17_RCP_6);
  }
  DSC* getDSC_7(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QVR_Q17_DSC_7);
  }
  Hxx* getHxx_8(size_t index = 0) {
    return (Hxx*)this->getObjectSafe(index, QVR_Q17_Hxx_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_4(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_QPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_7(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_DSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isHxx_8(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_Hxx_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QVR_Q17_ */
} /* namespace HL7_281 */
#endif /*  __QVR_Q17__281_H__ */