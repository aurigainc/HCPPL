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


#ifndef __UB2_v29_H__
#define __UB2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"
#include "../datatype/OCD.h"
#include "../datatype/OSP.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/UVC.h"

namespace HL7_29 {

/* UB2 */
class UB2 : public HL7Segment {
 public:
  UB2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    UB2_1,
    UB2_2,
    UB2_3,
    UB2_4,
    UB2_5,
    UB2_6,
    UB2_7,
    UB2_8,
    UB2_9,
    UB2_10,
    UB2_11,
    UB2_12,
    UB2_13,
    UB2_14,
    UB2_15,
    UB2_16,
    UB2_17,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "UB2"; }
  UB2* create() const { return new UB2(); }

 private:
  void init() {
    setName("UB2");
    /* Init members */
    addObject<SI>(UB2_1, "UB2.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_2, "UB2.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(UB2_3, "UB2.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_4, "UB2.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_5, "UB2.5", HL7::initialized, HL7::repetition_off);
    addObject<UVC>(UB2_6, "UB2.6", HL7::initialized, HL7::repetition_off);
    addObject<OCD>(UB2_7, "UB2.7", HL7::initialized, HL7::repetition_off);
    addObject<OSP>(UB2_8, "UB2.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_9, "UB2.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_10, "UB2.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_11, "UB2.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_12, "UB2.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_13, "UB2.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_14, "UB2.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_15, "UB2.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB2_16, "UB2.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(UB2_17, "UB2.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - UB2
   */

  SI* getUB2_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, UB2_1);
  }

  SI* getSetIDUB2(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, UB2_1);
  }

  bool isUB2_1(size_t index = 0) {
    try {
      return this->getObject(index, UB2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDUB2(size_t index = 0) {
    try {
      return this->getObject(index, UB2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Co-Insurance Days
   */

  ST* getUB2_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_2);
  }

  ST* getCoInsuranceDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_2);
  }

  bool isUB2_2(size_t index = 0) {
    try {
      return this->getObject(index, UB2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoInsuranceDays(size_t index = 0) {
    try {
      return this->getObject(index, UB2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Condition Code
   */

  CWE* getUB2_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, UB2_3);
  }

  CWE* getConditionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, UB2_3);
  }

  bool isUB2_3(size_t index = 0) {
    try {
      return this->getObject(index, UB2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditionCode(size_t index = 0) {
    try {
      return this->getObject(index, UB2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Covered Days
   */

  ST* getUB2_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_4);
  }

  ST* getCoveredDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_4);
  }

  bool isUB2_4(size_t index = 0) {
    try {
      return this->getObject(index, UB2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoveredDays(size_t index = 0) {
    try {
      return this->getObject(index, UB2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-Covered Days
   */

  ST* getUB2_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_5);
  }

  ST* getNonCoveredDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_5);
  }

  bool isUB2_5(size_t index = 0) {
    try {
      return this->getObject(index, UB2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonCoveredDays(size_t index = 0) {
    try {
      return this->getObject(index, UB2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Amount & Code
   */

  UVC* getUB2_6(size_t index = 0) {
    return (UVC*)this->getObjectSafe(index, UB2_6);
  }

  UVC* getValueAmountCode(size_t index = 0) {
    return (UVC*)this->getObjectSafe(index, UB2_6);
  }

  bool isUB2_6(size_t index = 0) {
    try {
      return this->getObject(index, UB2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueAmountCode(size_t index = 0) {
    try {
      return this->getObject(index, UB2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Code & Date
   */

  OCD* getUB2_7(size_t index = 0) {
    return (OCD*)this->getObjectSafe(index, UB2_7);
  }

  OCD* getOccurrenceCodeDate(size_t index = 0) {
    return (OCD*)this->getObjectSafe(index, UB2_7);
  }

  bool isUB2_7(size_t index = 0) {
    try {
      return this->getObject(index, UB2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceCodeDate(size_t index = 0) {
    try {
      return this->getObject(index, UB2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Span Code/Dates
   */

  OSP* getUB2_8(size_t index = 0) {
    return (OSP*)this->getObjectSafe(index, UB2_8);
  }

  OSP* getOccurrenceSpanCodeDates(size_t index = 0) {
    return (OSP*)this->getObjectSafe(index, UB2_8);
  }

  bool isUB2_8(size_t index = 0) {
    try {
      return this->getObject(index, UB2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanCodeDates(size_t index = 0) {
    try {
      return this->getObject(index, UB2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 2
   */

  ST* getUB2_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_9);
  }

  ST* getUniformBillingLocator2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_9);
  }

  bool isUB2_9(size_t index = 0) {
    try {
      return this->getObject(index, UB2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator2(size_t index = 0) {
    try {
      return this->getObject(index, UB2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 11
   */

  ST* getUB2_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_10);
  }

  ST* getUniformBillingLocator11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_10);
  }

  bool isUB2_10(size_t index = 0) {
    try {
      return this->getObject(index, UB2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator11(size_t index = 0) {
    try {
      return this->getObject(index, UB2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 31
   */

  ST* getUB2_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_11);
  }

  ST* getUniformBillingLocator31(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_11);
  }

  bool isUB2_11(size_t index = 0) {
    try {
      return this->getObject(index, UB2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator31(size_t index = 0) {
    try {
      return this->getObject(index, UB2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Control Number
   */

  ST* getUB2_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_12);
  }

  ST* getDocumentControlNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_12);
  }

  bool isUB2_12(size_t index = 0) {
    try {
      return this->getObject(index, UB2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentControlNumber(size_t index = 0) {
    try {
      return this->getObject(index, UB2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 49
   */

  ST* getUB2_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_13);
  }

  ST* getUniformBillingLocator49(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_13);
  }

  bool isUB2_13(size_t index = 0) {
    try {
      return this->getObject(index, UB2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator49(size_t index = 0) {
    try {
      return this->getObject(index, UB2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 56
   */

  ST* getUB2_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_14);
  }

  ST* getUniformBillingLocator56(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_14);
  }

  bool isUB2_14(size_t index = 0) {
    try {
      return this->getObject(index, UB2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator56(size_t index = 0) {
    try {
      return this->getObject(index, UB2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 57
   */

  ST* getUB2_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_15);
  }

  ST* getUniformBillingLocator57(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_15);
  }

  bool isUB2_15(size_t index = 0) {
    try {
      return this->getObject(index, UB2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator57(size_t index = 0) {
    try {
      return this->getObject(index, UB2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Uniform Billing Locator 78
   */

  ST* getUB2_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_16);
  }

  ST* getUniformBillingLocator78(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB2_16);
  }

  bool isUB2_16(size_t index = 0) {
    try {
      return this->getObject(index, UB2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniformBillingLocator78(size_t index = 0) {
    try {
      return this->getObject(index, UB2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Visit Count
   */

  NM* getUB2_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, UB2_17);
  }

  NM* getSpecialVisitCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, UB2_17);
  }

  bool isUB2_17(size_t index = 0) {
    try {
      return this->getObject(index, UB2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialVisitCount(size_t index = 0) {
    try {
      return this->getObject(index, UB2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of UB2 */

} /* End of namespace HL7_29 */
#endif /* __UB2_v29_H__ */
