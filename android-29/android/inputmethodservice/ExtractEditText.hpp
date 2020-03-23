#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT
#define ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT

#include "../widget/EditText.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}

namespace __jni_impl::android::inputmethodservice
{
	class ExtractEditText : public __jni_impl::android::widget::EditText
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0);
		jboolean isInputMethodTarget();
		jboolean onTextContextMenuItem(jint arg0);
		void startInternalChanges();
		void finishInternalChanges();
		jboolean hasVerticalScrollBar();
		jboolean hasFocus();
		jboolean hasWindowFocus();
		jboolean performClick();
		jboolean isFocused();
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/Context.hpp"
#include "../view/inputmethod/ExtractedText.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void ExtractEditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ExtractEditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ExtractEditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ExtractEditText::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.ExtractEditText",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void ExtractEditText::setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0)
	{
		__thiz.callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.__jniObject().object());
	}
	jboolean ExtractEditText::isInputMethodTarget()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z");
	}
	jboolean ExtractEditText::onTextContextMenuItem(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0);
	}
	void ExtractEditText::startInternalChanges()
	{
		__thiz.callMethod<void>(
			"startInternalChanges",
			"()V");
	}
	void ExtractEditText::finishInternalChanges()
	{
		__thiz.callMethod<void>(
			"finishInternalChanges",
			"()V");
	}
	jboolean ExtractEditText::hasVerticalScrollBar()
	{
		return __thiz.callMethod<jboolean>(
			"hasVerticalScrollBar",
			"()Z");
	}
	jboolean ExtractEditText::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z");
	}
	jboolean ExtractEditText::hasWindowFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowFocus",
			"()Z");
	}
	jboolean ExtractEditText::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z");
	}
	jboolean ExtractEditText::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z");
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class ExtractEditText : public __jni_impl::android::inputmethodservice::ExtractEditText
	{
	public:
		ExtractEditText(QAndroidJniObject obj) { __thiz = obj; }
		ExtractEditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ExtractEditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ExtractEditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ExtractEditText(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_EXTRACTEDITTEXT

