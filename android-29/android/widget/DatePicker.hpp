#pragma once

#ifndef ANDROID_WIDGET_DATEPICKER
#define ANDROID_WIDGET_DATEPICKER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::widget
{
	class CalendarView;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::widget
{
	class DatePicker : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void init(jint arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jint getYear();
		jint getDayOfMonth();
		jboolean isEnabled();
		jint getMonth();
		jint getFirstDayOfWeek();
		void setFirstDayOfWeek(jint arg0);
		void dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		jstring getAccessibilityClassName();
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		void setEnabled(jboolean arg0);
		void updateDate(jint arg0, jint arg1, jint arg2);
		jlong getMinDate();
		void setMinDate(jlong arg0);
		jlong getMaxDate();
		void setMaxDate(jlong arg0);
		void setOnDateChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean getCalendarViewShown();
		QAndroidJniObject getCalendarView();
		void setCalendarViewShown(jboolean arg0);
		jboolean getSpinnersShown();
		void setSpinnersShown(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewStructure.hpp"
#include "../util/SparseArray.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "CalendarView.hpp"
#include "../content/res/Configuration.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void DatePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void DatePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatePicker::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DatePicker",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void DatePicker::init(jint arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"init",
			"(IIILandroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint DatePicker::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint DatePicker::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	jboolean DatePicker::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jint DatePicker::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint DatePicker::getFirstDayOfWeek()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	void DatePicker::setFirstDayOfWeek(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void DatePicker::dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring DatePicker::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void DatePicker::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	jint DatePicker::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject DatePicker::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	void DatePicker::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void DatePicker::updateDate(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jlong DatePicker::getMinDate()
	{
		return __thiz.callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	void DatePicker::setMinDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	jlong DatePicker::getMaxDate()
	{
		return __thiz.callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	void DatePicker::setMaxDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	void DatePicker::setOnDateChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDateChangedListener",
			"(Landroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean DatePicker::getCalendarViewShown()
	{
		return __thiz.callMethod<jboolean>(
			"getCalendarViewShown",
			"()Z"
		);
	}
	QAndroidJniObject DatePicker::getCalendarView()
	{
		return __thiz.callObjectMethod(
			"getCalendarView",
			"()Landroid/widget/CalendarView;"
		);
	}
	void DatePicker::setCalendarViewShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCalendarViewShown",
			"(Z)V",
			arg0
		);
	}
	jboolean DatePicker::getSpinnersShown()
	{
		return __thiz.callMethod<jboolean>(
			"getSpinnersShown",
			"()Z"
		);
	}
	void DatePicker::setSpinnersShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSpinnersShown",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class DatePicker : public __jni_impl::android::widget::DatePicker
	{
	public:
		DatePicker(QAndroidJniObject obj) { __thiz = obj; }
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DatePicker(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_DATEPICKER

