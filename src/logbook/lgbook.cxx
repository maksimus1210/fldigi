// generated by Fast Light User Interface Designer (fluid) version 1.0109

#include "gettext.h"
#include "lgbook.h"
#include <config.h>
#include "logsupport.h"
#include "pixmaps.h"

Fl_Double_Window *wExport=(Fl_Double_Window *)0;

Fl_Check_Browser *chkExportBrowser=(Fl_Check_Browser *)0;

Fl_Button *btnClearAll=(Fl_Button *)0;

static void cb_btnClearAll(Fl_Button*, void*) {
  chkExportBrowser->check_none();
}

Fl_Button *btnCheckAll=(Fl_Button *)0;

static void cb_btnCheckAll(Fl_Button*, void*) {
  chkExportBrowser->check_all();
}

Fl_Return_Button *btnOK=(Fl_Return_Button *)0;

static void cb_btnOK(Fl_Return_Button*, void*) {
  wExport->hide();
Export_log();
}

Fl_Button *btnCancel=(Fl_Button *)0;

static void cb_btnCancel(Fl_Button*, void*) {
  wExport->hide();
}

Fl_Button *btnClearAllFields=(Fl_Button *)0;

static void cb_btnClearAllFields(Fl_Button*, void*) {
  btnSelectCall->value(0);
btnSelectName->value(0);
btnSelectFreq->value(0);
btnSelectBand->value(0);
btnSelectMode->value(0);
btnSelectQSOdate->value(0);
btnSelectTimeON->value(0);
btnSelectTimeOFF->value(0);
btnSelectQth->value(0);
btnSelectLOC->value(0);
btnSelectState->value(0);
btnSelectProvince->value(0);
btnSelectCountry->value(0);
btnSelectQSLrcvd->value(0);
btnSelectQSLsent->value(0);
btnSelectSerialIN->value(0);
btnSelectSerialOUT->value(0);
btnSelectXchgIn->value(0);
btnSelectMyXchg->value(0);
btnSelectRSTsent->value(0);
btnSelectRSTrcvd->value(0);
btnSelectIOTA->value(0);
btnSelectDXCC->value(0);
btnSelectTX_pwr->value(0);
btnSelectComment->value(0);
}

Fl_Button *btnCheckAllFields=(Fl_Button *)0;

static void cb_btnCheckAllFields(Fl_Button*, void*) {
  btnSelectCall->value(1);
btnSelectName->value(1);
btnSelectFreq->value(1);
btnSelectBand->value(1);
btnSelectMode->value(1);
btnSelectQSOdate->value(1);
btnSelectTimeON->value(1);
btnSelectTimeOFF->value(1);
btnSelectQth->value(1);
btnSelectLOC->value(1);
btnSelectState->value(1);
btnSelectProvince->value(1);
btnSelectCountry->value(1);
btnSelectQSLrcvd->value(1);
btnSelectQSLsent->value(1);
btnSelectSerialIN->value(1);
btnSelectSerialOUT->value(1);
btnSelectXchgIn->value(1);
btnSelectMyXchg->value(1);
btnSelectRSTsent->value(1);
btnSelectRSTrcvd->value(1);
btnSelectIOTA->value(1);
btnSelectDXCC->value(1);
btnSelectTX_pwr->value(1);
btnSelectComment->value(1);
}

Fl_Check_Button *btnSelectCall=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectName=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectFreq=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectBand=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectMode=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectQSOdate=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectTimeON=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectTimeOFF=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectTX_pwr=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectRSTsent=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectRSTrcvd=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectQth=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectLOC=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectState=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectProvince=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectCountry=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectComment=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectIOTA=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectDXCC=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectQSLrcvd=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectQSLsent=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectSerialIN=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectSerialOUT=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectXchgIn=(Fl_Check_Button *)0;

Fl_Check_Button *btnSelectMyXchg=(Fl_Check_Button *)0;

Fl_Button *btnSetFieldDefaults=(Fl_Button *)0;

static void cb_btnSetFieldDefaults(Fl_Button*, void*) {
  btnSelectCall->value(1);
btnSelectName->value(1);
btnSelectFreq->value(1);
btnSelectBand->value(1);
btnSelectMode->value(1);
btnSelectQSOdate->value(1);
btnSelectTimeON->value(0);
btnSelectTimeOFF->value(1);
btnSelectQth->value(0);
btnSelectLOC->value(1);
btnSelectState->value(0);
btnSelectProvince->value(0);
btnSelectCountry->value(0);
btnSelectQSLrcvd->value(0);
btnSelectQSLsent->value(0);
btnSelectSerialIN->value(0);
btnSelectSerialOUT->value(0);
btnSelectXchgIn->value(0);
btnSelectMyXchg->value(0);
btnSelectRSTsent->value(0);
btnSelectRSTrcvd->value(1);
btnSelectComment->value(0);
btnSelectIOTA->value(0);
btnSelectDXCC->value(0);
btnSelectTX_pwr->value(0);
}

Fl_Double_Window *dlgLogbook=(Fl_Double_Window *)0;

Fl_Group *editGroup=(Fl_Group *)0;

Fl_DateInput *inpDate_log=(Fl_DateInput *)0;

Fl_Input2 *inpTimeOn_log=(Fl_Input2 *)0;

Fl_Input2 *inpTimeOff_log=(Fl_Input2 *)0;

Fl_Input2 *inpCall_log=(Fl_Input2 *)0;

Fl_Input2 *inpName_log=(Fl_Input2 *)0;

Fl_Input2 *inpFreq_log=(Fl_Input2 *)0;

Fl_Input2 *inpMode_log=(Fl_Input2 *)0;

Fl_Input2 *inpRstR_log=(Fl_Input2 *)0;

Fl_Input2 *inpRstS_log=(Fl_Input2 *)0;

Fl_Input2 *inpQth_log=(Fl_Input2 *)0;

Fl_Input2 *inpState_log=(Fl_Input2 *)0;

