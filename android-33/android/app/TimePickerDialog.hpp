#pragma once

#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../widget/TimePicker.def.hpp"
#include "./TimePickerDialog.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline TimePickerDialog::TimePickerDialog(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jboolean arg4)
		: android::app::AlertDialog(
			"android.app.TimePickerDialog",
			"(Landroid/content/Context;Landroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	inline TimePickerDialog::TimePickerDialog(android::content::Context arg0, jint arg1, JObject arg2, jint arg3, jint arg4, jboolean arg5)
		: android::app::AlertDialog(
			"android.app.TimePickerDialog",
			"(Landroid/content/Context;ILandroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline void TimePickerDialog::onClick(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TimePickerDialog::onRestoreInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle TimePickerDialog::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	inline void TimePickerDialog::onTimeChanged(android::widget::TimePicker arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onTimeChanged",
			"(Landroid/widget/TimePicker;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void TimePickerDialog::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	inline void TimePickerDialog::updateTime(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"updateTime",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

// Base class headers
#include "./Dialog.hpp"
#include "./AlertDialog.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
