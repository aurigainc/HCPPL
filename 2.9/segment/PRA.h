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


#ifndef __PRA_v29_H__
#define __PRA_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/PIP.h"
#include "../datatype/PLN.h"
#include "../datatype/SI.h"
#include "../datatype/SPD.h"

namespace HL7_29 {

/* PRA */
class PRA : public HL7Segment {
 public:
  PRA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRA_1,
    PRA_2,
    PRA_3,
    PRA_4,
    PRA_5,
    PRA_6,
    PRA_7,
    PRA_8,
    PRA_9,
    PRA_10,
    PRA_11,
    PRA_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRA"; }
  PRA* create() const { return new PRA(); }

 private:
  void init() {
    setName("PRA");
    /* Init members */
    addObject<CWE>(PRA_1, "PRA.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRA_2, "PRA.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRA_3, "PRA.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PRA_4, "PRA.4", HL7::initialized, HL7::repetition_off);
    addObject<SPD>(PRA_5, "PRA.5", HL7::initialized, HL7::repetition_off);
    addObject<PLN>(PRA_6, "PRA.6", HL7::initialized, HL7::repetition_off);
    addObject<PIP>(PRA_7, "PRA.7", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PRA_8, "PRA.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRA_9, "PRA.9", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PRA_10, "PRA.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRA_11, "PRA.11", HL7::initialized, HL7::repetition_off);
    addObject<SI>(PRA_12, "PRA.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - PRA
   */

  CWE* getPRA_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_1);
  }

  CWE* getPrimaryKeyValuePRA(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_1);
  }

  bool isPRA_1(size_t index = 0) {
    try {
      return this->getObject(index, PRA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValuePRA(size_t index = 0) {
    try {
      return this->getObject(index, PRA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Practitioner Group
   */

  CWE* getPRA_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_2);
  }

  CWE* getPractitionerGroup(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_2);
  }

  bool isPRA_2(size_t index = 0) {
    try {
      return this->getObject(index, PRA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPractitionerGroup(size_t index = 0) {
    try {
      return this->getObject(index, PRA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Practitioner Category
   */

  CWE* getPRA_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_3);
  }

  CWE* getPractitionerCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_3);
  }

  bool isPRA_3(size_t index = 0) {
    try {
      return this->getObject(index, PRA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPractitionerCategory(size_t index = 0) {
    try {
      return this->getObject(index, PRA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Billing
   */

  ID* getPRA_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRA_4);
  }

  ID* getProviderBilling(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRA_4);
  }

  bool isPRA_4(size_t index = 0) {
    try {
      return this->getObject(index, PRA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderBilling(size_t index = 0) {
    try {
      return this->getObject(index, PRA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specialty
   */

  SPD* getPRA_5(size_t index = 0) {
    return (SPD*)this->getObjectSafe(index, PRA_5);
  }

  SPD* getSpecialty(size_t index = 0) {
    return (SPD*)this->getObjectSafe(index, PRA_5);
  }

  bool isPRA_5(size_t index = 0) {
    try {
      return this->getObject(index, PRA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialty(size_t index = 0) {
    try {
      return this->getObject(index, PRA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Practitioner ID Numbers
   */

  PLN* getPRA_6(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRA_6);
  }

  PLN* getPractitionerIDNumbers(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRA_6);
  }

  bool isPRA_6(size_t index = 0) {
    try {
      return this->getObject(index, PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPractitionerIDNumbers(size_t index = 0) {
    try {
      return this->getObject(index, PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Privileges
   */

  PIP* getPRA_7(size_t index = 0) {
    return (PIP*)this->getObjectSafe(index, PRA_7);
  }

  PIP* getPrivileges(size_t index = 0) {
    return (PIP*)this->getObjectSafe(index, PRA_7);
  }

  bool isPRA_7(size_t index = 0) {
    try {
      return this->getObject(index, PRA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrivileges(size_t index = 0) {
    try {
      return this->getObject(index, PRA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Entered Practice
   */

  DT* getPRA_8(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PRA_8);
  }

  DT* getDateEnteredPractice(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PRA_8);
  }

  bool isPRA_8(size_t index = 0) {
    try {
      return this->getObject(index, PRA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateEnteredPractice(size_t index = 0) {
    try {
      return this->getObject(index, PRA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution
   */

  CWE* getPRA_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_9);
  }

  CWE* getInstitution(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_9);
  }

  bool isPRA_9(size_t index = 0) {
    try {
      return this->getObject(index, PRA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitution(size_t index = 0) {
    try {
      return this->getObject(index, PRA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Left Practice
   */

  DT* getPRA_10(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PRA_10);
  }

  DT* getDateLeftPractice(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PRA_10);
  }

  bool isPRA_10(size_t index = 0) {
    try {
      return this->getObject(index, PRA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateLeftPractice(size_t index = 0) {
    try {
      return this->getObject(index, PRA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Government Reimbursement Billing
   */

  CWE* getPRA_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_11);
  }

  CWE* getGovernmentReimbursementBilling(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRA_11);
  }

  bool isPRA_11(size_t index = 0) {
    try {
      return this->getObject(index, PRA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGovernmentReimbursementBilling(size_t index = 0) {
    try {
      return this->getObject(index, PRA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Set ID - PRA
   */

  SI* getPRA_12(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PRA_12);
  }

  SI* getSetIDPRA(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PRA_12);
  }

  bool isPRA_12(size_t index = 0) {
    try {
      return this->getObject(index, PRA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPRA(size_t index = 0) {
    try {
      return this->getObject(index, PRA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRA */

} /* End of namespace HL7_29 */
#endif /* __PRA_v29_H__ */
