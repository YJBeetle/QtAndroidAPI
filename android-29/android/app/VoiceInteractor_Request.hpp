#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Context;
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
		void cancel();
		QAndroidJniObject getActivity();
		QAndroidJniObject getContext();
		jstring getName();
		void onAttached(__jni_impl::android::app::Activity arg0);
		void onCancel();
		void onDetached();
		jstring toString();
	};
} // namespace __jni_impl::android::app

#include "Activity.hpp"
#include "../content/Context.hpp"

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
	void VoiceInteractor_Request::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject VoiceInteractor_Request::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject VoiceInteractor_Request::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jstring VoiceInteractor_Request::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractor_Request::onAttached(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractor_Request::onCancel()
	{
		__thiz.callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void VoiceInteractor_Request::onDetached()
	{
		__thiz.callMethod<void>(
			"onDetached",
			"()V"
		);
	}
	jstring VoiceInteractor_Request::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

