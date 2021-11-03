#include "../content/IntentSender.hpp"
#include "./CompanionDeviceManager_Callback.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback()
		: JObject(
			"android.companion.CompanionDeviceManager$Callback",
			"()V"
		) {}
	
	// Methods
	void CompanionDeviceManager_Callback::onDeviceFound(android::content::IntentSender arg0)
	{
		callMethod<void>(
			"onDeviceFound",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	void CompanionDeviceManager_Callback::onFailure(jstring arg0)
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::companion

