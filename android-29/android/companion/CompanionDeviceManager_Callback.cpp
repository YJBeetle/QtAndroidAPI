#include "../content/IntentSender.hpp"
#include "./CompanionDeviceManager_Callback.hpp"

namespace android::companion
{
	// Fields
	
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.companion.CompanionDeviceManager$Callback",
			"()V"
		);
	}
	
	// Methods
	void CompanionDeviceManager_Callback::onDeviceFound(android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"onDeviceFound",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
	void CompanionDeviceManager_Callback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::companion