Fl_Input2 *inpVE_Prov_log=(Fl_Input2 *)0;

Fl_Input2 *inpCountry_log=(Fl_Input2 *)0;

Fl_Input2 *inpLoc_log=(Fl_Input2 *)0;

Fl_Input2 *inpComment_log=(Fl_Input2 *)0;

Fl_DateInput *inpQSLrcvddate_log=(Fl_DateInput *)0;

Fl_DateInput *inpQSLsentdate_log=(Fl_DateInput *)0;

Fl_Button *bNewSave=(Fl_Button *)0;

Fl_Button *bUpdateCancel=(Fl_Button *)0;

Fl_Button *bDelete=(Fl_Button *)0;

Fl_Input2 *txtNbrRecs_log=(Fl_Input2 *)0;

Fl_Input2 *inpSerNoOut_log=(Fl_Input2 *)0;

Fl_Input2 *inpMyXchg_log=(Fl_Input2 *)0;

Fl_Input2 *inpSerNoIn_log=(Fl_Input2 *)0;

Fl_Input2 *inpXchgIn_log=(Fl_Input2 *)0;

Fl_Input2 *inpSearchString=(Fl_Input2 *)0;

Fl_Button *bSearchPrev=(Fl_Button *)0;

Fl_Button *bSearchNext=(Fl_Button *)0;

Fl_Input2 *inpIOTA_log=(Fl_Input2 *)0;

Fl_Input2 *inpTX_pwr_log=(Fl_Input2 *)0;

Fl_Input2 *inpDXCC_log=(Fl_Input2 *)0;

Table *wBrowser=(Table *)0;

Fl_Double_Window *wCabrillo=(Fl_Double_Window *)0;

Fl_Check_Browser *chkCabBrowser=(Fl_Check_Browser *)0;

Fl_Button *btnCabClearAll=(Fl_Button *)0;

static void cb_btnCabClearAll(Fl_Button*, void*) {
  chkCabBrowser->check_none();
}

Fl_Button *btnCabCheckAll=(Fl_Button *)0;

static void cb_btnCabCheckAll(Fl_Button*, void*) {
  chkCabBrowser->check_all();
}

Fl_Return_Button *btnCabOK=(Fl_Return_Button *)0;

static void cb_btnCabOK(Fl_Return_Button*, void*) {
  wCabrillo->hide();
WriteCabrillo();
}

Fl_Button *btnCabCancel=(Fl_Button *)0;

static void cb_btnCabCancel(Fl_Button*, void*) {
  wCabrillo->hide();
}

Fl_ComboBox *cboContest=(Fl_ComboBox *)0;

Fl_Check_Button *btnCabCall=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabFreq=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabMode=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabQSOdate=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabTimeOFF=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabRSTsent=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabRSTrcvd=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabSerialIN=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabSerialOUT=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabXchgIn=(Fl_Check_Button *)0;

Fl_Check_Button *btnCabMyXchg=(Fl_Check_Button *)0;

Fl_Button *btnCabClearAllFields=(Fl_Button *)0;

static void cb_btnCabClearAllFields(Fl_Button*, void*) {
  btnCabCall->value(0);
btnCabFreq->value(0);
btnCabMode->value(0);
btnCabQSOdate->value(0);
btnCabTimeOFF->value(0);
btnCabSerialIN->value(0);
btnCabSerialOUT->value(0);
btnCabXchgIn->value(0);
btnCabMyXchg->value(0);
btnCabRSTsent->value(0);
btnCabRSTrcvd->value(0);
}

Fl_Button *btnCabCheckAllFields=(Fl_Button *)0;

static void cb_btnCabCheckAllFields(Fl_Button*, void*) {
  btnCabCall->value(1);
btnCabFreq->value(1);
btnCabMode->value(1);
btnCabQSOdate->value(1);
btnCabTimeOFF->value(1);
btnCabSerialIN->value(1);
btnCabSerialOUT->value(1);
btnCabXchgIn->value(1);
btnCabMyXchg->value(1);
btnCabRSTsent->value(1);
btnCabRSTrcvd->value(1);
}

