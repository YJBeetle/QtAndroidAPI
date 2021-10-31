#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/TimePicker.hpp"
#include "./TimePickerDialog.hpp"

namespace android::app
{
	// Fields
	
	TimePickerDialog::TimePickerDialog(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimePickerDialog::TimePickerDialog(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.app.TimePickerDialog",
			"(Landroid/content/Context;Landroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	TimePickerDialog::TimePickerDialog(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3, jint arg4, jboolean arg5)
	{
		__thiz = QAndroidJniObject(
			"android.app.TimePickerDialog",
			"(Landroid/content/Context;ILandroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	void TimePickerDialog::onClick(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TimePickerDialog::onRestoreInstanceState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimePickerDialog::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	void TimePickerDialog::onTimeChanged(android::widget::TimePicker arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onTimeChanged",
			"(Landroid/widget/TimePicker;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void TimePickerDialog::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
	void TimePickerDialog::updateTime(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"updateTime",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

