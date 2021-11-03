#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/TimePicker.hpp"
#include "./TimePickerDialog.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	TimePickerDialog::TimePickerDialog(QJniObject obj) : android::app::AlertDialog(obj) {}
	
	// Constructors
	TimePickerDialog::TimePickerDialog(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jboolean arg4)
		: android::app::AlertDialog(
			"android.app.TimePickerDialog",
			"(Landroid/content/Context;Landroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	TimePickerDialog::TimePickerDialog(android::content::Context arg0, jint arg1, JObject arg2, jint arg3, jint arg4, jboolean arg5)
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
	void TimePickerDialog::onClick(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	void TimePickerDialog::onRestoreInstanceState(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::os::Bundle TimePickerDialog::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	void TimePickerDialog::onTimeChanged(android::widget::TimePicker arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onTimeChanged",
			"(Landroid/widget/TimePicker;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void TimePickerDialog::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	void TimePickerDialog::updateTime(jint arg0, jint arg1)
	{
		callMethod<void>(
			"updateTime",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

