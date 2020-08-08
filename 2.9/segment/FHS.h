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


#ifndef __FHS_v29_H__
#define __FHS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/HD.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* FHS */
class FHS : public HL7Segment {
 public:
  FHS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FHS_1,
    FHS_2,
    FHS_3,
    FHS_4,
    FHS_5,
    FHS_6,
    FHS_7,
    FHS_8,
    FHS_9,
    FHS_10,
    FHS_11,
    FHS_12,
    FHS_13,
    FHS_14,
    FHS_15,
    FHS_16,
    FHS_17,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "FHS"; }
  FHS* create() const { return new FHS(); }

 private:
  void init() {
    setName("FHS");
    /* Init members */
    addObject<ST>(FHS_1, "FHS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_2, "FHS.2", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_3, "FHS.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_4, "FHS.4", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_5, "FHS.5", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_6, "FHS.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(FHS_7, "FHS.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_8, "FHS.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_9, "FHS.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_10, "FHS.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_11, "FHS.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_12, "FHS.12", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_13, "FHS.13", HL7::initialized, HL7::repetition_off);
    addObject<HD>(FHS_14, "FHS.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FHS_15, "FHS.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(FHS_16, "FHS.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FHS_17, "FHS.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * File Field Separator
   */

  ST* getFHS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_1);
  }

  ST* getFileFieldSeparator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_1);
  }

  bool isFHS_1(size_t index = 0) {
    try {
      return this->getObject(index, FHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileFieldSeparator(size_t index = 0) {
    try {
      return this->getObject(index, FHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Encoding Characters
   */

  ST* getFHS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_2);
  }

  ST* getFileEncodingCharacters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_2);
  }

  bool isFHS_2(size_t index = 0) {
    try {
      return this->getObject(index, FHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileEncodingCharacters(size_t index = 0) {
    try {
      return this->getObject(index, FHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Sending Application
   */

  HD* getFHS_3(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_3);
  }

  HD* getFileSendingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_3);
  }

  bool isFHS_3(size_t index = 0) {
    try {
      return this->getObject(index, FHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileSendingApplication(size_t index = 0) {
    try {
      return this->getObject(index, FHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Sending Facility
   */

  HD* getFHS_4(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_4);
  }

  HD* getFileSendingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_4);
  }

  bool isFHS_4(size_t index = 0) {
    try {
      return this->getObject(index, FHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileSendingFacility(size_t index = 0) {
    try {
      return this->getObject(index, FHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Receiving Application
   */

  HD* getFHS_5(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_5);
  }

  HD* getFileReceivingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_5);
  }

  bool isFHS_5(size_t index = 0) {
    try {
      return this->getObject(index, FHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileReceivingApplication(size_t index = 0) {
    try {
      return this->getObject(index, FHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Receiving Facility
   */

  HD* getFHS_6(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_6);
  }

  HD* getFileReceivingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_6);
  }

  bool isFHS_6(size_t index = 0) {
    try {
      return this->getObject(index, FHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileReceivingFacility(size_t index = 0) {
    try {
      return this->getObject(index, FHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Creation Date/Time
   */

  DTM* getFHS_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, FHS_7);
  }

  DTM* getFileCreationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, FHS_7);
  }

  bool isFHS_7(size_t index = 0) {
    try {
      return this->getObject(index, FHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileCreationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, FHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Security
   */

  ST* getFHS_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_8);
  }

  ST* getFileSecurity(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_8);
  }

  bool isFHS_8(size_t index = 0) {
    try {
      return this->getObject(index, FHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileSecurity(size_t index = 0) {
    try {
      return this->getObject(index, FHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Name/ID
   */

  ST* getFHS_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_9);
  }

  ST* getFileNameID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_9);
  }

  bool isFHS_9(size_t index = 0) {
    try {
      return this->getObject(index, FHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileNameID(size_t index = 0) {
    try {
      return this->getObject(index, FHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Header Comment
   */

  ST* getFHS_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_10);
  }

  ST* getFileHeaderComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_10);
  }

  bool isFHS_10(size_t index = 0) {
    try {
      return this->getObject(index, FHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileHeaderComment(size_t index = 0) {
    try {
      return this->getObject(index, FHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Control ID
   */

  ST* getFHS_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_11);
  }

  ST* getFileControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_11);
  }

  bool isFHS_11(size_t index = 0) {
    try {
      return this->getObject(index, FHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileControlID(size_t index = 0) {
    try {
      return this->getObject(index, FHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference File Control ID
   */

  ST* getFHS_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_12);
  }

  ST* getReferenceFileControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_12);
  }

  bool isFHS_12(size_t index = 0) {
    try {
      return this->getObject(index, FHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceFileControlID(size_t index = 0) {
    try {
      return this->getObject(index, FHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Sending Network Address
   */

  HD* getFHS_13(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_13);
  }

  HD* getFileSendingNetworkAddress(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_13);
  }

  bool isFHS_13(size_t index = 0) {
    try {
      return this->getObject(index, FHS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileSendingNetworkAddress(size_t index = 0) {
    try {
      return this->getObject(index, FHS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Receiving Network Address
   */

  HD* getFHS_14(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_14);
  }

  HD* getFileReceivingNetworkAddress(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, FHS_14);
  }

  bool isFHS_14(size_t index = 0) {
    try {
      return this->getObject(index, FHS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileReceivingNetworkAddress(size_t index = 0) {
    try {
      return this->getObject(index, FHS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Classification Tag
   */

  CWE* getFHS_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FHS_15);
  }

  CWE* getSecurityClassificationTag(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FHS_15);
  }

  bool isFHS_15(size_t index = 0) {
    try {
      return this->getObject(index, FHS_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityClassificationTag(size_t index = 0) {
    try {
      return this->getObject(index, FHS_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Handling Instructions
   */

  CWE* getFHS_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FHS_16);
  }

  CWE* getSecurityHandlingInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, FHS_16);
  }

  bool isFHS_16(size_t index = 0) {
    try {
      return this->getObject(index, FHS_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityHandlingInstructions(size_t index = 0) {
    try {
      return this->getObject(index, FHS_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Access Restriction Instructions
   */

  ST* getFHS_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_17);
  }

  ST* getSpecialAccessRestrictionInstructions(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FHS_17);
  }

  bool isFHS_17(size_t index = 0) {
    try {
      return this->getObject(index, FHS_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialAccessRestrictionInstructions(size_t index = 0) {
    try {
      return this->getObject(index, FHS_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FHS */

} /* End of namespace HL7_29 */
#endif /* __FHS_v29_H__ */
