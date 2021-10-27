#pragma once

#ifndef ANDROID_APP_DATEPICKERDIALOG
#define ANDROID_APP_DATEPICKERDIALOG

#include "../../__JniBaseClass.hpp"
#include "Dialog.hpp"
#include "AlertDialog.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::widget
{
	class DatePicker;
}

namespace __jni_impl::android::app
{
	class DatePickerDialog : public __jni_impl::android::app::AlertDialog
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		QAndroidJniObject getDatePicker();
		void onClick(__jni_impl::__JniBaseClass arg0, jint arg1);
		void onDateChanged(__jni_impl::android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3);
		void onRestoreInstanceState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject onSaveInstanceState();
		void setOnDateSetListener(__jni_impl::__JniBaseClass arg0);
		void updateDate(jint arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/DatePicker.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void DatePickerDialog::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void DatePickerDialog::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.DatePickerDialog",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatePickerDialog::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
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
	void DatePickerDialog::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jint arg5)
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
	void DatePickerDialog::onClick(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatePickerDialog::onDateChanged(__jni_impl::android::widget::DatePicker arg0, jint arg1, jint arg2, jint arg3)
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
	void DatePickerDialog::onRestoreInstanceState(__jni_impl::android::os::Bundle arg0)
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
	void DatePickerDialog::setOnDateSetListener(__jni_impl::__JniBaseClass arg0)
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class DatePickerDialog : public __jni_impl::android::app::DatePickerDialog
	{
	public:
		DatePickerDialog(QAndroidJniObject obj) { __thiz = obj; }
		DatePickerDialog(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		DatePickerDialog(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DatePickerDialog(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		DatePickerDialog(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_DATEPICKERDIALOG

