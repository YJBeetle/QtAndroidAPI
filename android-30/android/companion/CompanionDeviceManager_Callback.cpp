#include "../content/IntentSender.hpp"
#include "./CompanionDeviceManager_Callback.hpp"

namespace android::companion
{
	// Fields
	
	// QJniObject forward
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback()
		: __JniBaseClass(
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

