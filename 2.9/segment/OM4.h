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


#ifndef __OM4_v29_H__
#define __OM4_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* OM4 */
class OM4 : public HL7Segment {
 public:
  OM4() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM4_1,
    OM4_2,
    OM4_3,
    OM4_4,
    OM4_5,
    OM4_6,
    OM4_7,
    OM4_8,
    OM4_9,
    OM4_10,
    OM4_11,
    OM4_12,
    OM4_13,
    OM4_14,
    OM4_15,
    OM4_16,
    OM4_17,
    OM4_18,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM4"; }
  OM4* create() const { return new OM4(); }

 private:
  void init() {
    setName("OM4");
    /* Init members */
    addObject<NM>(OM4_1, "OM4.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM4_2, "OM4.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM4_3, "OM4.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM4_4, "OM4.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM4_5, "OM4.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM4_6, "OM4.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM4_7, "OM4.7", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM4_8, "OM4.8", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM4_9, "OM4.9", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(OM4_10, "OM4.10", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(OM4_11, "OM4.11", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM4_12, "OM4.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM4_13, "OM4.13", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(OM4_14, "OM4.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM4_15, "OM4.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM4_16, "OM4.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM4_17, "OM4.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM4_18, "OM4.18", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM4_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_1);
  }

  bool isOM4_1(size_t index = 0) {
    try {
      return this->getObject(index, OM4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Derived Specimen
   */

  ID* getOM4_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_2);
  }

  ID* getDerivedSpecimen(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_2);
  }

  bool isOM4_2(size_t index = 0) {
    try {
      return this->getObject(index, OM4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDerivedSpecimen(size_t index = 0) {
    try {
      return this->getObject(index, OM4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Description
   */

  TX* getOM4_3(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_3);
  }

  TX* getContainerDescription(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_3);
  }

  bool isOM4_3(size_t index = 0) {
    try {
      return this->getObject(index, OM4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerDescription(size_t index = 0) {
    try {
      return this->getObject(index, OM4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Volume
   */

  NM* getOM4_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_4);
  }

  NM* getContainerVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_4);
  }

  bool isOM4_4(size_t index = 0) {
    try {
      return this->getObject(index, OM4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Units
   */

  CWE* getOM4_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_5);
  }

  CWE* getContainerUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_5);
  }

  bool isOM4_5(size_t index = 0) {
    try {
      return this->getObject(index, OM4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerUnits(size_t index = 0) {
    try {
      return this->getObject(index, OM4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen
   */

  CWE* getOM4_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_6);
  }

  CWE* getSpecimen(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_6);
  }

  bool isOM4_6(size_t index = 0) {
    try {
      return this->getObject(index, OM4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimen(size_t index = 0) {
    try {
      return this->getObject(index, OM4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Additive
   */

  CWE* getOM4_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_7);
  }

  CWE* getAdditive(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_7);
  }

  bool isOM4_7(size_t index = 0) {
    try {
      return this->getObject(index, OM4_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditive(size_t index = 0) {
    try {
      return this->getObject(index, OM4_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preparation
   */

  TX* getOM4_8(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_8);
  }

  TX* getPreparation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_8);
  }

  bool isOM4_8(size_t index = 0) {
    try {
      return this->getObject(index, OM4_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreparation(size_t index = 0) {
    try {
      return this->getObject(index, OM4_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Handling Requirements
   */

  TX* getOM4_9(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_9);
  }

  TX* getSpecialHandlingRequirements(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_9);
  }

  bool isOM4_9(size_t index = 0) {
    try {
      return this->getObject(index, OM4_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialHandlingRequirements(size_t index = 0) {
    try {
      return this->getObject(index, OM4_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Normal Collection Volume
   */

  CQ* getOM4_10(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_10);
  }

  CQ* getNormalCollectionVolume(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_10);
  }

  bool isOM4_10(size_t index = 0) {
    try {
      return this->getObject(index, OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNormalCollectionVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Collection Volume
   */

  CQ* getOM4_11(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_11);
  }

  CQ* getMinimumCollectionVolume(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_11);
  }

  bool isOM4_11(size_t index = 0) {
    try {
      return this->getObject(index, OM4_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumCollectionVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Requirements
   */

  TX* getOM4_12(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_12);
  }

  TX* getSpecimenRequirements(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_12);
  }

  bool isOM4_12(size_t index = 0) {
    try {
      return this->getObject(index, OM4_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRequirements(size_t index = 0) {
    try {
      return this->getObject(index, OM4_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Priorities
   */

  ID* getOM4_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_13);
  }

  ID* getSpecimenPriorities(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_13);
  }

  bool isOM4_13(size_t index = 0) {
    try {
      return this->getObject(index, OM4_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenPriorities(size_t index = 0) {
    try {
      return this->getObject(index, OM4_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Retention Time
   */

  CQ* getOM4_14(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_14);
  }

  CQ* getSpecimenRetentionTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_14);
  }

  bool isOM4_14(size_t index = 0) {
    try {
      return this->getObject(index, OM4_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRetentionTime(size_t index = 0) {
    try {
      return this->getObject(index, OM4_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Handling Code
   */

  CWE* getOM4_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_15);
  }

  CWE* getSpecimenHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_15);
  }

  bool isOM4_15(size_t index = 0) {
    try {
      return this->getObject(index, OM4_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, OM4_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Preference
   */

  ID* getOM4_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_16);
  }

  ID* getSpecimenPreference(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_16);
  }

  bool isOM4_16(size_t index = 0) {
    try {
      return this->getObject(index, OM4_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenPreference(size_t index = 0) {
    try {
      return this->getObject(index, OM4_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Specimen/Attribture Sequence ID
   */

  NM* getOM4_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_17);
  }

  NM* getPreferredSpecimenAttribtureSequenceID(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_17);
  }

  bool isOM4_17(size_t index = 0) {
    try {
      return this->getObject(index, OM4_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredSpecimenAttribtureSequenceID(size_t index = 0) {
    try {
      return this->getObject(index, OM4_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Taxonomic Classification Code
   */

  CWE* getOM4_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_18);
  }

  CWE* getTaxonomicClassificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM4_18);
  }

  bool isOM4_18(size_t index = 0) {
    try {
      return this->getObject(index, OM4_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTaxonomicClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, OM4_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM4 */

} /* End of namespace HL7_29 */
#endif /* __OM4_v29_H__ */
