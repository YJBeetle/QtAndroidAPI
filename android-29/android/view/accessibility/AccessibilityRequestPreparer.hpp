#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityRequestPreparer : public __JniBaseClass
	{
	public:
		// Fields
		static jint REQUEST_TYPE_EXTRA_DATA();
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0, jint arg1);
		
		// Methods
		QAndroidJniObject getView();
		void onPrepareExtraData(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::Message arg3);
		void onPrepareExtraData(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::Message arg3);
	};
} // namespace __jni_impl::android::view::accessibility

#include "../../os/Bundle.hpp"
#include "../../os/Message.hpp"
#include "../View.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"REQUEST_TYPE_EXTRA_DATA"
		);
	}
	
	// Constructors
	void AccessibilityRequestPreparer::__constructor(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject AccessibilityRequestPreparer::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::Message arg3)
	{
		__thiz.callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::Message arg3)
	{
		__thiz.callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityRequestPreparer : public __jni_impl::android::view::accessibility::AccessibilityRequestPreparer
	{
	public:
		AccessibilityRequestPreparer(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityRequestPreparer(__jni_impl::android::view::View arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::accessibility

