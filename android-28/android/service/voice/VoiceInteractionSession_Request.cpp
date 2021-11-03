#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_Request::VoiceInteractionSession_Request(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VoiceInteractionSession_Request::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	JString VoiceInteractionSession_Request::getCallingPackage()
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	jint VoiceInteractionSession_Request::getCallingUid()
	{
		return callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	android::os::Bundle VoiceInteractionSession_Request::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean VoiceInteractionSession_Request::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	JString VoiceInteractionSession_Request::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::voice

