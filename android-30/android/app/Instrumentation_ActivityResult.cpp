#include "../content/Intent.hpp"
#include "./Instrumentation_ActivityResult.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1)
		: JObject(
			"android.app.Instrumentation$ActivityResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint Instrumentation_ActivityResult::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	android::content::Intent Instrumentation_ActivityResult::getResultData()
	{
		return callObjectMethod(
			"getResultData",
			"()Landroid/content/Intent;"
		);
	}
} // namespace android::app

