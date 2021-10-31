#include "../content/Intent.hpp"
#include "./Instrumentation_ActivityResult.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1)
		: __JniBaseClass(
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

