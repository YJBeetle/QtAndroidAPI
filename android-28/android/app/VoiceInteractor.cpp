#include "./VoiceInteractor_Request.hpp"
#include "./VoiceInteractor.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor::VoiceInteractor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::app::VoiceInteractor_Request VoiceInteractor::getActiveRequest(jstring arg0)
	{
		return callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			arg0
		);
	}
	jarray VoiceInteractor::getActiveRequests()
	{
		return callObjectMethod(
			"getActiveRequests",
			"()[Landroid/app/VoiceInteractor$Request;"
		).object<jarray>();
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0)
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;)Z",
			arg0.object()
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jbooleanArray VoiceInteractor::supportsCommands(jarray arg0)
	{
		return callObjectMethod(
			"supportsCommands",
			"([Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
} // namespace android::app

