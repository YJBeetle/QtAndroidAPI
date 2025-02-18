#pragma once

#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../widget/DatePicker.def.hpp"
#include "./DatePickerDialog.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline DatePickerDialog::DatePickerDialog(android::content::Context arg0)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline DatePickerDialog::DatePickerDialog(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;Landroid/app/DatePickerDialog$OnDateSetListener;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	inline DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1, JObject arg2, jint arg3, jint arg4, jint arg5)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;ILandroid/app/DatePickerDialog$OnDateSetListener;III)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline android::widget::DatePicker DatePickerDialog::getDatePicker() const
	{
		return callObjectMethod(
			"getDatePicker",
			"()Landroid/widget/DatePicker;"
		);
	}
	inline void DatePickerDialog::onClick(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DatePickerDialog::onDateChanged(android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onDateChanged",
			"(Landroid/widget/DatePicker;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void DatePickerDialog::onRestoreInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle DatePickerDialog::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	inline void DatePickerDialog::setOnDateSetListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateSetListener",
			"(Landroid/app/DatePickerDialog$OnDateSetListener;)V",
			arg0.object()
		);
	}
	inline void DatePickerDialog::updateDate(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"updateDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::app

// Base class headers
#include "./Dialog.hpp"
#include "./AlertDialog.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
