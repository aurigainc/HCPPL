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


#ifndef __SPM_v29_H__
#define __SPM_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SPM */
class SPM : public HL7Segment {
 public:
  SPM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SPM_1,
    SPM_2,
    SPM_3,
    SPM_4,
    SPM_5,
    SPM_6,
    SPM_7,
    SPM_8,
    SPM_9,
    SPM_10,
    SPM_11,
    SPM_12,
    SPM_13,
    SPM_14,
    SPM_15,
    SPM_16,
    SPM_17,
    SPM_18,
    SPM_19,
    SPM_20,
    SPM_21,
    SPM_22,
    SPM_23,
    SPM_24,
    SPM_25,
    SPM_26,
    SPM_27,
    SPM_28,
    SPM_29,
    SPM_30,
    SPM_31,
    SPM_32,
    SPM_33,
    SPM_34,
    SPM_35,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SPM"; }
  SPM* create() const { return new SPM(); }

 private:
  void init() {
    setName("SPM");
    /* Init members */
    addObject<SI>(SPM_1, "SPM.1", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(SPM_2, "SPM.2", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(SPM_3, "SPM.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_4, "SPM.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_5, "SPM.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_6, "SPM.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_7, "SPM.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_8, "SPM.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_9, "SPM.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_10, "SPM.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_11, "SPM.11", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SPM_12, "SPM.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SPM_13, "SPM.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SPM_14, "SPM.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_15, "SPM.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_16, "SPM.16", HL7::initialized, HL7::repetition_off);
    addObject<DR>(SPM_17, "SPM.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SPM_18, "SPM.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SPM_19, "SPM.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SPM_20, "SPM.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_21, "SPM.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_22, "SPM.22", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_23, "SPM.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_24, "SPM.24", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(SPM_25, "SPM.25", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SPM_26, "SPM.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_27, "SPM.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_28, "SPM.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SPM_29, "SPM.29", HL7::initialized, HL7::repetition_off);
    addObject<CX>(SPM_30, "SPM.30", HL7::initialized, HL7::repetition_off);
    addObject<CX>(SPM_31, "SPM.31", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SPM_32, "SPM.32", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SPM_33, "SPM.33", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SPM_34, "SPM.34", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SPM_35, "SPM.35", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - SPM
   */

  SI* getSPM_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SPM_1);
  }

  SI* getSetIDSPM(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SPM_1);
  }

  bool isSPM_1(size_t index = 0) {
    try {
      return this->getObject(index, SPM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDSPM(size_t index = 0) {
    try {
      return this->getObject(index, SPM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Identifier
   */

  EIP* getSPM_2(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SPM_2);
  }

  EIP* getSpecimenIdentifier(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SPM_2);
  }

  bool isSPM_2(size_t index = 0) {
    try {
      return this->getObject(index, SPM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SPM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Parent IDs
   */

  EIP* getSPM_3(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SPM_3);
  }

  EIP* getSpecimenParentIDs(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SPM_3);
  }

  bool isSPM_3(size_t index = 0) {
    try {
      return this->getObject(index, SPM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenParentIDs(size_t index = 0) {
    try {
      return this->getObject(index, SPM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Type
   */

  CWE* getSPM_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_4);
  }

  CWE* getSpecimenType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_4);
  }

  bool isSPM_4(size_t index = 0) {
    try {
      return this->getObject(index, SPM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenType(size_t index = 0) {
    try {
      return this->getObject(index, SPM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Type Modifier
   */

  CWE* getSPM_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_5);
  }

  CWE* getSpecimenTypeModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_5);
  }

  bool isSPM_5(size_t index = 0) {
    try {
      return this->getObject(index, SPM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenTypeModifier(size_t index = 0) {
    try {
      return this->getObject(index, SPM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Additives
   */

  CWE* getSPM_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_6);
  }

  CWE* getSpecimenAdditives(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_6);
  }

  bool isSPM_6(size_t index = 0) {
    try {
      return this->getObject(index, SPM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenAdditives(size_t index = 0) {
    try {
      return this->getObject(index, SPM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Collection Method
   */

  CWE* getSPM_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_7);
  }

  CWE* getSpecimenCollectionMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_7);
  }

  bool isSPM_7(size_t index = 0) {
    try {
      return this->getObject(index, SPM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCollectionMethod(size_t index = 0) {
    try {
      return this->getObject(index, SPM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Source Site
   */

  CWE* getSPM_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_8);
  }

  CWE* getSpecimenSourceSite(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_8);
  }

  bool isSPM_8(size_t index = 0) {
    try {
      return this->getObject(index, SPM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSourceSite(size_t index = 0) {
    try {
      return this->getObject(index, SPM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Source Site Modifier
   */

  CWE* getSPM_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_9);
  }

  CWE* getSpecimenSourceSiteModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_9);
  }

  bool isSPM_9(size_t index = 0) {
    try {
      return this->getObject(index, SPM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSourceSiteModifier(size_t index = 0) {
    try {
      return this->getObject(index, SPM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Collection Site
   */

  CWE* getSPM_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_10);
  }

  CWE* getSpecimenCollectionSite(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_10);
  }

  bool isSPM_10(size_t index = 0) {
    try {
      return this->getObject(index, SPM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCollectionSite(size_t index = 0) {
    try {
      return this->getObject(index, SPM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Role
   */

  CWE* getSPM_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_11);
  }

  CWE* getSpecimenRole(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_11);
  }

  bool isSPM_11(size_t index = 0) {
    try {
      return this->getObject(index, SPM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRole(size_t index = 0) {
    try {
      return this->getObject(index, SPM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Collection Amount
   */

  CQ* getSPM_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SPM_12);
  }

  CQ* getSpecimenCollectionAmount(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SPM_12);
  }

  bool isSPM_12(size_t index = 0) {
    try {
      return this->getObject(index, SPM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCollectionAmount(size_t index = 0) {
    try {
      return this->getObject(index, SPM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouped Specimen Count
   */

  NM* getSPM_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SPM_13);
  }

  NM* getGroupedSpecimenCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SPM_13);
  }

  bool isSPM_13(size_t index = 0) {
    try {
      return this->getObject(index, SPM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupedSpecimenCount(size_t index = 0) {
    try {
      return this->getObject(index, SPM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Description
   */

  ST* getSPM_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SPM_14);
  }

  ST* getSpecimenDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SPM_14);
  }

  bool isSPM_14(size_t index = 0) {
    try {
      return this->getObject(index, SPM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenDescription(size_t index = 0) {
    try {
      return this->getObject(index, SPM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Handling Code
   */

  CWE* getSPM_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_15);
  }

  CWE* getSpecimenHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_15);
  }

  bool isSPM_15(size_t index = 0) {
    try {
      return this->getObject(index, SPM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, SPM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Risk Code
   */

  CWE* getSPM_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_16);
  }

  CWE* getSpecimenRiskCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_16);
  }

  bool isSPM_16(size_t index = 0) {
    try {
      return this->getObject(index, SPM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRiskCode(size_t index = 0) {
    try {
      return this->getObject(index, SPM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Collection Date/Time
   */

  DR* getSPM_17(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, SPM_17);
  }

  DR* getSpecimenCollectionDateTime(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, SPM_17);
  }

  bool isSPM_17(size_t index = 0) {
    try {
      return this->getObject(index, SPM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCollectionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SPM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Received Date/Time
   */

  DTM* getSPM_18(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_18);
  }

  DTM* getSpecimenReceivedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_18);
  }

  bool isSPM_18(size_t index = 0) {
    try {
      return this->getObject(index, SPM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenReceivedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SPM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Expiration Date/Time
   */

  DTM* getSPM_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_19);
  }

  DTM* getSpecimenExpirationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_19);
  }

  bool isSPM_19(size_t index = 0) {
    try {
      return this->getObject(index, SPM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenExpirationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SPM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Availability
   */

  ID* getSPM_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPM_20);
  }

  ID* getSpecimenAvailability(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPM_20);
  }

  bool isSPM_20(size_t index = 0) {
    try {
      return this->getObject(index, SPM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenAvailability(size_t index = 0) {
    try {
      return this->getObject(index, SPM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Reject Reason
   */

  CWE* getSPM_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_21);
  }

  CWE* getSpecimenRejectReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_21);
  }

  bool isSPM_21(size_t index = 0) {
    try {
      return this->getObject(index, SPM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRejectReason(size_t index = 0) {
    try {
      return this->getObject(index, SPM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Quality
   */

  CWE* getSPM_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_22);
  }

  CWE* getSpecimenQuality(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_22);
  }

  bool isSPM_22(size_t index = 0) {
    try {
      return this->getObject(index, SPM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenQuality(size_t index = 0) {
    try {
      return this->getObject(index, SPM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Appropriateness
   */

  CWE* getSPM_23(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_23);
  }

  CWE* getSpecimenAppropriateness(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_23);
  }

  bool isSPM_23(size_t index = 0) {
    try {
      return this->getObject(index, SPM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenAppropriateness(size_t index = 0) {
    try {
      return this->getObject(index, SPM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Condition
   */

  CWE* getSPM_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_24);
  }

  CWE* getSpecimenCondition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_24);
  }

  bool isSPM_24(size_t index = 0) {
    try {
      return this->getObject(index, SPM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCondition(size_t index = 0) {
    try {
      return this->getObject(index, SPM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Current Quantity
   */

  CQ* getSPM_25(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SPM_25);
  }

  CQ* getSpecimenCurrentQuantity(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, SPM_25);
  }

  bool isSPM_25(size_t index = 0) {
    try {
      return this->getObject(index, SPM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenCurrentQuantity(size_t index = 0) {
    try {
      return this->getObject(index, SPM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Specimen Containers
   */

  NM* getSPM_26(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SPM_26);
  }

  NM* getNumberofSpecimenContainers(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SPM_26);
  }

  bool isSPM_26(size_t index = 0) {
    try {
      return this->getObject(index, SPM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofSpecimenContainers(size_t index = 0) {
    try {
      return this->getObject(index, SPM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Type
   */

  CWE* getSPM_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_27);
  }

  CWE* getContainerType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_27);
  }

  bool isSPM_27(size_t index = 0) {
    try {
      return this->getObject(index, SPM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerType(size_t index = 0) {
    try {
      return this->getObject(index, SPM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Condition
   */

  CWE* getSPM_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_28);
  }

  CWE* getContainerCondition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_28);
  }

  bool isSPM_28(size_t index = 0) {
    try {
      return this->getObject(index, SPM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerCondition(size_t index = 0) {
    try {
      return this->getObject(index, SPM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Child Role
   */

  CWE* getSPM_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_29);
  }

  CWE* getSpecimenChildRole(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SPM_29);
  }

  bool isSPM_29(size_t index = 0) {
    try {
      return this->getObject(index, SPM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenChildRole(size_t index = 0) {
    try {
      return this->getObject(index, SPM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accession ID
   */

  CX* getSPM_30(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SPM_30);
  }

  CX* getAccessionID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SPM_30);
  }

  bool isSPM_30(size_t index = 0) {
    try {
      return this->getObject(index, SPM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessionID(size_t index = 0) {
    try {
      return this->getObject(index, SPM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Specimen ID
   */

  CX* getSPM_31(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SPM_31);
  }

  CX* getOtherSpecimenID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, SPM_31);
  }

  bool isSPM_31(size_t index = 0) {
    try {
      return this->getObject(index, SPM_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherSpecimenID(size_t index = 0) {
    try {
      return this->getObject(index, SPM_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment ID
   */

  EI* getSPM_32(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SPM_32);
  }

  EI* getShipmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SPM_32);
  }

  bool isSPM_32(size_t index = 0) {
    try {
      return this->getObject(index, SPM_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentID(size_t index = 0) {
    try {
      return this->getObject(index, SPM_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Culture Start Date/Time
   */

  DTM* getSPM_33(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_33);
  }

  DTM* getCultureStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_33);
  }

  bool isSPM_33(size_t index = 0) {
    try {
      return this->getObject(index, SPM_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCultureStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SPM_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Culture Final Date/Time
   */

  DTM* getSPM_34(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_34);
  }

  DTM* getCultureFinalDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SPM_34);
  }

  bool isSPM_34(size_t index = 0) {
    try {
      return this->getObject(index, SPM_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCultureFinalDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SPM_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getSPM_35(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPM_35);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPM_35);
  }

  bool isSPM_35(size_t index = 0) {
    try {
      return this->getObject(index, SPM_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, SPM_35) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SPM */

} /* End of namespace HL7_29 */
#endif /* __SPM_v29_H__ */