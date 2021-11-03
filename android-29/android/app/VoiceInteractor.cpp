#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./VoiceInteractor_Request.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	VoiceInteractor::VoiceInteractor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::VoiceInteractor_Request VoiceInteractor::getActiveRequest(JString arg0)
	{
		return callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			arg0.object<jstring>()
		);
	}
	JArray VoiceInteractor::getActiveRequests()
	{
		return callObjectMethod(
			"getActiveRequests",
			"()[Landroid/app/VoiceInteractor$Request;"
		);
	}
	jboolean VoiceInteractor::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void VoiceInteractor::notifyDirectActionsChanged()
	{
		callMethod<void>(
			"notifyDirectActionsChanged",
			"()V"
		);
	}
	jboolean VoiceInteractor::registerOnDestroyedCallback(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"registerOnDestroyedCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0)
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;)Z",
			arg0.object()
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JBooleanArray VoiceInteractor::supportsCommands(JArray arg0)
	{
		return callObjectMethod(
			"supportsCommands",
			"([Ljava/lang/String;)[Z",
			arg0.object<jarray>()
		);
	}
	jboolean VoiceInteractor::unregisterOnDestroyedCallback(JObject arg0)
	{
		return callMethod<jboolean>(
			"unregisterOnDestroyedCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
} // namespace android::app

