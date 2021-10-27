#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::widget
{
	class CalendarView;
}

namespace __jni_impl::android::widget
{
	class DatePicker : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		void dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		QAndroidJniObject getCalendarView();
		jboolean getCalendarViewShown();
		jint getDayOfMonth();
		jint getFirstDayOfWeek();
		jlong getMaxDate();
		jlong getMinDate();
		jint getMonth();
		jboolean getSpinnersShown();
		jint getYear();
		void init(jint arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		jboolean isEnabled();
		void setCalendarViewShown(jboolean arg0);
		void setEnabled(jboolean arg0);
		void setFirstDayOfWeek(jint arg0);
		void setMaxDate(jlong arg0);
		void setMinDate(jlong arg0);
		void setOnDateChangedListener(__jni_impl::__JniBaseClass arg0);
		void setSpinnersShown(jboolean arg0);
		void updateDate(jint arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../util/SparseArray.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "CalendarView.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void DatePicker::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DatePicker",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
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
	
	// Methods
	void DatePicker::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject DatePicker::getCalendarView()
	{
		return __thiz.callObjectMethod(
			"getCalendarView",
			"()Landroid/widget/CalendarView;"
		);
	}
	jboolean DatePicker::getCalendarViewShown()
	{
		return __thiz.callMethod<jboolean>(
			"getCalendarViewShown",
			"()Z"
		);
	}
	jint DatePicker::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
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
	jlong DatePicker::getMaxDate()
	{
		return __thiz.callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	jlong DatePicker::getMinDate()
	{
		return __thiz.callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	jint DatePicker::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jboolean DatePicker::getSpinnersShown()
	{
		return __thiz.callMethod<jboolean>(
			"getSpinnersShown",
			"()Z"
		);
	}
	jint DatePicker::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
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
	jboolean DatePicker::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
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
	void DatePicker::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
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
	void DatePicker::setMaxDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
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
	void DatePicker::setOnDateChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDateChangedListener",
			"(Landroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class DatePicker : public __jni_impl::android::widget::DatePicker
	{
	public:
		DatePicker(QAndroidJniObject obj) { __thiz = obj; }
		DatePicker(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DatePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

