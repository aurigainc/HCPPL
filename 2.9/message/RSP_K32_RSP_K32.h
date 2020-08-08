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


#ifndef __RSP_K32_RSP_K32__29_H__
#define __RSP_K32_RSP_K32__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/QRI.h"
#include "../segment/SFT.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K32_RSP_K32_QUERY_RESPONSE; /* QUERY_RESPONSE */

/*  */
struct RSP_K32_RSP_K32 : public HL7Message {
  RSP_K32_RSP_K32() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K32_RSP_K32_MSH_1,
    RSP_K32_RSP_K32_SFT_2,
    RSP_K32_RSP_K32_MSA_3,
    RSP_K32_RSP_K32_ERR_4,
    RSP_K32_RSP_K32_QAK_5,
    RSP_K32_RSP_K32_QPD_6,
    RSP_K32_RSP_K32_DSC_8,
    RSP_K32_RSP_K32_NK1_9,
    RSP_K32_RSP_K32_PD1_10,
    RSP_K32_RSP_K32_PID_11,
    RSP_K32_RSP_K32_PV1_12,
    RSP_K32_RSP_K32_PV2_13,
    RSP_K32_RSP_K32_QRI_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K32_RSP_K32"; }
  RSP_K32_RSP_K32* create() const { return new RSP_K32_RSP_K32(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K32_RSP_K32");
    addObject<MSH>(RSP_K32_RSP_K32_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_K32_RSP_K32_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<MSA>(RSP_K32_RSP_K32_MSA_3, "MSA.3", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K32_RSP_K32_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K32_RSP_K32_QAK_5, "QAK.5", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K32_RSP_K32_QPD_6, "QPD.6", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_K32_RSP_K32_DSC_8, "DSC.8", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_K32_RSP_K32_NK1_9, "NK1.9", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_K32_RSP_K32_PD1_10, "PD1.10", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_K32_RSP_K32_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_K32_RSP_K32_PV1_12, "PV1.12", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_K32_RSP_K32_PV2_13, "PV2.13", HL7::optional, HL7::repetition_off);
    addObject<QRI>(RSP_K32_RSP_K32_QRI_14, "QRI.14", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K32_RSP_K32_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K32_RSP_K32_SFT_2);
  }
  MSA* getMSA_3(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K32_RSP_K32_MSA_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K32_RSP_K32_ERR_4);
  }
  QAK* getQAK_5(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K32_RSP_K32_QAK_5);
  }
  QPD* getQPD_6(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K32_RSP_K32_QPD_6);
  }
  DSC* getDSC_8(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K32_RSP_K32_DSC_8);
  }
  NK1* getNK1_9(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_K32_RSP_K32_NK1_9);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K32_RSP_K32_PD1_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K32_RSP_K32_PID_11);
  }
  PV1* getPV1_12(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_K32_RSP_K32_PV1_12);
  }
  PV2* getPV2_13(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_K32_RSP_K32_PV2_13);
  }
  QRI* getQRI_14(size_t index = 0) {
    return (QRI*)this->getObjectSafe(index, RSP_K32_RSP_K32_QRI_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_QAK_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_QPD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_DSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_NK1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_PV2_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRI_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K32_RSP_K32_QRI_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K32_RSP_K32_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K32_RSP_K32__29_H__ */