void create_logbook_dialogs() {
  { wExport = new Fl_Double_Window(655, 340, _("Export Setup"));
    { Fl_Group* o = new Fl_Group(4, 4, 388, 305, _("Select Records to Export"));
      o->box(FL_ENGRAVED_FRAME);
      o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      { chkExportBrowser = new Fl_Check_Browser(13, 25, 370, 245);
      } // Fl_Check_Browser* chkExportBrowser
      { btnClearAll = new Fl_Button(69, 277, 109, 20, _("Clear All"));
        btnClearAll->callback((Fl_Callback*)cb_btnClearAll);
      } // Fl_Button* btnClearAll
      { btnCheckAll = new Fl_Button(200, 277, 109, 20, _("Check All"));
        btnCheckAll->callback((Fl_Callback*)cb_btnCheckAll);
      } // Fl_Button* btnCheckAll
      o->end();
    } // Fl_Group* o
    { btnOK = new Fl_Return_Button(536, 312, 100, 20, _("OK"));
      btnOK->callback((Fl_Callback*)cb_btnOK);
    } // Fl_Return_Button* btnOK
    { btnCancel = new Fl_Button(405, 312, 100, 20, _("Cancel"));
      btnCancel->callback((Fl_Callback*)cb_btnCancel);
    } // Fl_Button* btnCancel
    { Fl_Group* o = new Fl_Group(392, 4, 258, 303, _("Select Fields to Export"));
      o->box(FL_ENGRAVED_FRAME);
      o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      { btnClearAllFields = new Fl_Button(397, 275, 76, 20, _("Clear All"));
        btnClearAllFields->callback((Fl_Callback*)cb_btnClearAllFields);
      } // Fl_Button* btnClearAllFields
      { btnCheckAllFields = new Fl_Button(477, 275, 76, 20, _("Check All"));
        btnCheckAllFields->callback((Fl_Callback*)cb_btnCheckAllFields);
      } // Fl_Button* btnCheckAllFields
      { btnSelectCall = new Fl_Check_Button(412, 25, 70, 15, _("Call"));
        btnSelectCall->down_box(FL_DOWN_BOX);
        btnSelectCall->value(1);
      } // Fl_Check_Button* btnSelectCall
      { btnSelectName = new Fl_Check_Button(412, 44, 70, 15, _("Name"));
        btnSelectName->down_box(FL_DOWN_BOX);
        btnSelectName->value(1);
      } // Fl_Check_Button* btnSelectName
      { btnSelectFreq = new Fl_Check_Button(412, 63, 70, 15, _("Freq"));
        btnSelectFreq->down_box(FL_DOWN_BOX);
        btnSelectFreq->value(1);
      } // Fl_Check_Button* btnSelectFreq
      { btnSelectBand = new Fl_Check_Button(412, 82, 70, 15, _("Band"));
        btnSelectBand->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectBand
      { btnSelectMode = new Fl_Check_Button(412, 101, 70, 15, _("Mode"));
        btnSelectMode->down_box(FL_DOWN_BOX);
        btnSelectMode->value(1);
      } // Fl_Check_Button* btnSelectMode
      { btnSelectQSOdate = new Fl_Check_Button(412, 120, 70, 15, _("QSO Date"));
        btnSelectQSOdate->down_box(FL_DOWN_BOX);
        btnSelectQSOdate->value(1);
      } // Fl_Check_Button* btnSelectQSOdate
      { btnSelectTimeON = new Fl_Check_Button(412, 140, 70, 15, _("Time ON"));
        btnSelectTimeON->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectTimeON
      { btnSelectTimeOFF = new Fl_Check_Button(412, 159, 70, 15, _("Time OFF"));
        btnSelectTimeOFF->down_box(FL_DOWN_BOX);
        btnSelectTimeOFF->value(1);
      } // Fl_Check_Button* btnSelectTimeOFF
      { btnSelectTX_pwr = new Fl_Check_Button(412, 178, 70, 15, _("TX Power"));
        btnSelectTX_pwr->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectTX_pwr
      { btnSelectRSTsent = new Fl_Check_Button(412, 197, 70, 15, _("RST sent"));
        btnSelectRSTsent->down_box(FL_DOWN_BOX);
        btnSelectRSTsent->value(1);
      } // Fl_Check_Button* btnSelectRSTsent
      { btnSelectRSTrcvd = new Fl_Check_Button(412, 216, 70, 15, _("RST rcvd"));
        btnSelectRSTrcvd->down_box(FL_DOWN_BOX);
        btnSelectRSTrcvd->value(1);
      } // Fl_Check_Button* btnSelectRSTrcvd
      { btnSelectQth = new Fl_Check_Button(412, 235, 70, 15, _("Qth"));
        btnSelectQth->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectQth
      { btnSelectLOC = new Fl_Check_Button(412, 255, 70, 15, _("LOC"));
        btnSelectLOC->down_box(FL_DOWN_BOX);
        btnSelectLOC->value(1);
      } // Fl_Check_Button* btnSelectLOC
      { btnSelectState = new Fl_Check_Button(520, 25, 70, 15, _("State"));
        btnSelectState->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectState
      { btnSelectProvince = new Fl_Check_Button(520, 44, 70, 15, _("Province"));
        btnSelectProvince->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectProvince
      { btnSelectCountry = new Fl_Check_Button(520, 63, 70, 15, _("Country"));
        btnSelectCountry->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectCountry
      { btnSelectComment = new Fl_Check_Button(520, 82, 70, 15, _("Comment"));
        btnSelectComment->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectComment
      { btnSelectIOTA = new Fl_Check_Button(520, 101, 70, 15, _("IOTA"));
        btnSelectIOTA->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectIOTA
      { btnSelectDXCC = new Fl_Check_Button(520, 120, 70, 15, _("DXCC"));
        btnSelectDXCC->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectDXCC
      { btnSelectQSLrcvd = new Fl_Check_Button(520, 140, 70, 15, _("QSL rcvd date"));
        btnSelectQSLrcvd->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectQSLrcvd
      { btnSelectQSLsent = new Fl_Check_Button(520, 159, 70, 15, _("QSL sent date"));
        btnSelectQSLsent->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectQSLsent
      { btnSelectSerialIN = new Fl_Check_Button(520, 178, 70, 15, _("Serial # in"));
        btnSelectSerialIN->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectSerialIN
      { btnSelectSerialOUT = new Fl_Check_Button(520, 197, 70, 15, _("Serial # out"));
        btnSelectSerialOUT->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectSerialOUT
      { btnSelectXchgIn = new Fl_Check_Button(520, 216, 70, 15, _("Exchange In"));
        btnSelectXchgIn->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectXchgIn
      { btnSelectMyXchg = new Fl_Check_Button(520, 235, 70, 15, _("Exchange Out"));
        btnSelectMyXchg->down_box(FL_DOWN_BOX);
      } // Fl_Check_Button* btnSelectMyXchg
      { btnSetFieldDefaults = new Fl_Button(557, 275, 76, 20, _("Defaults"));
        btnSetFieldDefaults->callback((Fl_Callback*)cb_btnSetFieldDefaults);
      } // Fl_Button* btnSetFieldDefaults
      o->end();
    } // Fl_Group* o
    wExport->set_modal();
    wExport->end();
  } // Fl_Double_Window* wExport
  { dlgLogbook = new Fl_Double_Window(570, 350, _("Logbook"));
    dlgLogbook->color(FL_DARK1);
    { editGroup = new Fl_Group(2, 2, 565, 228);
      editGroup->box(FL_ENGRAVED_FRAME);
      editGroup->color(FL_LIGHT2);
      { inpDate_log = new Fl_DateInput(5, 20, 100, 22, _("Date"));
        inpDate_log->tooltip(_("Date of QSO"));
        inpDate_log->box(FL_DOWN_BOX);
        inpDate_log->color(FL_BACKGROUND2_COLOR);
        inpDate_log->selection_color(FL_SELECTION_COLOR);
        inpDate_log->labeltype(FL_NORMAL_LABEL);
        inpDate_log->labelfont(0);
        inpDate_log->labelsize(12);
        inpDate_log->labelcolor(FL_FOREGROUND_COLOR);
        inpDate_log->align(FL_ALIGN_TOP_LEFT);
        inpDate_log->when(FL_WHEN_RELEASE);
        inpDate_log->format(2);
      } // Fl_DateInput* inpDate_log
      { inpTimeOn_log = new Fl_Input2(106, 20, 40, 22, _("On"));
        inpTimeOn_log->tooltip(_("Time QSO started"));
        inpTimeOn_log->box(FL_DOWN_BOX);
        inpTimeOn_log->color(FL_BACKGROUND2_COLOR);
        inpTimeOn_log->selection_color(FL_SELECTION_COLOR);
        inpTimeOn_log->labeltype(FL_NORMAL_LABEL);
        inpTimeOn_log->labelfont(0);
        inpTimeOn_log->labelsize(12);
        inpTimeOn_log->labelcolor(FL_FOREGROUND_COLOR);
        inpTimeOn_log->align(FL_ALIGN_TOP_LEFT);
        inpTimeOn_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpTimeOn_log
      { inpTimeOff_log = new Fl_Input2(148, 20, 40, 22, _("Off"));
        inpTimeOff_log->tooltip(_("Time QSO ended"));
        inpTimeOff_log->box(FL_DOWN_BOX);
        inpTimeOff_log->color(FL_BACKGROUND2_COLOR);
        inpTimeOff_log->selection_color(FL_SELECTION_COLOR);
        inpTimeOff_log->labeltype(FL_NORMAL_LABEL);
        inpTimeOff_log->labelfont(0);
        inpTimeOff_log->labelsize(12);
        inpTimeOff_log->labelcolor(FL_FOREGROUND_COLOR);
        inpTimeOff_log->align(FL_ALIGN_TOP_LEFT);
        inpTimeOff_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpTimeOff_log
      { inpCall_log = new Fl_Input2(189, 20, 105, 22, _("Call"));
        inpCall_log->tooltip(_("Call sign worked"));
        inpCall_log->box(FL_DOWN_BOX);
        inpCall_log->color(FL_BACKGROUND2_COLOR);
        inpCall_log->selection_color(FL_SELECTION_COLOR);
        inpCall_log->labeltype(FL_NORMAL_LABEL);
        inpCall_log->labelfont(0);
        inpCall_log->labelsize(12);
        inpCall_log->labelcolor(FL_FOREGROUND_COLOR);
        inpCall_log->align(FL_ALIGN_TOP_LEFT);
        inpCall_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpCall_log
      { inpName_log = new Fl_Input2(296, 20, 60, 22, _("Name"));
        inpName_log->tooltip(_("Operator worked"));
        inpName_log->box(FL_DOWN_BOX);
        inpName_log->color(FL_BACKGROUND2_COLOR);
        inpName_log->selection_color(FL_SELECTION_COLOR);
        inpName_log->labeltype(FL_NORMAL_LABEL);
        inpName_log->labelfont(0);
        inpName_log->labelsize(12);
        inpName_log->labelcolor(FL_FOREGROUND_COLOR);
        inpName_log->align(FL_ALIGN_TOP_LEFT);
        inpName_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpName_log
      { inpFreq_log = new Fl_Input2(357, 20, 80, 22, _("Freq."));
        inpFreq_log->tooltip(_("Frequency in MHz"));
        inpFreq_log->box(FL_DOWN_BOX);
        inpFreq_log->color(FL_BACKGROUND2_COLOR);
        inpFreq_log->selection_color(FL_SELECTION_COLOR);
        inpFreq_log->labeltype(FL_NORMAL_LABEL);
        inpFreq_log->labelfont(0);
        inpFreq_log->labelsize(12);
        inpFreq_log->labelcolor(FL_FOREGROUND_COLOR);
        inpFreq_log->align(FL_ALIGN_TOP_LEFT);
        inpFreq_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpFreq_log
      { inpMode_log = new Fl_Input2(439, 20, 60, 22, _("Mode"));
        inpMode_log->tooltip(_("Mode in use"));
        inpMode_log->box(FL_DOWN_BOX);
        inpMode_log->color(FL_BACKGROUND2_COLOR);
        inpMode_log->selection_color(FL_SELECTION_COLOR);
        inpMode_log->labeltype(FL_NORMAL_LABEL);
        inpMode_log->labelfont(0);
        inpMode_log->labelsize(12);
        inpMode_log->labelcolor(FL_FOREGROUND_COLOR);
        inpMode_log->align(FL_ALIGN_TOP_LEFT);
        inpMode_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpMode_log
      { inpRstR_log = new Fl_Input2(500, 20, 30, 22, _("In"));
        inpRstR_log->tooltip(_("Rst received"));
        inpRstR_log->box(FL_DOWN_BOX);
        inpRstR_log->color(FL_BACKGROUND2_COLOR);
        inpRstR_log->selection_color(FL_SELECTION_COLOR);
        inpRstR_log->labeltype(FL_NORMAL_LABEL);
        inpRstR_log->labelfont(0);
        inpRstR_log->labelsize(12);
        inpRstR_log->labelcolor(FL_FOREGROUND_COLOR);
        inpRstR_log->align(FL_ALIGN_TOP_LEFT);
        inpRstR_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpRstR_log
      { inpRstS_log = new Fl_Input2(532, 20, 30, 22, _("Out"));
        inpRstS_log->tooltip(_("Rst sent"));
        inpRstS_log->box(FL_DOWN_BOX);
        inpRstS_log->color(FL_BACKGROUND2_COLOR);
        inpRstS_log->selection_color(FL_SELECTION_COLOR);
        inpRstS_log->labeltype(FL_NORMAL_LABEL);
        inpRstS_log->labelfont(0);
        inpRstS_log->labelsize(12);
        inpRstS_log->labelcolor(FL_FOREGROUND_COLOR);
        inpRstS_log->align(FL_ALIGN_TOP_LEFT);
        inpRstS_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpRstS_log
      { inpQth_log = new Fl_Input2(5, 56, 115, 22, _("Qth"));
        inpQth_log->tooltip(_("City of station worked"));
        inpQth_log->box(FL_DOWN_BOX);
        inpQth_log->color(FL_BACKGROUND2_COLOR);
        inpQth_log->selection_color(FL_SELECTION_COLOR);
        inpQth_log->labeltype(FL_NORMAL_LABEL);
        inpQth_log->labelfont(0);
        inpQth_log->labelsize(12);
        inpQth_log->labelcolor(FL_FOREGROUND_COLOR);
        inpQth_log->align(FL_ALIGN_TOP_LEFT);
        inpQth_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpQth_log
      { inpState_log = new Fl_Input2(122, 56, 30, 22, _("St"));
        inpState_log->tooltip(_("US state of station worked"));
        inpState_log->box(FL_DOWN_BOX);
        inpState_log->color(FL_BACKGROUND2_COLOR);
        inpState_log->selection_color(FL_SELECTION_COLOR);
        inpState_log->labeltype(FL_NORMAL_LABEL);
        inpState_log->labelfont(0);
        inpState_log->labelsize(12);
        inpState_log->labelcolor(FL_FOREGROUND_COLOR);
        inpState_log->align(FL_ALIGN_TOP_LEFT);
        inpState_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpState_log
      { inpVE_Prov_log = new Fl_Input2(155, 56, 30, 22, _("Pr"));
        inpVE_Prov_log->tooltip(_("Province of station worked"));
        inpVE_Prov_log->box(FL_DOWN_BOX);
        inpVE_Prov_log->color(FL_BACKGROUND2_COLOR);
        inpVE_Prov_log->selection_color(FL_SELECTION_COLOR);
        inpVE_Prov_log->labeltype(FL_NORMAL_LABEL);
        inpVE_Prov_log->labelfont(0);
        inpVE_Prov_log->labelsize(12);
        inpVE_Prov_log->labelcolor(FL_FOREGROUND_COLOR);
        inpVE_Prov_log->align(FL_ALIGN_TOP_LEFT);
        inpVE_Prov_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpVE_Prov_log
      { inpCountry_log = new Fl_Input2(188, 56, 90, 22, _("Country"));
        inpCountry_log->tooltip(_("Country of station worked"));
        inpCountry_log->box(FL_DOWN_BOX);
        inpCountry_log->color(FL_BACKGROUND2_COLOR);
        inpCountry_log->selection_color(FL_SELECTION_COLOR);
        inpCountry_log->labeltype(FL_NORMAL_LABEL);
        inpCountry_log->labelfont(0);
        inpCountry_log->labelsize(12);
        inpCountry_log->labelcolor(FL_FOREGROUND_COLOR);
        inpCountry_log->align(FL_ALIGN_TOP_LEFT);
        inpCountry_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpCountry_log
      { inpLoc_log = new Fl_Input2(281, 56, 75, 22, _("Loc"));
        inpLoc_log->tooltip(_("Stations grid square"));
        inpLoc_log->box(FL_DOWN_BOX);
        inpLoc_log->color(FL_BACKGROUND2_COLOR);
        inpLoc_log->selection_color(FL_SELECTION_COLOR);
        inpLoc_log->labeltype(FL_NORMAL_LABEL);
        inpLoc_log->labelfont(0);
        inpLoc_log->labelsize(12);
        inpLoc_log->labelcolor(FL_FOREGROUND_COLOR);
        inpLoc_log->align(FL_ALIGN_TOP_LEFT);
        inpLoc_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpLoc_log
      { inpComment_log = new Fl_Input2(5, 95, 350, 57, _("Comment"));
        inpComment_log->tooltip(_("Interesting notes (80 chars max)"));
        inpComment_log->type(4);
        inpComment_log->box(FL_DOWN_BOX);
        inpComment_log->color(FL_BACKGROUND2_COLOR);
        inpComment_log->selection_color(FL_SELECTION_COLOR);
        inpComment_log->labeltype(FL_NORMAL_LABEL);
        inpComment_log->labelfont(0);
        inpComment_log->labelsize(12);
        inpComment_log->labelcolor(FL_FOREGROUND_COLOR);
        inpComment_log->align(FL_ALIGN_TOP_LEFT);
        inpComment_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpComment_log
      { Fl_DateInput* o = inpQSLrcvddate_log = new Fl_DateInput(455, 56, 100, 22, _("QSL-rcvd"));
        inpQSLrcvddate_log->tooltip(_("QSL received on this date"));
        inpQSLrcvddate_log->box(FL_DOWN_BOX);
        inpQSLrcvddate_log->color(FL_BACKGROUND2_COLOR);
        inpQSLrcvddate_log->selection_color(FL_SELECTION_COLOR);
        inpQSLrcvddate_log->labeltype(FL_NORMAL_LABEL);
        inpQSLrcvddate_log->labelfont(0);
        inpQSLrcvddate_log->labelsize(12);
        inpQSLrcvddate_log->labelcolor(FL_FOREGROUND_COLOR);
        inpQSLrcvddate_log->align(FL_ALIGN_TOP_LEFT);
        inpQSLrcvddate_log->when(FL_WHEN_RELEASE);
        o->format(2);
      } // Fl_DateInput* inpQSLrcvddate_log
      { Fl_DateInput* o = inpQSLsentdate_log = new Fl_DateInput(455, 95, 100, 22, _("QSL-sent"));
        inpQSLsentdate_log->tooltip(_("QSL sent on this date"));
        inpQSLsentdate_log->box(FL_DOWN_BOX);
        inpQSLsentdate_log->color(FL_BACKGROUND2_COLOR);
        inpQSLsentdate_log->selection_color(FL_SELECTION_COLOR);
        inpQSLsentdate_log->labeltype(FL_NORMAL_LABEL);
        inpQSLsentdate_log->labelfont(0);
        inpQSLsentdate_log->labelsize(12);
        inpQSLsentdate_log->labelcolor(FL_FOREGROUND_COLOR);
        inpQSLsentdate_log->align(FL_ALIGN_TOP_LEFT);
        inpQSLsentdate_log->when(FL_WHEN_RELEASE);
        o->format(2);
      } // Fl_DateInput* inpQSLsentdate_log
      { bNewSave = new Fl_Button(120, 201, 55, 22, _("New"));
        bNewSave->shortcut(0x8004e);
        bNewSave->color(FL_LIGHT1);
        bNewSave->selection_color((Fl_Color)48);
        bNewSave->callback((Fl_Callback*)cb_btnNewSave);
      } // Fl_Button* bNewSave
      { bUpdateCancel = new Fl_Button(192, 201, 55, 22, _("Update"));
        bUpdateCancel->shortcut(0x80055);
        bUpdateCancel->color(FL_LIGHT1);
        bUpdateCancel->selection_color((Fl_Color)48);
        bUpdateCancel->callback((Fl_Callback*)cb_btnUpdateCancel);
      } // Fl_Button* bUpdateCancel
      { bDelete = new Fl_Button(264, 201, 55, 22, _("Delete"));
        bDelete->shortcut(0x80044);
        bDelete->color(FL_LIGHT1);
        bDelete->selection_color((Fl_Color)48);
        bDelete->callback((Fl_Callback*)cb_btnDelete);
      } // Fl_Button* bDelete
      { txtNbrRecs_log = new Fl_Input2(38, 201, 65, 22, _("Recs"));
        txtNbrRecs_log->tooltip(_("# Records in logbook"));
        txtNbrRecs_log->box(FL_DOWN_BOX);
        txtNbrRecs_log->color(FL_BACKGROUND2_COLOR);
        txtNbrRecs_log->selection_color(FL_SELECTION_COLOR);
        txtNbrRecs_log->labeltype(FL_NORMAL_LABEL);
        txtNbrRecs_log->labelfont(0);
        txtNbrRecs_log->labelsize(12);
        txtNbrRecs_log->labelcolor(FL_FOREGROUND_COLOR);
        txtNbrRecs_log->align(FL_ALIGN_LEFT);
        txtNbrRecs_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* txtNbrRecs_log
      { Fl_Group* o = new Fl_Group(5, 154, 440, 44);
        o->box(FL_ENGRAVED_FRAME);
        { inpSerNoOut_log = new Fl_Input2(8, 171, 60, 22, _("Ser# out"));
          inpSerNoOut_log->tooltip(_("Contest seral # sent"));
          inpSerNoOut_log->box(FL_DOWN_BOX);
          inpSerNoOut_log->color(FL_BACKGROUND2_COLOR);
          inpSerNoOut_log->selection_color(FL_SELECTION_COLOR);
          inpSerNoOut_log->labeltype(FL_NORMAL_LABEL);
          inpSerNoOut_log->labelfont(0);
          inpSerNoOut_log->labelsize(12);
          inpSerNoOut_log->labelcolor(FL_FOREGROUND_COLOR);
          inpSerNoOut_log->align(FL_ALIGN_TOP_LEFT);
          inpSerNoOut_log->when(FL_WHEN_RELEASE);
        } // Fl_Input2* inpSerNoOut_log
        { inpMyXchg_log = new Fl_Input2(77, 171, 140, 22, _("Exchange Out"));
          inpMyXchg_log->tooltip(_("Contest exchange sent"));
          inpMyXchg_log->box(FL_DOWN_BOX);
          inpMyXchg_log->color(FL_BACKGROUND2_COLOR);
          inpMyXchg_log->selection_color(FL_SELECTION_COLOR);
          inpMyXchg_log->labeltype(FL_NORMAL_LABEL);
          inpMyXchg_log->labelfont(0);
          inpMyXchg_log->labelsize(12);
          inpMyXchg_log->labelcolor(FL_FOREGROUND_COLOR);
          inpMyXchg_log->align(FL_ALIGN_TOP_LEFT);
          inpMyXchg_log->when(FL_WHEN_RELEASE);
        } // Fl_Input2* inpMyXchg_log
        { inpSerNoIn_log = new Fl_Input2(226, 171, 60, 22, _("Ser# in"));
          inpSerNoIn_log->tooltip(_("Contest serial # received"));
          inpSerNoIn_log->box(FL_DOWN_BOX);
          inpSerNoIn_log->color(FL_BACKGROUND2_COLOR);
          inpSerNoIn_log->selection_color(FL_SELECTION_COLOR);
          inpSerNoIn_log->labeltype(FL_NORMAL_LABEL);
          inpSerNoIn_log->labelfont(0);
          inpSerNoIn_log->labelsize(12);
          inpSerNoIn_log->labelcolor(FL_FOREGROUND_COLOR);
          inpSerNoIn_log->align(FL_ALIGN_TOP_LEFT);
          inpSerNoIn_log->when(FL_WHEN_RELEASE);
        } // Fl_Input2* inpSerNoIn_log
        { inpXchgIn_log = new Fl_Input2(295, 171, 140, 22, _("Exchange In"));
          inpXchgIn_log->tooltip(_("Contest exchange received"));
          inpXchgIn_log->box(FL_DOWN_BOX);
          inpXchgIn_log->color(FL_BACKGROUND2_COLOR);
          inpXchgIn_log->selection_color(FL_SELECTION_COLOR);
          inpXchgIn_log->labeltype(FL_NORMAL_LABEL);
          inpXchgIn_log->labelfont(0);
          inpXchgIn_log->labelsize(12);
          inpXchgIn_log->labelcolor(FL_FOREGROUND_COLOR);
          inpXchgIn_log->align(FL_ALIGN_TOP_LEFT);
          inpXchgIn_log->when(FL_WHEN_RELEASE);
        } // Fl_Input2* inpXchgIn_log
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(449, 118, 116, 80);
        o->box(FL_ENGRAVED_FRAME);
        { inpSearchString = new Fl_Input2(454, 139, 105, 22, _("Call Search"));
          inpSearchString->tooltip(_("Search for this callsign"));
          inpSearchString->box(FL_DOWN_BOX);
          inpSearchString->color(FL_BACKGROUND2_COLOR);
          inpSearchString->selection_color(FL_SELECTION_COLOR);
          inpSearchString->labeltype(FL_NORMAL_LABEL);
          inpSearchString->labelfont(0);
          inpSearchString->labelsize(12);
          inpSearchString->labelcolor(FL_FOREGROUND_COLOR);
          inpSearchString->align(FL_ALIGN_TOP_LEFT);
          inpSearchString->when(FL_WHEN_RELEASE);
        } // Fl_Input2* inpSearchString
        { bSearchPrev = new Fl_Button(454, 171, 24, 22);
          bSearchPrev->tooltip(_("Find previous"));
          bSearchPrev->color(FL_LIGHT1);
          bSearchPrev->selection_color((Fl_Color)48);
          bSearchPrev->callback((Fl_Callback*)cb_search);
          bSearchPrev->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          bSearchPrev->image(new Fl_Pixmap(left_arrow_icon));
        } // Fl_Button* bSearchPrev
        { bSearchNext = new Fl_Button(535, 171, 24, 22);
          bSearchNext->tooltip(_("Find next"));
          bSearchNext->color(FL_LIGHT1);
          bSearchNext->selection_color((Fl_Color)48);
          bSearchNext->callback((Fl_Callback*)cb_search);
          bSearchNext->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          bSearchNext->image(new Fl_Pixmap(right_arrow_icon));
        } // Fl_Button* bSearchNext
        o->end();
      } // Fl_Group* o
      { inpIOTA_log = new Fl_Input2(357, 95, 80, 22, _("IOTA"));
        inpIOTA_log->tooltip(_("Islands on the air"));
        inpIOTA_log->box(FL_DOWN_BOX);
        inpIOTA_log->color(FL_BACKGROUND2_COLOR);
        inpIOTA_log->selection_color(FL_SELECTION_COLOR);
        inpIOTA_log->labeltype(FL_NORMAL_LABEL);
        inpIOTA_log->labelfont(0);
        inpIOTA_log->labelsize(12);
        inpIOTA_log->labelcolor(FL_FOREGROUND_COLOR);
        inpIOTA_log->align(FL_ALIGN_TOP_LEFT);
        inpIOTA_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpIOTA_log
      { inpTX_pwr_log = new Fl_Input2(357, 56, 80, 22, _("Tx Power"));
        inpTX_pwr_log->tooltip(_("Transmit power used"));
        inpTX_pwr_log->box(FL_DOWN_BOX);
        inpTX_pwr_log->color(FL_BACKGROUND2_COLOR);
        inpTX_pwr_log->selection_color(FL_SELECTION_COLOR);
        inpTX_pwr_log->labeltype(FL_NORMAL_LABEL);
        inpTX_pwr_log->labelfont(0);
        inpTX_pwr_log->labelsize(12);
        inpTX_pwr_log->labelcolor(FL_FOREGROUND_COLOR);
        inpTX_pwr_log->align(FL_ALIGN_TOP_LEFT);
        inpTX_pwr_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpTX_pwr_log
      { inpDXCC_log = new Fl_Input2(357, 130, 80, 22, _("DXCC"));
        inpDXCC_log->box(FL_DOWN_BOX);
        inpDXCC_log->color(FL_BACKGROUND2_COLOR);
        inpDXCC_log->selection_color(FL_SELECTION_COLOR);
        inpDXCC_log->labeltype(FL_NORMAL_LABEL);
        inpDXCC_log->labelfont(0);
        inpDXCC_log->labelsize(12);
        inpDXCC_log->labelcolor(FL_FOREGROUND_COLOR);
        inpDXCC_log->align(FL_ALIGN_TOP_LEFT);
        inpDXCC_log->when(FL_WHEN_RELEASE);
      } // Fl_Input2* inpDXCC_log
      editGroup->end();
    } // Fl_Group* editGroup
    { wBrowser = new Table(2, 231, 565, 115);
      wBrowser->box(FL_DOWN_FRAME);
      wBrowser->color(FL_BACKGROUND2_COLOR);
      wBrowser->selection_color(FL_SELECTION_COLOR);
      wBrowser->labeltype(FL_NORMAL_LABEL);
      wBrowser->labelfont(0);
      wBrowser->labelsize(14);
      wBrowser->labelcolor(FL_FOREGROUND_COLOR);
      wBrowser->align(FL_ALIGN_TOP);
      wBrowser->when(FL_WHEN_RELEASE);
      wBrowser->end();
      Fl_Group::current()->resizable(wBrowser);
    } // Table* wBrowser
    dlgLogbook->end();
  } // Fl_Double_Window* dlgLogbook
  wBrowser->align (FL_ALIGN_TOP | FL_ALIGN_LEFT);
wBrowser->addColumn (_("Date"),85);
wBrowser->colcallback (0,cb_SortByDate);
wBrowser->addColumn (_("Time"),50);
wBrowser->addColumn (_("Callsign"),100);
wBrowser->colcallback (2,cb_SortByCall);
wBrowser->addColumn (_("Name"),110);
wBrowser->addColumn (_("Frequency"),120);
wBrowser->colcallback (4,cb_SortByFreq);
wBrowser->addColumn (_("Mode"),90);
wBrowser->colcallback (5,cb_SortByMode);
wBrowser->addHiddenColumn ("rn");
wBrowser->allowSort(true);
wBrowser->callback(cb_browser);
wBrowser->when(FL_WHEN_CHANGED);
wBrowser->rowSize (FL_NORMAL_SIZE);
wBrowser->headerSize (FL_NORMAL_SIZE);
wBrowser->allowResize (1);
wBrowser->gridEnabled (0);
dlgLogbook->xclass(PACKAGE_TARNAME);
  { wCabrillo = new Fl_Double_Window(655, 340, _("Cabrillo Setup"));
    { Fl_Group* o = new Fl_Group(4, 4, 388, 305, _("Select Records to Export"));
      o->box(FL_ENGRAVED_FRAME);
      o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      { chkCabBrowser = new Fl_Check_Browser(13, 25, 370, 245);
      } // Fl_Check_Browser* chkCabBrowser
      { btnCabClearAll = new Fl_Button(69, 277, 109, 20, _("Clear All"));
        btnCabClearAll->callback((Fl_Callback*)cb_btnCabClearAll);
      } // Fl_Button* btnCabClearAll
      { btnCabCheckAll = new Fl_Button(200, 277, 109, 20, _("Check All"));
        btnCabCheckAll->callback((Fl_Callback*)cb_btnCabCheckAll);
      } // Fl_Button* btnCabCheckAll
      o->end();
    } // Fl_Group* o
    { btnCabOK = new Fl_Return_Button(536, 312, 100, 20, _("OK"));
      btnCabOK->callback((Fl_Callback*)cb_btnCabOK);
    } // Fl_Return_Button* btnCabOK
    { btnCabCancel = new Fl_Button(405, 312, 100, 20, _("Cancel"));
      btnCabCancel->callback((Fl_Callback*)cb_btnCabCancel);
    } // Fl_Button* btnCabCancel
    { Fl_Group* o = new Fl_Group(390, 4, 258, 303, _("Select Cabrillo Contest & Fields"));
      o->box(FL_ENGRAVED_FRAME);
      o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      { cboContest = new Fl_ComboBox(460, 35, 180, 20, _("Contest:"));
        cboContest->box(FL_BORDER_BOX);
        cboContest->color(FL_BACKGROUND2_COLOR);
        cboContest->selection_color(FL_BACKGROUND_COLOR);
        cboContest->labeltype(FL_NORMAL_LABEL);
        cboContest->labelfont(0);
        cboContest->labelsize(14);
        cboContest->labelcolor(FL_FOREGROUND_COLOR);
        cboContest->align(FL_ALIGN_LEFT);
        cboContest->when(FL_WHEN_RELEASE);
        cboContest->end();
      } // Fl_ComboBox* cboContest
      { btnCabCall = new Fl_Check_Button(420, 75, 70, 15, _("Call"));
        btnCabCall->down_box(FL_DOWN_BOX);
        btnCabCall->value(1);
      } // Fl_Check_Button* btnCabCall
      { btnCabFreq = new Fl_Check_Button(420, 99, 70, 15, _("Freq"));
        btnCabFreq->down_box(FL_DOWN_BOX);
        btnCabFreq->value(1);
      } // Fl_Check_Button* btnCabFreq
      { btnCabMode = new Fl_Check_Button(420, 123, 70, 15, _("Mode"));
        btnCabMode->down_box(FL_DOWN_BOX);
        btnCabMode->value(1);
      } // Fl_Check_Button* btnCabMode
      { btnCabQSOdate = new Fl_Check_Button(420, 147, 70, 15, _("QSO Date"));
        btnCabQSOdate->down_box(FL_DOWN_BOX);
        btnCabQSOdate->value(1);
      } // Fl_Check_Button* btnCabQSOdate
      { btnCabTimeOFF = new Fl_Check_Button(420, 171, 70, 15, _("Time OFF"));
        btnCabTimeOFF->down_box(FL_DOWN_BOX);
        btnCabTimeOFF->value(1);
      } // Fl_Check_Button* btnCabTimeOFF
      { btnCabRSTsent = new Fl_Check_Button(420, 195, 70, 15, _("RST sent"));
        btnCabRSTsent->down_box(FL_DOWN_BOX);
        btnCabRSTsent->value(1);
      } // Fl_Check_Button* btnCabRSTsent
      { btnCabRSTrcvd = new Fl_Check_Button(420, 220, 70, 15, _("RST rcvd"));
        btnCabRSTrcvd->down_box(FL_DOWN_BOX);
        btnCabRSTrcvd->value(1);
      } // Fl_Check_Button* btnCabRSTrcvd
      { btnCabSerialIN = new Fl_Check_Button(522, 99, 70, 15, _("Serial # in"));
        btnCabSerialIN->down_box(FL_DOWN_BOX);
        btnCabSerialIN->value(1);
      } // Fl_Check_Button* btnCabSerialIN
      { btnCabSerialOUT = new Fl_Check_Button(522, 123, 70, 15, _("Serial # out"));
        btnCabSerialOUT->down_box(FL_DOWN_BOX);
        btnCabSerialOUT->value(1);
      } // Fl_Check_Button* btnCabSerialOUT
      { btnCabXchgIn = new Fl_Check_Button(522, 147, 70, 15, _("Exchange In"));
        btnCabXchgIn->down_box(FL_DOWN_BOX);
        btnCabXchgIn->value(1);
      } // Fl_Check_Button* btnCabXchgIn
      { btnCabMyXchg = new Fl_Check_Button(522, 171, 70, 15, _("Exchange Out"));
        btnCabMyXchg->down_box(FL_DOWN_BOX);
        btnCabMyXchg->value(1);
      } // Fl_Check_Button* btnCabMyXchg
      { btnCabClearAllFields = new Fl_Button(435, 275, 76, 20, _("Clear All"));
        btnCabClearAllFields->callback((Fl_Callback*)cb_btnCabClearAllFields);
      } // Fl_Button* btnCabClearAllFields
      { btnCabCheckAllFields = new Fl_Button(531, 275, 76, 20, _("Check All"));
        btnCabCheckAllFields->callback((Fl_Callback*)cb_btnCabCheckAllFields);
      } // Fl_Button* btnCabCheckAllFields
      o->end();
    } // Fl_Group* o
    wCabrillo->set_modal();
    wCabrillo->end();
  } // Fl_Double_Window* wCabrillo
}
