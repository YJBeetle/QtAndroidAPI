#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_REQUEST
#define ANDROID_APP_VOICEINTERACTOR_REQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class Activity;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor_Request : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		QAndroidJniObject getContext();
		void cancel();
		QAndroidJniObject getActivity();
		void onCancel();
		void onAttached(__jni_impl::android::app::Activity arg0);
		void onDetached();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "Activity.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$Request",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractor_Request::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject VoiceInteractor_Request::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject VoiceInteractor_Request::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	void VoiceInteractor_Request::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	QAndroidJniObject VoiceInteractor_Request::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;");
	}
	void VoiceInteractor_Request::onCancel()
	{
		__thiz.callMethod<void>(
			"onCancel",
			"()V");
	}
	void VoiceInteractor_Request::onAttached(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractor_Request::onDetached()
	{
		__thiz.callMethod<void>(
			"onDetached",
			"()V");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_Request : public __jni_impl::android::app::VoiceInteractor_Request
	{
	public:
		VoiceInteractor_Request(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_Request()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_REQUEST

