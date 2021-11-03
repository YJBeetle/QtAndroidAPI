#include "../content/Context.hpp"
#include "../content/ContextParams.hpp"
#include "../content/Intent.hpp"
#include "./RecognitionService_Callback.hpp"
#include "./RecognitionService.hpp"

namespace android::speech
{
	// Fields
	jstring RecognitionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognitionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	RecognitionService::RecognitionService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	RecognitionService::RecognitionService()
		: android::app::Service(
			"android.speech.RecognitionService",
			"()V"
		) {}
	
	// Methods
	android::content::Context RecognitionService::createContext(android::content::ContextParams arg0)
	{
		return callObjectMethod(
			"createContext",
			"(Landroid/content/ContextParams;)Landroid/content/Context;",
			arg0.object()
		);
	}
	JObject RecognitionService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void RecognitionService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::speech

