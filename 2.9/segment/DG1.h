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


#ifndef __DG1_v29_H__
#define __DG1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* DG1 */
class DG1 : public HL7Segment {
 public:
  DG1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DG1_1,
    DG1_2,
    DG1_3,
    DG1_4,
    DG1_5,
    DG1_6,
    DG1_7,
    DG1_8,
    DG1_9,
    DG1_10,
    DG1_11,
    DG1_12,
    DG1_13,
    DG1_14,
    DG1_15,
    DG1_16,
    DG1_17,
    DG1_18,
    DG1_19,
    DG1_20,
    DG1_21,
    DG1_22,
    DG1_23,
    DG1_24,
    DG1_25,
    DG1_26,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DG1"; }
  DG1* create() const { return new DG1(); }

 private:
  void init() {
    setName("DG1");
    /* Init members */
    addObject<SI>(DG1_1, "DG1.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DG1_2, "DG1.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_3, "DG1.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DG1_4, "DG1.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DG1_5, "DG1.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_6, "DG1.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DG1_7, "DG1.7", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DG1_8, "DG1.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DG1_9, "DG1.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_10, "DG1.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_11, "DG1.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DG1_12, "DG1.12", HL7::initialized, HL7::repetition_off);
    addObject<CP>(DG1_13, "DG1.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DG1_14, "DG1.14", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DG1_15, "DG1.15", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(DG1_16, "DG1.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_17, "DG1.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DG1_18, "DG1.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DG1_19, "DG1.19", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DG1_20, "DG1.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DG1_21, "DG1.21", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DG1_22, "DG1.22", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_23, "DG1.23", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DG1_24, "DG1.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_25, "DG1.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DG1_26, "DG1.26", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - DG1
   */

  SI* getDG1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DG1_1);
  }

