#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/DatePicker.hpp"
#include "./DatePickerDialog.hpp"

namespace android::app
{
	// Fields
	
	DatePickerDialog::DatePickerDialog(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatePickerDialog::DatePickerDialog(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;Landroid/app/DatePickerDialog$OnDateSetListener;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;ILandroid/app/DatePickerDialog$OnDateSetListener;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	QAndroidJniObject DatePickerDialog::getDatePicker()
	{
		return __thiz.callObjectMethod(
			"getDatePicker",
			"()Landroid/widget/DatePicker;"
		);
	}
	void DatePickerDialog::onClick(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatePickerDialog::onDateChanged(android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onDateChanged",
			"(Landroid/widget/DatePicker;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void DatePickerDialog::onRestoreInstanceState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatePickerDialog::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	void DatePickerDialog::setOnDateSetListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDateSetListener",
			"(Landroid/app/DatePickerDialog$OnDateSetListener;)V",
			arg0.__jniObject().object()
		);
	}
	void DatePickerDialog::updateDate(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::app

