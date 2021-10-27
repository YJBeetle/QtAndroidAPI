#pragma once

#ifndef ANDROID_APP_TIMEPICKERDIALOG
#define ANDROID_APP_TIMEPICKERDIALOG

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
	class TimePicker;
}

namespace __jni_impl::android::app
{
	class TimePickerDialog : public __jni_impl::android::app::AlertDialog
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jboolean arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jboolean arg5);
		
		// Methods
		void onClick(__jni_impl::__JniBaseClass arg0, jint arg1);
		void onRestoreInstanceState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject onSaveInstanceState();
		void onTimeChanged(__jni_impl::android::widget::TimePicker arg0, jint arg1, jint arg2);
		void show();
		void updateTime(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../widget/TimePicker.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void TimePickerDialog::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jboolean arg4)
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
	void TimePickerDialog::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jboolean arg5)
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
	void TimePickerDialog::onClick(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TimePickerDialog::onRestoreInstanceState(__jni_impl::android::os::Bundle arg0)
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
	void TimePickerDialog::onTimeChanged(__jni_impl::android::widget::TimePicker arg0, jint arg1, jint arg2)
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class TimePickerDialog : public __jni_impl::android::app::TimePickerDialog
	{
	public:
		TimePickerDialog(QAndroidJniObject obj) { __thiz = obj; }
		TimePickerDialog(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jboolean arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		TimePickerDialog(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4, jboolean arg5)
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

#endif // ANDROID_APP_TIMEPICKERDIALOG

