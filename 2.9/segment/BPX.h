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


#ifndef __BPX_v29_H__
#define __BPX_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* BPX */
class BPX : public HL7Segment {
 public:
  BPX() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BPX_1,
    BPX_2,
    BPX_3,
    BPX_4,
    BPX_5,
    BPX_6,
    BPX_7,
    BPX_8,
    BPX_9,
    BPX_10,
    BPX_11,
    BPX_12,
    BPX_13,
    BPX_14,
    BPX_15,
    BPX_16,
    BPX_17,
    BPX_18,
    BPX_19,
    BPX_20,
    BPX_21,
    BPX_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BPX"; }
  BPX* create() const { return new BPX(); }

 private:
  void init() {
    setName("BPX");
    /* Init members */
    addObject<SI>(BPX_1, "BPX.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPX_2, "BPX.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BPX_3, "BPX.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BPX_4, "BPX.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BPX_5, "BPX.5", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BPX_6, "BPX.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BPX_7, "BPX.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPX_8, "BPX.8", HL7::initialized, HL7::repetition_off);
    addObject<XON>(BPX_9, "BPX.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BPX_10, "BPX.10", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BPX_11, "BPX.11", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BPX_12, "BPX.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BPX_13, "BPX.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BPX_14, "BPX.14", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BPX_15, "BPX.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPX_16, "BPX.16", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BPX_17, "BPX.17", HL7::initialized, HL7::repetition_off);
    addObject<PL>(BPX_18, "BPX.18", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(BPX_19, "BPX.19", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(BPX_20, "BPX.20", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(BPX_21, "BPX.21", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BPX_22, "BPX.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – BPX
   */

  SI* getBPX_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BPX_1);
  }

  SI* getSetIDBPX(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BPX_1);
  }

  bool isBPX_1(size_t index = 0) {
    try {
      return this->getObject(index, BPX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDBPX(size_t index = 0) {
    try {
      return this->getObject(index, BPX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Dispense Status
   */

  CWE* getBPX_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_2);
  }

  CWE* getBPDispenseStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_2);
  }

  bool isBPX_2(size_t index = 0) {
    try {
      return this->getObject(index, BPX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPDispenseStatus(size_t index = 0) {
    try {
      return this->getObject(index, BPX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Status
   */

  ID* getBPX_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPX_3);
  }

  ID* getBPStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPX_3);
  }

  bool isBPX_3(size_t index = 0) {
    try {
      return this->getObject(index, BPX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPStatus(size_t index = 0) {
    try {
      return this->getObject(index, BPX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Date/Time of Status
   */

  DTM* getBPX_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPX_4);
  }

  DTM* getBPDateTimeofStatus(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPX_4);
  }

  bool isBPX_4(size_t index = 0) {
    try {
      return this->getObject(index, BPX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPDateTimeofStatus(size_t index = 0) {
    try {
      return this->getObject(index, BPX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Donation ID
   */

  EI* getBPX_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_5);
  }

  EI* getBCDonationID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_5);
  }

  bool isBPX_5(size_t index = 0) {
    try {
      return this->getObject(index, BPX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCDonationID(size_t index = 0) {
    try {
      return this->getObject(index, BPX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Component
   */

  CNE* getBPX_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_6);
  }

  CNE* getBCComponent(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_6);
  }

  bool isBPX_6(size_t index = 0) {
    try {
      return this->getObject(index, BPX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCComponent(size_t index = 0) {
    try {
      return this->getObject(index, BPX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Donation Type / Intended Use
   */

  CNE* getBPX_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_7);
  }

  CNE* getBCDonationTypeIntendedUse(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_7);
  }

  bool isBPX_7(size_t index = 0) {
    try {
      return this->getObject(index, BPX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCDonationTypeIntendedUse(size_t index = 0) {
    try {
      return this->getObject(index, BPX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Commercial Product
   */

  CWE* getBPX_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_8);
  }

  CWE* getCPCommercialProduct(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_8);
  }

  bool isBPX_8(size_t index = 0) {
    try {
      return this->getObject(index, BPX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPCommercialProduct(size_t index = 0) {
    try {
      return this->getObject(index, BPX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Manufacturer
   */

  XON* getBPX_9(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BPX_9);
  }

  XON* getCPManufacturer(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BPX_9);
  }

  bool isBPX_9(size_t index = 0) {
    try {
      return this->getObject(index, BPX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPManufacturer(size_t index = 0) {
    try {
      return this->getObject(index, BPX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Lot Number
   */

  EI* getBPX_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_10);
  }

  EI* getCPLotNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_10);
  }

  bool isBPX_10(size_t index = 0) {
    try {
      return this->getObject(index, BPX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, BPX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Blood Group
   */

  CNE* getBPX_11(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_11);
  }

  CNE* getBPBloodGroup(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_11);
  }

  bool isBPX_11(size_t index = 0) {
    try {
      return this->getObject(index, BPX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPBloodGroup(size_t index = 0) {
    try {
      return this->getObject(index, BPX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Special Testing
   */

  CNE* getBPX_12(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_12);
  }

  CNE* getBCSpecialTesting(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BPX_12);
  }

  bool isBPX_12(size_t index = 0) {
    try {
      return this->getObject(index, BPX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCSpecialTesting(size_t index = 0) {
    try {
      return this->getObject(index, BPX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Expiration Date/Time
   */

  DTM* getBPX_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPX_13);
  }

  DTM* getBPExpirationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPX_13);
  }

  bool isBPX_13(size_t index = 0) {
    try {
      return this->getObject(index, BPX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPExpirationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, BPX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Quantity
   */

  NM* getBPX_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPX_14);
  }

  NM* getBPQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPX_14);
  }

  bool isBPX_14(size_t index = 0) {
    try {
      return this->getObject(index, BPX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPQuantity(size_t index = 0) {
    try {
      return this->getObject(index, BPX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Amount
   */

  NM* getBPX_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPX_15);
  }

  NM* getBPAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPX_15);
  }

  bool isBPX_15(size_t index = 0) {
    try {
      return this->getObject(index, BPX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPAmount(size_t index = 0) {
    try {
      return this->getObject(index, BPX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Units
   */

  CWE* getBPX_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_16);
  }

  CWE* getBPUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPX_16);
  }

  bool isBPX_16(size_t index = 0) {
    try {
      return this->getObject(index, BPX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUnits(size_t index = 0) {
    try {
      return this->getObject(index, BPX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Unique ID
   */

  EI* getBPX_17(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_17);
  }

  EI* getBPUniqueID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BPX_17);
  }

  bool isBPX_17(size_t index = 0) {
    try {
      return this->getObject(index, BPX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUniqueID(size_t index = 0) {
    try {
      return this->getObject(index, BPX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Actual Dispensed To Location
   */

  PL* getBPX_18(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPX_18);
  }

  PL* getBPActualDispensedToLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPX_18);
  }

  bool isBPX_18(size_t index = 0) {
    try {
      return this->getObject(index, BPX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPActualDispensedToLocation(size_t index = 0) {
    try {
      return this->getObject(index, BPX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Actual Dispensed To Address
   */

  XAD* getBPX_19(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPX_19);
  }

  XAD* getBPActualDispensedToAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPX_19);
  }

  bool isBPX_19(size_t index = 0) {
    try {
      return this->getObject(index, BPX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPActualDispensedToAddress(size_t index = 0) {
    try {
      return this->getObject(index, BPX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Dispensed to Receiver
   */

  XCN* getBPX_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BPX_20);
  }

  XCN* getBPDispensedtoReceiver(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BPX_20);
  }

  bool isBPX_20(size_t index = 0) {
    try {
      return this->getObject(index, BPX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPDispensedtoReceiver(size_t index = 0) {
    try {
      return this->getObject(index, BPX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Dispensing Individual
   */

  XCN* getBPX_21(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BPX_21);
  }

  XCN* getBPDispensingIndividual(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BPX_21);
  }

  bool isBPX_21(size_t index = 0) {
    try {
      return this->getObject(index, BPX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPDispensingIndividual(size_t index = 0) {
    try {
      return this->getObject(index, BPX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getBPX_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPX_22);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPX_22);
  }

  bool isBPX_22(size_t index = 0) {
    try {
      return this->getObject(index, BPX_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, BPX_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BPX */

} /* End of namespace HL7_29 */
#endif /* __BPX_v29_H__ */