  SI* getSetIDDG1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DG1_1);
  }

  bool isDG1_1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDDG1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Coding Method
   */

  ST* getDG1_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_2);
  }

  ST* getDiagnosisCodingMethod(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_2);
  }

  bool isDG1_2(size_t index = 0) {
    try {
      return this->getObject(index, DG1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodingMethod(size_t index = 0) {
    try {
      return this->getObject(index, DG1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Code - DG1
   */

  CWE* getDG1_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_3);
  }

  CWE* getDiagnosisCodeDG1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_3);
  }

  bool isDG1_3(size_t index = 0) {
    try {
      return this->getObject(index, DG1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodeDG1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Description
   */

  ST* getDG1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_4);
  }

  ST* getDiagnosisDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_4);
  }

  bool isDG1_4(size_t index = 0) {
    try {
      return this->getObject(index, DG1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisDescription(size_t index = 0) {
    try {
      return this->getObject(index, DG1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Date/Time
   */

  DTM* getDG1_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DG1_5);
  }

  DTM* getDiagnosisDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DG1_5);
  }

  bool isDG1_5(size_t index = 0) {
    try {
      return this->getObject(index, DG1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DG1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Type
   */

  CWE* getDG1_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_6);
  }

  CWE* getDiagnosisType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_6);
  }

  bool isDG1_6(size_t index = 0) {
    try {
      return this->getObject(index, DG1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Major Diagnostic Category
   */

  CNE* getDG1_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DG1_7);
  }

  CNE* getMajorDiagnosticCategory(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DG1_7);
  }

  bool isDG1_7(size_t index = 0) {
    try {
      return this->getObject(index, DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMajorDiagnosticCategory(size_t index = 0) {
    try {
      return this->getObject(index, DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnostic Related Group
   */

  CNE* getDG1_8(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DG1_8);
  }

  CNE* getDiagnosticRelatedGroup(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DG1_8);
  }

  bool isDG1_8(size_t index = 0) {
    try {
      return this->getObject(index, DG1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticRelatedGroup(size_t index = 0) {
    try {
      return this->getObject(index, DG1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Approval Indicator
   */

  ID* getDG1_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_9);
  }

  ID* getDRGApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_9);
  }

  bool isDG1_9(size_t index = 0) {
    try {
      return this->getObject(index, DG1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DG1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Grouper Review Code
   */

  CWE* getDG1_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_10);
  }

  CWE* getDRGGrouperReviewCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_10);
  }

  bool isDG1_10(size_t index = 0) {
    try {
      return this->getObject(index, DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGGrouperReviewCode(size_t index = 0) {
    try {
      return this->getObject(index, DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Type
   */

  CWE* getDG1_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_11);
  }

  CWE* getOutlierType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_11);
  }

  bool isDG1_11(size_t index = 0) {
    try {
      return this->getObject(index, DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Days
   */

  NM* getDG1_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_12);
  }

  NM* getOutlierDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_12);
  }

  bool isDG1_12(size_t index = 0) {
    try {
      return this->getObject(index, DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierDays(size_t index = 0) {
    try {
      return this->getObject(index, DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getDG1_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DG1_13);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DG1_13);
  }

  bool isDG1_13(size_t index = 0) {
    try {
      return this->getObject(index, DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouper Version And Type
   */

  ST* getDG1_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_14);
  }

  ST* getGrouperVersionAndType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_14);
  }

  bool isDG1_14(size_t index = 0) {
    try {
      return this->getObject(index, DG1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrouperVersionAndType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Priority
   */

  NM* getDG1_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_15);
  }

  NM* getDiagnosisPriority(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_15);
  }

  bool isDG1_15(size_t index = 0) {
    try {
      return this->getObject(index, DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisPriority(size_t index = 0) {
    try {
      return this->getObject(index, DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosing Clinician
   */

  XCN* getDG1_16(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DG1_16);
  }

  XCN* getDiagnosingClinician(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DG1_16);
  }

  bool isDG1_16(size_t index = 0) {
    try {
      return this->getObject(index, DG1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosingClinician(size_t index = 0) {
    try {
      return this->getObject(index, DG1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Classification
   */

  CWE* getDG1_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_17);
  }

  CWE* getDiagnosisClassification(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_17);
  }

  bool isDG1_17(size_t index = 0) {
    try {
      return this->getObject(index, DG1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisClassification(size_t index = 0) {
    try {
      return this->getObject(index, DG1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidential Indicator
   */

  ID* getDG1_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_18);
  }

  ID* getConfidentialIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_18);
  }

  bool isDG1_18(size_t index = 0) {
    try {
      return this->getObject(index, DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attestation Date/Time
   */

  DTM* getDG1_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DG1_19);
  }

  DTM* getAttestationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DG1_19);
  }

  bool isDG1_19(size_t index = 0) {
    try {
      return this->getObject(index, DG1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttestationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DG1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Identifier
   */

  EI* getDG1_20(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DG1_20);
  }

  EI* getDiagnosisIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DG1_20);
  }

  bool isDG1_20(size_t index = 0) {
    try {
      return this->getObject(index, DG1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DG1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Action Code
   */

  ID* getDG1_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_21);
  }

  ID* getDiagnosisActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_21);
  }

  bool isDG1_21(size_t index = 0) {
    try {
      return this->getObject(index, DG1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisActionCode(size_t index = 0) {
    try {
      return this->getObject(index, DG1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Diagnosis
   */

  EI* getDG1_22(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DG1_22);
  }

  EI* getParentDiagnosis(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DG1_22);
  }

  bool isDG1_22(size_t index = 0) {
    try {
      return this->getObject(index, DG1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentDiagnosis(size_t index = 0) {
    try {
      return this->getObject(index, DG1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG CCL Value Code
   */

  CWE* getDG1_23(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_23);
  }

  CWE* getDRGCCLValueCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_23);
  }

  bool isDG1_23(size_t index = 0) {
    try {
      return this->getObject(index, DG1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGCCLValueCode(size_t index = 0) {
    try {
      return this->getObject(index, DG1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Grouping Usage
   */

  ID* getDG1_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_24);
  }

  ID* getDRGGroupingUsage(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_24);
  }

  bool isDG1_24(size_t index = 0) {
    try {
      return this->getObject(index, DG1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGGroupingUsage(size_t index = 0) {
    try {
      return this->getObject(index, DG1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Diagnosis Determination Status
   */

  CWE* getDG1_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_25);
  }

  CWE* getDRGDiagnosisDeterminationStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_25);
  }

  bool isDG1_25(size_t index = 0) {
    try {
      return this->getObject(index, DG1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGDiagnosisDeterminationStatus(size_t index = 0) {
    try {
      return this->getObject(index, DG1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Present On Admission
   */

  CWE* getDG1_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_26);
  }

  CWE* getPresentOnAdmission(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DG1_26);
  }

  bool isDG1_26(size_t index = 0) {
    try {
      return this->getObject(index, DG1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPresentOnAdmission(size_t index = 0) {
    try {
      return this->getObject(index, DG1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DG1 */

} /* End of namespace HL7_29 */
#endif /* __DG1_v29_H__ */
