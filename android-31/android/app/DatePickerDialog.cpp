#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/DatePicker.hpp"
#include "./DatePickerDialog.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	DatePickerDialog::DatePickerDialog(QJniObject obj) : android::app::AlertDialog(obj) {}
	
	// Constructors
	DatePickerDialog::DatePickerDialog(android::content::Context arg0)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4)
		: android::app::AlertDialog(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;Landroid/app/DatePickerDialog$OnDateSetListener;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	DatePickerDialog::DatePickerDialog(android::content::Context arg0, jint arg1, JObject arg2, jint arg3, jint arg4, jint arg5)
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
	android::widget::DatePicker DatePickerDialog::getDatePicker() const
	{
		return callObjectMethod(
			"getDatePicker",
			"()Landroid/widget/DatePicker;"
		);
	}
	void DatePickerDialog::onClick(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.object(),
			arg1
		);
	}
	void DatePickerDialog::onDateChanged(android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3) const
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
	void DatePickerDialog::onRestoreInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::os::Bundle DatePickerDialog::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	void DatePickerDialog::setOnDateSetListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateSetListener",
			"(Landroid/app/DatePickerDialog$OnDateSetListener;)V",
			arg0.object()
		);
	}
	void DatePickerDialog::updateDate(jint arg0, jint arg1, jint arg2) const
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

