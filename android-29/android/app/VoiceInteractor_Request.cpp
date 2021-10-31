#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor_Request::VoiceInteractor_Request(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void VoiceInteractor_Request::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject VoiceInteractor_Request::getActivity()
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject VoiceInteractor_Request::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jstring VoiceInteractor_Request::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractor_Request::onAttached(android::app::Activity arg0)
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void VoiceInteractor_Request::onCancel()
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void VoiceInteractor_Request::onDetached()
	{
		callMethod<void>(
			"onDetached",
			"()V"
		);
	}
	jstring VoiceInteractor_Request::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app

