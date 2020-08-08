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


#ifndef __DON_v29_H__
#define __DON_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* DON */
class DON : public HL7Segment {
 public:
  DON() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DON_1,
    DON_2,
    DON_3,
    DON_4,
    DON_5,
    DON_6,
    DON_7,
    DON_8,
    DON_9,
    DON_10,
    DON_11,
    DON_12,
    DON_13,
    DON_14,
    DON_15,
    DON_16,
    DON_17,
    DON_18,
    DON_19,
    DON_20,
    DON_21,
    DON_22,
    DON_23,
    DON_24,
    DON_25,
    DON_26,
    DON_27,
    DON_28,
    DON_29,
    DON_30,
    DON_31,
    DON_32,
    DON_33,
    DON_34,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DON"; }
  DON* create() const { return new DON(); }

 private:
  void init() {
    setName("DON");
    /* Init members */
    addObject<EI>(DON_1, "DON.1", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_2, "DON.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_3, "DON.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_4, "DON.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DON_5, "DON.5", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_6, "DON.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_7, "DON.7", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_8, "DON.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DON_9, "DON.9", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_10, "DON.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_11, "DON.11", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_12, "DON.12", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_13, "DON.13", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_14, "DON.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DON_15, "DON.15", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DON_16, "DON.16", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_17, "DON.17", HL7::initialized, HL7::repetition_off);
    addObject<XON>(DON_18, "DON.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_19, "DON.19", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DON_20, "DON.20", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_21, "DON.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DON_22, "DON.22", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DON_23, "DON.23", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DON_24, "DON.24", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DON_25, "DON.25", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DON_26, "DON.26", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DON_27, "DON.27", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DON_28, "DON.28", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DON_29, "DON.29", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DON_30, "DON.30", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DON_31, "DON.31", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(DON_32, "DON.32", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(DON_33, "DON.33", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DON_34, "DON.34", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Donation Identification Number - DIN
   */

  EI* getDON_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DON_1);
  }

  EI* getDonationIdentificationNumberDIN(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DON_1);
  }

  bool isDON_1(size_t index = 0) {
    try {
      return this->getObject(index, DON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationIdentificationNumberDIN(size_t index = 0) {
    try {
      return this->getObject(index, DON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Type
   */

  CNE* getDON_2(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_2);
  }

  CNE* getDonationType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_2);
  }

  bool isDON_2(size_t index = 0) {
    try {
      return this->getObject(index, DON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationType(size_t index = 0) {
    try {
      return this->getObject(index, DON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phlebotomy Start Date/Time
   */

  DTM* getDON_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_3);
  }

  DTM* getPhlebotomyStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_3);
  }

  bool isDON_3(size_t index = 0) {
    try {
      return this->getObject(index, DON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhlebotomyStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phlebotomy End Date/Time
   */

  DTM* getDON_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_4);
  }

  DTM* getPhlebotomyEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_4);
  }

  bool isDON_4(size_t index = 0) {
    try {
      return this->getObject(index, DON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhlebotomyEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Duration
   */

  NM* getDON_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DON_5);
  }

  NM* getDonationDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DON_5);
  }

  bool isDON_5(size_t index = 0) {
    try {
      return this->getObject(index, DON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationDuration(size_t index = 0) {
    try {
      return this->getObject(index, DON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Duration Units
   */

  CNE* getDON_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_6);
  }

  CNE* getDonationDurationUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_6);
  }

  bool isDON_6(size_t index = 0) {
    try {
      return this->getObject(index, DON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, DON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Procedure Type
   */

  CNE* getDON_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_7);
  }

  CNE* getIntendedProcedureType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_7);
  }

  bool isDON_7(size_t index = 0) {
    try {
      return this->getObject(index, DON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedProcedureType(size_t index = 0) {
    try {
      return this->getObject(index, DON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Procedure Type
   */

  CNE* getDON_8(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_8);
  }

  CNE* getActualProcedureType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_8);
  }

  bool isDON_8(size_t index = 0) {
    try {
      return this->getObject(index, DON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualProcedureType(size_t index = 0) {
    try {
      return this->getObject(index, DON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donor Eligibility Flag
   */

  ID* getDON_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_9);
  }

  ID* getDonorEligibilityFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_9);
  }

  bool isDON_9(size_t index = 0) {
    try {
      return this->getObject(index, DON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonorEligibilityFlag(size_t index = 0) {
    try {
      return this->getObject(index, DON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donor Eligibility Procedure Type
   */

  CNE* getDON_10(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_10);
  }

  CNE* getDonorEligibilityProcedureType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_10);
  }

  bool isDON_10(size_t index = 0) {
    try {
      return this->getObject(index, DON_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonorEligibilityProcedureType(size_t index = 0) {
    try {
      return this->getObject(index, DON_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donor Eligibility Date
   */

  DTM* getDON_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_11);
  }

  DTM* getDonorEligibilityDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_11);
  }

  bool isDON_11(size_t index = 0) {
    try {
      return this->getObject(index, DON_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonorEligibilityDate(size_t index = 0) {
    try {
      return this->getObject(index, DON_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Interruption
   */

  CNE* getDON_12(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_12);
  }

  CNE* getProcessInterruption(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_12);
  }

  bool isDON_12(size_t index = 0) {
    try {
      return this->getObject(index, DON_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessInterruption(size_t index = 0) {
    try {
      return this->getObject(index, DON_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Interruption Reason
   */

  CNE* getDON_13(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_13);
  }

  CNE* getProcessInterruptionReason(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_13);
  }

  bool isDON_13(size_t index = 0) {
    try {
      return this->getObject(index, DON_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessInterruptionReason(size_t index = 0) {
    try {
      return this->getObject(index, DON_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phlebotomy Issue
   */

  CNE* getDON_14(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_14);
  }

  CNE* getPhlebotomyIssue(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_14);
  }

  bool isDON_14(size_t index = 0) {
    try {
      return this->getObject(index, DON_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhlebotomyIssue(size_t index = 0) {
    try {
      return this->getObject(index, DON_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient Blood Relative
   */

  ID* getDON_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_15);
  }

  ID* getIntendedRecipientBloodRelative(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_15);
  }

  bool isDON_15(size_t index = 0) {
    try {
      return this->getObject(index, DON_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientBloodRelative(size_t index = 0) {
    try {
      return this->getObject(index, DON_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient Name
   */

  XPN* getDON_16(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_16);
  }

  XPN* getIntendedRecipientName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_16);
  }

  bool isDON_16(size_t index = 0) {
    try {
      return this->getObject(index, DON_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientName(size_t index = 0) {
    try {
      return this->getObject(index, DON_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient DOB
   */

  DTM* getDON_17(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_17);
  }

  DTM* getIntendedRecipientDOB(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_17);
  }

  bool isDON_17(size_t index = 0) {
    try {
      return this->getObject(index, DON_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientDOB(size_t index = 0) {
    try {
      return this->getObject(index, DON_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient Facility
   */

  XON* getDON_18(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, DON_18);
  }

  XON* getIntendedRecipientFacility(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, DON_18);
  }

  bool isDON_18(size_t index = 0) {
    try {
      return this->getObject(index, DON_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientFacility(size_t index = 0) {
    try {
      return this->getObject(index, DON_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient Procedure Date
   */

  DTM* getDON_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_19);
  }

  DTM* getIntendedRecipientProcedureDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_19);
  }

  bool isDON_19(size_t index = 0) {
    try {
      return this->getObject(index, DON_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientProcedureDate(size_t index = 0) {
    try {
      return this->getObject(index, DON_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Intended Recipient Ordering Provider
   */

  XPN* getDON_20(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_20);
  }

  XPN* getIntendedRecipientOrderingProvider(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_20);
  }

  bool isDON_20(size_t index = 0) {
    try {
      return this->getObject(index, DON_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIntendedRecipientOrderingProvider(size_t index = 0) {
    try {
      return this->getObject(index, DON_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phlebotomy Status
   */

  CNE* getDON_21(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_21);
  }

  CNE* getPhlebotomyStatus(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_21);
  }

  bool isDON_21(size_t index = 0) {
    try {
      return this->getObject(index, DON_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhlebotomyStatus(size_t index = 0) {
    try {
      return this->getObject(index, DON_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Arm Stick
   */

  CNE* getDON_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_22);
  }

  CNE* getArmStick(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DON_22);
  }

  bool isDON_22(size_t index = 0) {
    try {
      return this->getObject(index, DON_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isArmStick(size_t index = 0) {
    try {
      return this->getObject(index, DON_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bleed Start Phlebotomist
   */

  XPN* getDON_23(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_23);
  }

  XPN* getBleedStartPhlebotomist(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_23);
  }

  bool isDON_23(size_t index = 0) {
    try {
      return this->getObject(index, DON_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBleedStartPhlebotomist(size_t index = 0) {
    try {
      return this->getObject(index, DON_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bleed End Phlebotomist
   */

  XPN* getDON_24(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_24);
  }

  XPN* getBleedEndPhlebotomist(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_24);
  }

  bool isDON_24(size_t index = 0) {
    try {
      return this->getObject(index, DON_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBleedEndPhlebotomist(size_t index = 0) {
    try {
      return this->getObject(index, DON_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Aphaeresis Type Machine
   */

  ST* getDON_25(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DON_25);
  }

  ST* getAphaeresisTypeMachine(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DON_25);
  }

  bool isDON_25(size_t index = 0) {
    try {
      return this->getObject(index, DON_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAphaeresisTypeMachine(size_t index = 0) {
    try {
      return this->getObject(index, DON_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Aphaeresis Machine Serial Number
   */

  ST* getDON_26(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DON_26);
  }

  ST* getAphaeresisMachineSerialNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DON_26);
  }

  bool isDON_26(size_t index = 0) {
    try {
      return this->getObject(index, DON_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAphaeresisMachineSerialNumber(size_t index = 0) {
    try {
      return this->getObject(index, DON_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donor Reaction
   */

  ID* getDON_27(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_27);
  }

  ID* getDonorReaction(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_27);
  }

  bool isDON_27(size_t index = 0) {
    try {
      return this->getObject(index, DON_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonorReaction(size_t index = 0) {
    try {
      return this->getObject(index, DON_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Final Review Staff ID
   */

  XPN* getDON_28(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_28);
  }

  XPN* getFinalReviewStaffID(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DON_28);
  }

  bool isDON_28(size_t index = 0) {
    try {
      return this->getObject(index, DON_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFinalReviewStaffID(size_t index = 0) {
    try {
      return this->getObject(index, DON_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Final Review Date/Time
   */

  DTM* getDON_29(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_29);
  }

  DTM* getFinalReviewDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DON_29);
  }

  bool isDON_29(size_t index = 0) {
    try {
      return this->getObject(index, DON_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFinalReviewDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DON_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Tubes Collected
   */

  NM* getDON_30(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DON_30);
  }

  NM* getNumberofTubesCollected(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DON_30);
  }

  bool isDON_30(size_t index = 0) {
    try {
      return this->getObject(index, DON_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofTubesCollected(size_t index = 0) {
    try {
      return this->getObject(index, DON_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Sample Identifier
   */

  EI* getDON_31(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DON_31);
  }

  EI* getDonationSampleIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DON_31);
  }

  bool isDON_31(size_t index = 0) {
    try {
      return this->getObject(index, DON_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationSampleIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DON_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Accept Staff
   */

  XCN* getDON_32(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DON_32);
  }

  XCN* getDonationAcceptStaff(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DON_32);
  }

  bool isDON_32(size_t index = 0) {
    try {
      return this->getObject(index, DON_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationAcceptStaff(size_t index = 0) {
    try {
      return this->getObject(index, DON_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Donation Material Review Staff
   */

  XCN* getDON_33(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DON_33);
  }

  XCN* getDonationMaterialReviewStaff(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DON_33);
  }

  bool isDON_33(size_t index = 0) {
    try {
      return this->getObject(index, DON_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDonationMaterialReviewStaff(size_t index = 0) {
    try {
      return this->getObject(index, DON_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getDON_34(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_34);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DON_34);
  }

  bool isDON_34(size_t index = 0) {
    try {
      return this->getObject(index, DON_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, DON_34) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DON */

} /* End of namespace HL7_29 */
#endif /* __DON_v29_H__ */
