#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_Request::VoiceInteractionSession_Request(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void VoiceInteractionSession_Request::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jstring VoiceInteractionSession_Request::getCallingPackage()
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring VoiceInteractionSession_Request::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::voice

