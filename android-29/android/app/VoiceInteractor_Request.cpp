#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor_Request::VoiceInteractor_Request(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VoiceInteractor_Request::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::app::Activity VoiceInteractor_Request::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::content::Context VoiceInteractor_Request::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JString VoiceInteractor_Request::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	void VoiceInteractor_Request::onAttached(android::app::Activity arg0) const
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void VoiceInteractor_Request::onCancel() const
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void VoiceInteractor_Request::onDetached() const
	{
		callMethod<void>(
			"onDetached",
			"()V"
		);
	}
	JString VoiceInteractor_Request::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app

