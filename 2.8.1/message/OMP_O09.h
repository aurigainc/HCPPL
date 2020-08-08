/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:04:22 CEST 2020
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


#ifndef __OMP_O09__281_H__
#define __OMP_O09__281_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BLG.h"
#include "../segment/CDO.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXC.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct OMP_O09_PATIENT; /* PATIENT */
struct OMP_O09_ORDER; /* ORDER */
struct OMP_O09_TIMING; /* TIMING */
struct OMP_O09_COMPONENT; /* COMPONENT */
struct OMP_O09_OBSERVATION; /* OBSERVATION */
struct OMP_O09_ADDITIONAL_DEMOGRAPHICS; /* ADDITIONAL_DEMOGRAPHICS */
struct OMP_O09_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMP_O09_INSURANCE; /* INSURANCE */

/* PATIENT */
struct OMP_O09_PATIENT : public HL7Group {
  OMP_O09_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_AL1_1,
    OMP_O09_ARV_2,
    OMP_O09_GT1_3,
    OMP_O09_NTE_4,
    OMP_O09_OMP_O09_ADDITIONAL_DEMOGRAPHICS_5,
    OMP_O09_OMP_O09_INSURANCE_6,
    OMP_O09_OMP_O09_PATIENT_VISIT_7,
    OMP_O09_PID_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_PATIENT"; }
  OMP_O09_PATIENT* create() const { return new OMP_O09_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.PATIENT");
    addObject<AL1>(OMP_O09_AL1_1, "AL1.1", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMP_O09_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMP_O09_GT1_3, "GT1.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMP_O09_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_ADDITIONAL_DEMOGRAPHICS>(OMP_O09_OMP_O09_ADDITIONAL_DEMOGRAPHICS_5, "OMP_O09_ADDITIONAL_DEMOGRAPHICS.5", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_INSURANCE>(OMP_O09_OMP_O09_INSURANCE_6, "OMP_O09_INSURANCE.6", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_PATIENT_VISIT>(OMP_O09_OMP_O09_PATIENT_VISIT_7, "OMP_O09_PATIENT_VISIT.7", HL7::optional, HL7::repetition_on);
    addObject<PID>(OMP_O09_PID_8, "PID.8", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AL1* getAL1_1(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMP_O09_AL1_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMP_O09_ARV_2);
  }
  GT1* getGT1_3(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMP_O09_GT1_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_4);
  }
  OMP_O09_ADDITIONAL_DEMOGRAPHICS* getOMP_O09_ADDITIONAL_DEMOGRAPHICS_5(size_t index = 0) {
    return (OMP_O09_ADDITIONAL_DEMOGRAPHICS*)this->getObjectSafe(index, OMP_O09_OMP_O09_ADDITIONAL_DEMOGRAPHICS_5);
  }
  OMP_O09_INSURANCE* getOMP_O09_INSURANCE_6(size_t index = 0) {
    return (OMP_O09_INSURANCE*)this->getObjectSafe(index, OMP_O09_OMP_O09_INSURANCE_6);
  }
  OMP_O09_PATIENT_VISIT* getOMP_O09_PATIENT_VISIT_7(size_t index = 0) {
    return (OMP_O09_PATIENT_VISIT*)this->getObjectSafe(index, OMP_O09_OMP_O09_PATIENT_VISIT_7);
  }
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMP_O09_PID_8);
  }

  /* Checker list */
  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_GT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_ADDITIONAL_DEMOGRAPHICS_5(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_ADDITIONAL_DEMOGRAPHICS_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_INSURANCE_6(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_INSURANCE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_PATIENT_VISIT_7(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_PATIENT_VISIT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_PATIENT */

/* ORDER */
struct OMP_O09_ORDER : public HL7Group {
  OMP_O09_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_BLG_1,
    OMP_O09_CDO_2,
    OMP_O09_FT1_3,
    OMP_O09_NTE_4,
    OMP_O09_OMP_O09_COMPONENT_5,
    OMP_O09_OMP_O09_OBSERVATION_6,
    OMP_O09_OMP_O09_TIMING_7,
    OMP_O09_ORC_8,
    OMP_O09_PRT_9,
    OMP_O09_RXO_10,
    OMP_O09_RXR_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_ORDER"; }
  OMP_O09_ORDER* create() const { return new OMP_O09_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.ORDER");
    addObject<BLG>(OMP_O09_BLG_1, "BLG.1", HL7::optional, HL7::repetition_on);
    addObject<CDO>(OMP_O09_CDO_2, "CDO.2", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OMP_O09_FT1_3, "FT1.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMP_O09_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_COMPONENT>(OMP_O09_OMP_O09_COMPONENT_5, "OMP_O09_COMPONENT.5", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_OBSERVATION>(OMP_O09_OMP_O09_OBSERVATION_6, "OMP_O09_OBSERVATION.6", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_TIMING>(OMP_O09_OMP_O09_TIMING_7, "OMP_O09_TIMING.7", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMP_O09_ORC_8, "ORC.8", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMP_O09_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
    addObject<RXO>(OMP_O09_RXO_10, "RXO.10", HL7::optional, HL7::repetition_on);
    addObject<RXR>(OMP_O09_RXR_11, "RXR.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  BLG* getBLG_1(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMP_O09_BLG_1);
  }
  CDO* getCDO_2(size_t index = 0) {
    return (CDO*)this->getObjectSafe(index, OMP_O09_CDO_2);
  }
  FT1* getFT1_3(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMP_O09_FT1_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_4);
  }
  OMP_O09_COMPONENT* getOMP_O09_COMPONENT_5(size_t index = 0) {
    return (OMP_O09_COMPONENT*)this->getObjectSafe(index, OMP_O09_OMP_O09_COMPONENT_5);
  }
  OMP_O09_OBSERVATION* getOMP_O09_OBSERVATION_6(size_t index = 0) {
    return (OMP_O09_OBSERVATION*)this->getObjectSafe(index, OMP_O09_OMP_O09_OBSERVATION_6);
  }
  OMP_O09_TIMING* getOMP_O09_TIMING_7(size_t index = 0) {
    return (OMP_O09_TIMING*)this->getObjectSafe(index, OMP_O09_OMP_O09_TIMING_7);
  }
  ORC* getORC_8(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMP_O09_ORC_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_9);
  }
  RXO* getRXO_10(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, OMP_O09_RXO_10);
  }
  RXR* getRXR_11(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, OMP_O09_RXR_11);
  }

  /* Checker list */
  bool isBLG_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_BLG_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCDO_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_CDO_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_FT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_COMPONENT_5(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_COMPONENT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_OBSERVATION_6(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_OBSERVATION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMP_O09_TIMING_7(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OMP_O09_TIMING_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_8(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_10(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXO_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_11(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXR_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_ORDER */

/* TIMING */
struct OMP_O09_TIMING : public HL7Group {
  OMP_O09_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_TQ1_1,
    OMP_O09_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_TIMING"; }
  OMP_O09_TIMING* create() const { return new OMP_O09_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.TIMING");
    addObject<TQ1>(OMP_O09_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(OMP_O09_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMP_O09_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMP_O09_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_TIMING */

/* COMPONENT */
struct OMP_O09_COMPONENT : public HL7Group {
  OMP_O09_COMPONENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_NTE_1,
    OMP_O09_RXC_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_COMPONENT"; }
  OMP_O09_COMPONENT* create() const { return new OMP_O09_COMPONENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.COMPONENT");
    addObject<NTE>(OMP_O09_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<RXC>(OMP_O09_RXC_2, "RXC.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_1);
  }
  RXC* getRXC_2(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, OMP_O09_RXC_2);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXC_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_COMPONENT */

/* OBSERVATION */
struct OMP_O09_OBSERVATION : public HL7Group {
  OMP_O09_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_NTE_1,
    OMP_O09_OBX_2,
    OMP_O09_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_OBSERVATION"; }
  OMP_O09_OBSERVATION* create() const { return new OMP_O09_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.OBSERVATION");
    addObject<NTE>(OMP_O09_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMP_O09_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMP_O09_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMP_O09_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_OBSERVATION */

/* ADDITIONAL_DEMOGRAPHICS */
struct OMP_O09_ADDITIONAL_DEMOGRAPHICS : public HL7Group {
  OMP_O09_ADDITIONAL_DEMOGRAPHICS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_PD1_1,
    OMP_O09_PRT_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_ADDITIONAL_DEMOGRAPHICS"; }
  OMP_O09_ADDITIONAL_DEMOGRAPHICS* create() const { return new OMP_O09_ADDITIONAL_DEMOGRAPHICS(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.ADDITIONAL_DEMOGRAPHICS");
    addObject<PD1>(OMP_O09_PD1_1, "PD1.1", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMP_O09_PRT_2, "PRT.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PD1* getPD1_1(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMP_O09_PD1_1);
  }
  PRT* getPRT_2(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_2);
  }

  /* Checker list */
  bool isPD1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PD1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_ADDITIONAL_DEMOGRAPHICS */

/* PATIENT_VISIT */
struct OMP_O09_PATIENT_VISIT : public HL7Group {
  OMP_O09_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_ARV_1,
    OMP_O09_PRT_2,
    OMP_O09_PV1_3,
    OMP_O09_PV2_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_PATIENT_VISIT"; }
  OMP_O09_PATIENT_VISIT* create() const { return new OMP_O09_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.PATIENT_VISIT");
    addObject<ARV>(OMP_O09_ARV_1, "ARV.1", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMP_O09_PRT_2, "PRT.2", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMP_O09_PV1_3, "PV1.3", HL7::optional, HL7::repetition_on);
    addObject<PV2>(OMP_O09_PV2_4, "PV2.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ARV* getARV_1(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMP_O09_ARV_1);
  }
  PRT* getPRT_2(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_2);
  }
  PV1* getPV1_3(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMP_O09_PV1_3);
  }
  PV2* getPV2_4(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMP_O09_PV2_4);
  }

  /* Checker list */
  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_4(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV2_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_PATIENT_VISIT */

/* INSURANCE */
struct OMP_O09_INSURANCE : public HL7Group {
  OMP_O09_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_IN1_1,
    OMP_O09_IN2_2,
    OMP_O09_IN3_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_INSURANCE"; }
  OMP_O09_INSURANCE* create() const { return new OMP_O09_INSURANCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.INSURANCE");
    addObject<IN1>(OMP_O09_IN1_1, "IN1.1", HL7::optional, HL7::repetition_on);
    addObject<IN2>(OMP_O09_IN2_2, "IN2.2", HL7::optional, HL7::repetition_on);
    addObject<IN3>(OMP_O09_IN3_3, "IN3.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  IN1* getIN1_1(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMP_O09_IN1_1);
  }
  IN2* getIN2_2(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMP_O09_IN2_2);
  }
  IN3* getIN3_3(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMP_O09_IN3_3);
  }

  /* Checker list */
  bool isIN1_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_INSURANCE */

/* OMP_O09 */
struct OMP_O09 : public HL7Message {
  OMP_O09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_MSH_1,
    OMP_O09_SFT_2,
    OMP_O09_UAC_3,
    OMP_O09_NTE_4,
    OMP_O09_FT1_7,
    OMP_O09_BLG_8,
    OMP_O09_ORC_9,
    OMP_O09_RXO_11,
    OMP_O09_PRT_12,
    OMP_O09_NTE_13,
    OMP_O09_RXR_14,
    OMP_O09_CDO_16,
    OMP_O09_TQ1_18,
    OMP_O09_TQ2_19,
    OMP_O09_TQ1_20,
    OMP_O09_TQ2_21,
    OMP_O09_RXC_22,
    OMP_O09_NTE_23,
    OMP_O09_TQ1_24,
    OMP_O09_TQ2_25,
    OMP_O09_RXC_26,
    OMP_O09_NTE_27,
    OMP_O09_OBX_28,
    OMP_O09_PRT_29,
    OMP_O09_NTE_30,
    OMP_O09_PID_31,
    OMP_O09_NTE_33,
    OMP_O09_ARV_34,
    OMP_O09_GT1_37,
    OMP_O09_AL1_38,
    OMP_O09_PD1_39,
    OMP_O09_PRT_40,
    OMP_O09_PD1_41,
    OMP_O09_PRT_42,
    OMP_O09_PV1_43,
    OMP_O09_PV2_44,
    OMP_O09_PRT_45,
    OMP_O09_ARV_46,
    OMP_O09_PD1_47,
    OMP_O09_PRT_48,
    OMP_O09_PV1_49,
    OMP_O09_PV2_50,
    OMP_O09_PRT_51,
    OMP_O09_ARV_52,
    OMP_O09_IN1_53,
    OMP_O09_IN2_54,
    OMP_O09_IN3_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09"; }
  OMP_O09* create() const { return new OMP_O09(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09");
    addObject<MSH>(OMP_O09_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(OMP_O09_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMP_O09_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OMP_O09_FT1_7, "FT1.7", HL7::optional, HL7::repetition_off);
    addObject<BLG>(OMP_O09_BLG_8, "BLG.8", HL7::optional, HL7::repetition_off);
    addObject<ORC>(OMP_O09_ORC_9, "ORC.9", HL7::initialized, HL7::repetition_off);
    addObject<RXO>(OMP_O09_RXO_11, "RXO.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_12, "PRT.12", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_13, "NTE.13", HL7::optional, HL7::repetition_off);
    addObject<RXR>(OMP_O09_RXR_14, "RXR.14", HL7::initialized, HL7::repetition_off);
    addObject<CDO>(OMP_O09_CDO_16, "CDO.16", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMP_O09_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMP_O09_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMP_O09_TQ1_20, "TQ1.20", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMP_O09_TQ2_21, "TQ2.21", HL7::optional, HL7::repetition_off);
    addObject<RXC>(OMP_O09_RXC_22, "RXC.22", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_23, "NTE.23", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMP_O09_TQ1_24, "TQ1.24", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMP_O09_TQ2_25, "TQ2.25", HL7::optional, HL7::repetition_off);
    addObject<RXC>(OMP_O09_RXC_26, "RXC.26", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_27, "NTE.27", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OMP_O09_OBX_28, "OBX.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_29, "PRT.29", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_30, "NTE.30", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMP_O09_PID_31, "PID.31", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_33, "NTE.33", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMP_O09_ARV_34, "ARV.34", HL7::optional, HL7::repetition_off);
    addObject<GT1>(OMP_O09_GT1_37, "GT1.37", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OMP_O09_AL1_38, "AL1.38", HL7::optional, HL7::repetition_off);
    addObject<PD1>(OMP_O09_PD1_39, "PD1.39", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_40, "PRT.40", HL7::optional, HL7::repetition_off);
    addObject<PD1>(OMP_O09_PD1_41, "PD1.41", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_42, "PRT.42", HL7::optional, HL7::repetition_off);
    addObject<PV1>(OMP_O09_PV1_43, "PV1.43", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMP_O09_PV2_44, "PV2.44", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_45, "PRT.45", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMP_O09_ARV_46, "ARV.46", HL7::optional, HL7::repetition_off);
    addObject<PD1>(OMP_O09_PD1_47, "PD1.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_48, "PRT.48", HL7::optional, HL7::repetition_off);
    addObject<PV1>(OMP_O09_PV1_49, "PV1.49", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMP_O09_PV2_50, "PV2.50", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMP_O09_PRT_51, "PRT.51", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMP_O09_ARV_52, "ARV.52", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMP_O09_IN1_53, "IN1.53", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMP_O09_IN2_54, "IN2.54", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMP_O09_IN3_55, "IN3.55", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMP_O09_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMP_O09_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMP_O09_UAC_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_4);
  }
  FT1* getFT1_7(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMP_O09_FT1_7);
  }
  BLG* getBLG_8(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMP_O09_BLG_8);
  }
  ORC* getORC_9(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMP_O09_ORC_9);
  }
  RXO* getRXO_11(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, OMP_O09_RXO_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_13);
  }
  RXR* getRXR_14(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, OMP_O09_RXR_14);
  }
  CDO* getCDO_16(size_t index = 0) {
    return (CDO*)this->getObjectSafe(index, OMP_O09_CDO_16);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMP_O09_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMP_O09_TQ2_19);
  }
  TQ1* getTQ1_20(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMP_O09_TQ1_20);
  }
  TQ2* getTQ2_21(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMP_O09_TQ2_21);
  }
  RXC* getRXC_22(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, OMP_O09_RXC_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_23);
  }
  TQ1* getTQ1_24(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMP_O09_TQ1_24);
  }
  TQ2* getTQ2_25(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMP_O09_TQ2_25);
  }
  RXC* getRXC_26(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, OMP_O09_RXC_26);
  }
  NTE* getNTE_27(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_27);
  }
  OBX* getOBX_28(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMP_O09_OBX_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_29);
  }
  NTE* getNTE_30(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_30);
  }
  PID* getPID_31(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMP_O09_PID_31);
  }
  NTE* getNTE_33(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_33);
  }
  ARV* getARV_34(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMP_O09_ARV_34);
  }
  GT1* getGT1_37(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMP_O09_GT1_37);
  }
  AL1* getAL1_38(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMP_O09_AL1_38);
  }
  PD1* getPD1_39(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMP_O09_PD1_39);
  }
  PRT* getPRT_40(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_40);
  }
  PD1* getPD1_41(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMP_O09_PD1_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_42);
  }
  PV1* getPV1_43(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMP_O09_PV1_43);
  }
  PV2* getPV2_44(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMP_O09_PV2_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_45);
  }
  ARV* getARV_46(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMP_O09_ARV_46);
  }
  PD1* getPD1_47(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMP_O09_PD1_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_48);
  }
  PV1* getPV1_49(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMP_O09_PV1_49);
  }
  PV2* getPV2_50(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMP_O09_PV2_50);
  }
  PRT* getPRT_51(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMP_O09_PRT_51);
  }
  ARV* getARV_52(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMP_O09_ARV_52);
  }
  IN1* getIN1_53(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMP_O09_IN1_53);
  }
  IN2* getIN2_54(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMP_O09_IN2_54);
  }
  IN3* getIN3_55(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMP_O09_IN3_55);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_7(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_FT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_8(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_BLG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_9(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ORC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_11(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXO_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_14(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXR_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCDO_16(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_CDO_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_20(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_21(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ2_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_22(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXC_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_24(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_25(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_TQ2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_26(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXC_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_27(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_28(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OBX_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_30(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_31(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PID_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_33(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_34(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ARV_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_37(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_GT1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_38(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_AL1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PD1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_40(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_41(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PD1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_43(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_44(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV2_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_46(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ARV_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_47(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PD1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_49(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_50(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_51(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PRT_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_52(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ARV_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_53(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_54(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN2_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_55(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN3_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_ */
} /* namespace HL7_281 */
#endif /*  __OMP_O09__281_H__ */
