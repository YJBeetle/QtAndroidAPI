#include "./AssociationRequest.hpp"
#include "./CompanionDeviceManager_Callback.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Handler.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceManager.hpp"

namespace android::companion
{
	// Fields
	JString CompanionDeviceManager::EXTRA_DEVICE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	void CompanionDeviceManager::associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Landroid/companion/CompanionDeviceManager$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CompanionDeviceManager::disassociate(JString arg0) const
	{
		callMethod<void>(
			"disassociate",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject CompanionDeviceManager::getAssociations() const
	{
		return callObjectMethod(
			"getAssociations",
			"()Ljava/util/List;"
		);
	}
	jboolean CompanionDeviceManager::hasNotificationAccess(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"hasNotificationAccess",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	void CompanionDeviceManager::requestNotificationAccess(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"requestNotificationAccess",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void CompanionDeviceManager::startObservingDevicePresence(JString arg0) const
	{
		callMethod<void>(
			"startObservingDevicePresence",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CompanionDeviceManager::stopObservingDevicePresence(JString arg0) const
	{
		callMethod<void>(
			"stopObservingDevicePresence",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

