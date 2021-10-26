#pragma once

#ifndef ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW
#define ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"
#include "EditText.hpp"
#include "AutoCompleteTextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class MultiAutoCompleteTextView : public __jni_impl::android::widget::AutoCompleteTextView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jstring getAccessibilityClassName();
		jboolean enoughToFilter();
		void performValidation();
		void setTokenizer(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void MultiAutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void MultiAutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void MultiAutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MultiAutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring MultiAutoCompleteTextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean MultiAutoCompleteTextView::enoughToFilter()
	{
		return __thiz.callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	void MultiAutoCompleteTextView::performValidation()
	{
		__thiz.callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void MultiAutoCompleteTextView::setTokenizer(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTokenizer",
			"(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class MultiAutoCompleteTextView : public __jni_impl::android::widget::MultiAutoCompleteTextView
	{
	public:
		MultiAutoCompleteTextView(QAndroidJniObject obj) { __thiz = obj; }
		MultiAutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		MultiAutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MultiAutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MultiAutoCompleteTextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_MULTIAUTOCOMPLETETEXTVIEW

