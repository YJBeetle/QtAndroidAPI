#pragma once

#ifndef ANDROID_WIDGET_RADIOGROUP
#define ANDROID_WIDGET_RADIOGROUP

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::widget
{
	class LinearLayout_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class RadioGroup_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class RadioGroup : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		void check(jint arg0);
		void clearCheck();
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		jint getCheckedRadioButtonId();
		void setOnCheckedChangeListener(__jni_impl::__JniBaseClass arg0);
		void setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "LinearLayout_LayoutParams.hpp"
#include "RadioGroup_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void RadioGroup::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void RadioGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void RadioGroup::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RadioGroup::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	void RadioGroup::check(jint arg0)
	{
		__thiz.callMethod<void>(
			"check",
			"(I)V",
			arg0
		);
	}
	void RadioGroup::clearCheck()
	{
		__thiz.callMethod<void>(
			"clearCheck",
			"()V"
		);
	}
	QAndroidJniObject RadioGroup::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring RadioGroup::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint RadioGroup::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject RadioGroup::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint RadioGroup::getCheckedRadioButtonId()
	{
		return __thiz.callMethod<jint>(
			"getCheckedRadioButtonId",
			"()I"
		);
	}
	void RadioGroup::setOnCheckedChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RadioGroup::setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RadioGroup : public __jni_impl::android::widget::RadioGroup
	{
	public:
		RadioGroup(QAndroidJniObject obj) { __thiz = obj; }
		RadioGroup(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		RadioGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_RADIOGROUP

