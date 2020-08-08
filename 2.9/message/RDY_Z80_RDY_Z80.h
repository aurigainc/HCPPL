/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __RDY_Z80_RDY_Z80__29_H__
#define __RDY_Z80_RDY_Z80__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/DSP.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct RDY_Z80_RDY_Z80 : public HL7Message {
  RDY_Z80_RDY_Z80() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDY_Z80_RDY_Z80_MSH_1,
    RDY_Z80_RDY_Z80_SFT_2,
    RDY_Z80_RDY_Z80_UAC_3,
    RDY_Z80_RDY_Z80_MSA_4,
    RDY_Z80_RDY_Z80_ERR_5,
    RDY_Z80_RDY_Z80_QAK_6,
    RDY_Z80_RDY_Z80_QPD_7,
    RDY_Z80_RDY_Z80_DSP_8,
    RDY_Z80_RDY_Z80_DSC_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDY_Z80_RDY_Z80"; }
  RDY_Z80_RDY_Z80* create() const { return new RDY_Z80_RDY_Z80(); }

 private:
  /* Initialize object */
  void init() {
    setName("RDY_Z80_RDY_Z80");
    addObject<MSH>(RDY_Z80_RDY_Z80_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RDY_Z80_RDY_Z80_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RDY_Z80_RDY_Z80_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RDY_Z80_RDY_Z80_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RDY_Z80_RDY_Z80_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RDY_Z80_RDY_Z80_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RDY_Z80_RDY_Z80_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSP>(RDY_Z80_RDY_Z80_DSP_8, "DSP.8", HL7::optional, HL7::repetition_on);
    addObject<DSC>(RDY_Z80_RDY_Z80_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_QPD_7);
  }
  DSP* getDSP_8(size_t index = 0) {
    return (DSP*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_DSP_8);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RDY_Z80_RDY_Z80_DSC_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSP_8(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_DSP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RDY_Z80_RDY_Z80_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDY_Z80_RDY_Z80_ */
} /* namespace HL7_29 */
#endif /*  __RDY_Z80_RDY_Z80__29_H__ */
