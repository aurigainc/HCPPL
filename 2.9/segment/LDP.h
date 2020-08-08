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


#ifndef __LDP_v29_H__
#define __LDP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/VH.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* LDP */
class LDP : public HL7Segment {
 public:
  LDP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LDP_1,
    LDP_2,
    LDP_3,
    LDP_4,
    LDP_5,
    LDP_6,
    LDP_7,
    LDP_8,
    LDP_9,
    LDP_10,
    LDP_11,
    LDP_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LDP"; }
  LDP* create() const { return new LDP(); }

 private:
  void init() {
    setName("LDP");
    /* Init members */
    addObject<PL>(LDP_1, "LDP.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LDP_2, "LDP.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LDP_3, "LDP.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LDP_4, "LDP.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LDP_5, "LDP.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LDP_6, "LDP.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(LDP_7, "LDP.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(LDP_8, "LDP.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LDP_9, "LDP.9", HL7::initialized, HL7::repetition_off);
    addObject<VH>(LDP_10, "LDP.10", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(LDP_11, "LDP.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LDP_12, "LDP.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LDP
   */

  PL* getLDP_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LDP_1);
  }

  PL* getPrimaryKeyValueLDP(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LDP_1);
  }

  bool isLDP_1(size_t index = 0) {
    try {
      return this->getObject(index, LDP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLDP(size_t index = 0) {
    try {
      return this->getObject(index, LDP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Department
   */

  CWE* getLDP_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_2);
  }

  CWE* getLocationDepartment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_2);
  }

  bool isLDP_2(size_t index = 0) {
    try {
      return this->getObject(index, LDP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDepartment(size_t index = 0) {
    try {
      return this->getObject(index, LDP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Service
   */

  CWE* getLDP_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_3);
  }

  CWE* getLocationService(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_3);
  }

  bool isLDP_3(size_t index = 0) {
    try {
      return this->getObject(index, LDP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationService(size_t index = 0) {
    try {
      return this->getObject(index, LDP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specialty Type
   */

  CWE* getLDP_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_4);
  }

  CWE* getSpecialtyType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_4);
  }

  bool isLDP_4(size_t index = 0) {
    try {
      return this->getObject(index, LDP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialtyType(size_t index = 0) {
    try {
      return this->getObject(index, LDP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Valid Patient Classes
   */

  CWE* getLDP_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_5);
  }

  CWE* getValidPatientClasses(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_5);
  }

  bool isLDP_5(size_t index = 0) {
    try {
      return this->getObject(index, LDP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValidPatientClasses(size_t index = 0) {
    try {
      return this->getObject(index, LDP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Active/Inactive Flag
   */

  ID* getLDP_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LDP_6);
  }

  ID* getActiveInactiveFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LDP_6);
  }

  bool isLDP_6(size_t index = 0) {
    try {
      return this->getObject(index, LDP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActiveInactiveFlag(size_t index = 0) {
    try {
      return this->getObject(index, LDP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Activation Date - LDP
   */

  DTM* getLDP_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, LDP_7);
  }

  DTM* getActivationDateLDP(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, LDP_7);
  }

  bool isLDP_7(size_t index = 0) {
    try {
      return this->getObject(index, LDP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActivationDateLDP(size_t index = 0) {
    try {
      return this->getObject(index, LDP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivation Date - LDP
   */

  DTM* getLDP_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, LDP_8);
  }

  DTM* getInactivationDateLDP(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, LDP_8);
  }

  bool isLDP_8(size_t index = 0) {
    try {
      return this->getObject(index, LDP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivationDateLDP(size_t index = 0) {
    try {
      return this->getObject(index, LDP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactivated Reason
   */

  ST* getLDP_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LDP_9);
  }

  ST* getInactivatedReason(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LDP_9);
  }

  bool isLDP_9(size_t index = 0) {
    try {
      return this->getObject(index, LDP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactivatedReason(size_t index = 0) {
    try {
      return this->getObject(index, LDP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visiting Hours
   */

  VH* getLDP_10(size_t index = 0) {
    return (VH*)this->getObjectSafe(index, LDP_10);
  }

  VH* getVisitingHours(size_t index = 0) {
    return (VH*)this->getObjectSafe(index, LDP_10);
  }

  bool isLDP_10(size_t index = 0) {
    try {
      return this->getObject(index, LDP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitingHours(size_t index = 0) {
    try {
      return this->getObject(index, LDP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Phone
   */

  XTN* getLDP_11(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LDP_11);
  }

  XTN* getContactPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LDP_11);
  }

  bool isLDP_11(size_t index = 0) {
    try {
      return this->getObject(index, LDP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPhone(size_t index = 0) {
    try {
      return this->getObject(index, LDP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Cost Center
   */

  CWE* getLDP_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_12);
  }

  CWE* getLocationCostCenter(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LDP_12);
  }

  bool isLDP_12(size_t index = 0) {
    try {
      return this->getObject(index, LDP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationCostCenter(size_t index = 0) {
    try {
      return this->getObject(index, LDP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LDP */

} /* End of namespace HL7_29 */
#endif /* __LDP_v29_H__ */
