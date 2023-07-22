#pragma once

#include "./AssociationRequest.def.hpp"
#include "./CompanionDeviceManager_Callback.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceManager.def.hpp"

namespace android::companion
{
	// Fields
	inline JString CompanionDeviceManager::EXTRA_ASSOCIATION()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_ASSOCIATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CompanionDeviceManager::EXTRA_DEVICE()
	{
		return getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void CompanionDeviceManager::associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Landroid/companion/CompanionDeviceManager$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CompanionDeviceManager::associate(android::companion::AssociationRequest arg0, JObject arg1, android::companion::CompanionDeviceManager_Callback arg2) const
	{
		callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Ljava/util/concurrent/Executor;Landroid/companion/CompanionDeviceManager$Callback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CompanionDeviceManager::disassociate(jint arg0) const
	{
		callMethod<void>(
			"disassociate",
			"(I)V",
			arg0
		);
	}
	inline void CompanionDeviceManager::disassociate(JString arg0) const
	{
		callMethod<void>(
			"disassociate",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject CompanionDeviceManager::getAssociations() const
	{
		return callObjectMethod(
			"getAssociations",
			"()Ljava/util/List;"
		);
	}
	inline JObject CompanionDeviceManager::getMyAssociations() const
	{
		return callObjectMethod(
			"getMyAssociations",
			"()Ljava/util/List;"
		);
	}
	inline jboolean CompanionDeviceManager::hasNotificationAccess(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"hasNotificationAccess",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline void CompanionDeviceManager::requestNotificationAccess(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"requestNotificationAccess",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceManager::startObservingDevicePresence(JString arg0) const
	{
		callMethod<void>(
			"startObservingDevicePresence",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CompanionDeviceManager::stopObservingDevicePresence(JString arg0) const
	{
		callMethod<void>(
			"stopObservingDevicePresence",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
