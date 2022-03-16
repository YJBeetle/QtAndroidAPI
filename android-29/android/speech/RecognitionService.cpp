#include "../content/Intent.hpp"
#include "./RecognitionService_Callback.hpp"
#include "../../JString.hpp"
#include "./RecognitionService.hpp"

namespace android::speech
{
	// Fields
	JString RecognitionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString RecognitionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	RecognitionService::RecognitionService()
		: android::app::Service(
			"android.speech.RecognitionService",
			"()V"
		) {}
	
	// Methods
	JObject RecognitionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void RecognitionService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::speech

