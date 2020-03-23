#pragma once

#ifndef ANDROID_APP_REMOTEINPUT_BUILDER
#define ANDROID_APP_REMOTEINPUT_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class RemoteInput;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class RemoteInput_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAllowDataType(jstring arg0, jboolean arg1);
		QAndroidJniObject setChoices(jarray arg0);
		QAndroidJniObject setAllowFreeFormInput(jboolean arg0);
		QAndroidJniObject setEditChoicesBeforeSending(jint arg0);
		QAndroidJniObject getExtras();
		QAndroidJniObject setLabel(jstring arg0);
		QAndroidJniObject addExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "RemoteInput.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void RemoteInput_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteInput$Builder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject RemoteInput_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/RemoteInput;");
	}
	QAndroidJniObject RemoteInput_Builder::setAllowDataType(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setAllowDataType",
			"(Ljava/lang/String;Z)Landroid/app/RemoteInput$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject RemoteInput_Builder::setChoices(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setChoices",
			"([Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0);
	}
	QAndroidJniObject RemoteInput_Builder::setAllowFreeFormInput(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowFreeFormInput",
			"(Z)Landroid/app/RemoteInput$Builder;",
			arg0);
	}
	QAndroidJniObject RemoteInput_Builder::setEditChoicesBeforeSending(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEditChoicesBeforeSending",
			"(I)Landroid/app/RemoteInput$Builder;",
			arg0);
	}
	QAndroidJniObject RemoteInput_Builder::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject RemoteInput_Builder::setLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0);
	}
	QAndroidJniObject RemoteInput_Builder::addExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/RemoteInput$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class RemoteInput_Builder : public __jni_impl::android::app::RemoteInput_Builder
	{
	public:
		RemoteInput_Builder(QAndroidJniObject obj) { __thiz = obj; }
		RemoteInput_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_REMOTEINPUT_BUILDER

