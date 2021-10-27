#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view::autofill
{
	class AutofillManager_AutofillCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint EVENT_INPUT_HIDDEN();
		static jint EVENT_INPUT_SHOWN();
		static jint EVENT_INPUT_UNAVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAutofillEvent(__jni_impl::android::view::View arg0, jint arg1);
		void onAutofillEvent(__jni_impl::android::view::View arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::view::autofill

#include "../View.hpp"

namespace __jni_impl::android::view::autofill
{
	// Fields
	jint AutofillManager_AutofillCallback::EVENT_INPUT_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_HIDDEN"
		);
	}
	jint AutofillManager_AutofillCallback::EVENT_INPUT_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_SHOWN"
		);
	}
	jint AutofillManager_AutofillCallback::EVENT_INPUT_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"EVENT_INPUT_UNAVAILABLE"
		);
	}
	
	// Constructors
	void AutofillManager_AutofillCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.autofill.AutofillManager$AutofillCallback",
			"()V"
		);
	}
	
	// Methods
	void AutofillManager_AutofillCallback::onAutofillEvent(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAutofillEvent",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AutofillManager_AutofillCallback::onAutofillEvent(__jni_impl::android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAutofillEvent",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::view::autofill

namespace android::view::autofill
{
	class AutofillManager_AutofillCallback : public __jni_impl::android::view::autofill::AutofillManager_AutofillCallback
	{
	public:
		AutofillManager_AutofillCallback(QAndroidJniObject obj) { __thiz = obj; }
		AutofillManager_AutofillCallback()
		{
			__constructor();
		}
	};
} // namespace android::view::autofill

