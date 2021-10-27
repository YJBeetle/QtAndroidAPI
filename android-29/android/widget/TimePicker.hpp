#pragma once

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
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::widget
{
	class TimePicker : public __jni_impl::android::widget::FrameLayout
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
		jint getBaseline();
		QAndroidJniObject getCurrentHour();
		QAndroidJniObject getCurrentMinute();
		jint getHour();
		jint getMinute();
		jboolean is24HourView();
		jboolean isEnabled();
		void setCurrentHour(__jni_impl::java::lang::Integer arg0);
		void setCurrentMinute(__jni_impl::java::lang::Integer arg0);
		void setEnabled(jboolean arg0);
		void setHour(jint arg0);
		void setIs24HourView(__jni_impl::java::lang::Boolean arg0);
		void setMinute(jint arg0);
		void setOnTimeChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean validateInput();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Integer.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TimePicker::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TimePicker",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TimePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TimePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TimePicker::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void TimePicker::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	void TimePicker::dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring TimePicker::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TimePicker::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject TimePicker::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint TimePicker::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	QAndroidJniObject TimePicker::getCurrentHour()
	{
		return __thiz.callObjectMethod(
			"getCurrentHour",
			"()Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TimePicker::getCurrentMinute()
	{
		return __thiz.callObjectMethod(
			"getCurrentMinute",
			"()Ljava/lang/Integer;"
		);
	}
	jint TimePicker::getHour()
	{
		return __thiz.callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint TimePicker::getMinute()
	{
		return __thiz.callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jboolean TimePicker::is24HourView()
	{
		return __thiz.callMethod<jboolean>(
			"is24HourView",
			"()Z"
		);
	}
	jboolean TimePicker::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void TimePicker::setCurrentHour(__jni_impl::java::lang::Integer arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentHour",
			"(Ljava/lang/Integer;)V",
			arg0.__jniObject().object()
		);
	}
	void TimePicker::setCurrentMinute(__jni_impl::java::lang::Integer arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentMinute",
			"(Ljava/lang/Integer;)V",
			arg0.__jniObject().object()
		);
	}
	void TimePicker::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TimePicker::setHour(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	void TimePicker::setIs24HourView(__jni_impl::java::lang::Boolean arg0)
	{
		__thiz.callMethod<void>(
			"setIs24HourView",
			"(Ljava/lang/Boolean;)V",
			arg0.__jniObject().object()
		);
	}
	void TimePicker::setMinute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	void TimePicker::setOnTimeChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimeChangedListener",
			"(Landroid/widget/TimePicker$OnTimeChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TimePicker::validateInput()
	{
		return __thiz.callMethod<jboolean>(
			"validateInput",
			"()Z"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TimePicker : public __jni_impl::android::widget::TimePicker
	{
	public:
		TimePicker(QAndroidJniObject obj) { __thiz = obj; }
		TimePicker(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TimePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TimePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TimePicker(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

