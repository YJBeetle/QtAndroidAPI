#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_Request::VoiceInteractor_Request(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void VoiceInteractor_Request::onAttached(android::app::Activity arg0)
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
} // namespace android::app

