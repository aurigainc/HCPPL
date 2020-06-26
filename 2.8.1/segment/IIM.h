/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:26 CEST 2020
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


#ifndef __IIM_v281_H__
#define __IIM_v281_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Inventory Item Master */
class IIM : public HL7Segment {
 public:
  IIM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IIM_1,
    IIM_2,
    IIM_3,
    IIM_4,
    IIM_5,
    IIM_6,
    IIM_7,
    IIM_8,
    IIM_9,
    IIM_10,
    IIM_11,
    IIM_12,
    IIM_13,
    IIM_14,
    IIM_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IIM"; }
  IIM* create() const { return new IIM(); }

 private:
  void init() {
    setName("IIM");
    /* Init members */
    addObject<CWE>(IIM_1, "IIM.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IIM_2, "IIM.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IIM_3, "IIM.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IIM_4, "IIM.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IIM_5, "IIM.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IIM_6, "IIM.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IIM_7, "IIM.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IIM_8, "IIM.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IIM_9, "IIM.9", HL7::initialized, HL7::repetition_off);
    addObject<MO>(IIM_10, "IIM.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IIM_11, "IIM.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IIM_12, "IIM.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IIM_13, "IIM.13", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IIM_14, "IIM.14", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IIM_15, "IIM.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - IIM
   */

  CWE* getIIM_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_1);
  }

  CWE* getPrimaryKeyValueIIM(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_1);
  }

  bool isIIM_1(size_t index = 0) {
    try {
      return this->getObject(index, IIM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueIIM(size_t index = 0) {
    try {
      return this->getObject(index, IIM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Item Code
   */

  CWE* getIIM_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_2);
  }

  CWE* getServiceItemCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_2);
  }

  bool isIIM_2(size_t index = 0) {
    try {
      return this->getObject(index, IIM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceItemCode(size_t index = 0) {
    try {
      return this->getObject(index, IIM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Lot Number
   */

  ST* getIIM_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IIM_3);
  }

  ST* getInventoryLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IIM_3);
  }

  bool isIIM_3(size_t index = 0) {
    try {
      return this->getObject(index, IIM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, IIM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Expiration Date
   */

  DTM* getIIM_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_4);
  }

  DTM* getInventoryExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_4);
  }

  bool isIIM_4(size_t index = 0) {
    try {
      return this->getObject(index, IIM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, IIM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Manufacturer Name
   */

  CWE* getIIM_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_5);
  }

  CWE* getInventoryManufacturerName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_5);
  }

  bool isIIM_5(size_t index = 0) {
    try {
      return this->getObject(index, IIM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, IIM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Location
   */

  CWE* getIIM_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_6);
  }

  CWE* getInventoryLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_6);
  }

  bool isIIM_6(size_t index = 0) {
    try {
      return this->getObject(index, IIM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLocation(size_t index = 0) {
    try {
      return this->getObject(index, IIM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Date
   */

  DTM* getIIM_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_7);
  }

  DTM* getInventoryReceivedDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_7);
  }

  bool isIIM_7(size_t index = 0) {
    try {
      return this->getObject(index, IIM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedDate(size_t index = 0) {
    try {
      return this->getObject(index, IIM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Quantity
   */

  NM* getIIM_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IIM_8);
  }

  NM* getInventoryReceivedQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IIM_8);
  }

  bool isIIM_8(size_t index = 0) {
    try {
      return this->getObject(index, IIM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedQuantity(size_t index = 0) {
    try {
      return this->getObject(index, IIM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Quantity Unit
   */

  CWE* getIIM_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_9);
  }

  CWE* getInventoryReceivedQuantityUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_9);
  }

  bool isIIM_9(size_t index = 0) {
    try {
      return this->getObject(index, IIM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedQuantityUnit(size_t index = 0) {
    try {
      return this->getObject(index, IIM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Item Cost
   */

  MO* getIIM_10(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, IIM_10);
  }

  MO* getInventoryReceivedItemCost(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, IIM_10);
  }

  bool isIIM_10(size_t index = 0) {
    try {
      return this->getObject(index, IIM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedItemCost(size_t index = 0) {
    try {
      return this->getObject(index, IIM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Date
   */

  DTM* getIIM_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_11);
  }

  DTM* getInventoryOnHandDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IIM_11);
  }

  bool isIIM_11(size_t index = 0) {
    try {
      return this->getObject(index, IIM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandDate(size_t index = 0) {
    try {
      return this->getObject(index, IIM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Quantity
   */

  NM* getIIM_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IIM_12);
  }

  NM* getInventoryOnHandQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IIM_12);
  }

  bool isIIM_12(size_t index = 0) {
    try {
      return this->getObject(index, IIM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandQuantity(size_t index = 0) {
    try {
      return this->getObject(index, IIM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Quantity Unit
   */

  CWE* getIIM_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_13);
  }

  CWE* getInventoryOnHandQuantityUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IIM_13);
  }

  bool isIIM_13(size_t index = 0) {
    try {
      return this->getObject(index, IIM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandQuantityUnit(size_t index = 0) {
    try {
      return this->getObject(index, IIM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getIIM_14(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IIM_14);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IIM_14);
  }

  bool isIIM_14(size_t index = 0) {
    try {
      return this->getObject(index, IIM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, IIM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CNE* getIIM_15(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IIM_15);
  }

  CNE* getProcedureCodeModifier(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IIM_15);
  }

  bool isIIM_15(size_t index = 0) {
    try {
      return this->getObject(index, IIM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, IIM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IIM */

} /* End of namespace HL7_281 */
#endif /* __IIM_v281_H__ */