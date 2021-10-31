#include "../content/Intent.hpp"
#include "./Instrumentation_ActivityResult.hpp"

namespace android::app
{
	// Fields
	
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Instrumentation_ActivityResult::Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint Instrumentation_ActivityResult::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	QAndroidJniObject Instrumentation_ActivityResult::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Landroid/content/Intent;"
		);
	}
} // namespace android::app

