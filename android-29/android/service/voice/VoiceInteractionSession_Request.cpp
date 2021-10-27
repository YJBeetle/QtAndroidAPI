#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_Request::VoiceInteractionSession_Request(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void VoiceInteractionSession_Request::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jstring VoiceInteractionSession_Request::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoiceInteractionSession_Request::getCallingUid()
	{
		return __thiz.callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractionSession_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean VoiceInteractionSession_Request::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jstring VoiceInteractionSession_Request::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::voice

