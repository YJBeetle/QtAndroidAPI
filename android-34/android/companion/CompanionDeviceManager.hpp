#pragma once

#include "./AssociationRequest.def.hpp"
#include "./CompanionDeviceManager_Callback.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
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
	inline jint CompanionDeviceManager::FLAG_CALL_METADATA()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"FLAG_CALL_METADATA"
		);
	}
	inline jint CompanionDeviceManager::RESULT_CANCELED()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"RESULT_CANCELED"
		);
	}
	inline jint CompanionDeviceManager::RESULT_DISCOVERY_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"RESULT_DISCOVERY_TIMEOUT"
		);
	}
	inline jint CompanionDeviceManager::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint CompanionDeviceManager::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"RESULT_OK"
		);
	}
	inline jint CompanionDeviceManager::RESULT_USER_REJECTED()
	{
		return getStaticField<jint>(
			"android.companion.CompanionDeviceManager",
			"RESULT_USER_REJECTED"
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
	inline void CompanionDeviceManager::attachSystemDataTransport(jint arg0, java::io::InputStream arg1, java::io::OutputStream arg2) const
	{
		callMethod<void>(
			"attachSystemDataTransport",
			"(ILjava/io/InputStream;Ljava/io/OutputStream;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::IntentSender CompanionDeviceManager::buildAssociationCancellationIntent() const
	{
		return callObjectMethod(
			"buildAssociationCancellationIntent",
			"()Landroid/content/IntentSender;"
		);
	}
	inline android::content::IntentSender CompanionDeviceManager::buildPermissionTransferUserConsentIntent(jint arg0) const
	{
		return callObjectMethod(
			"buildPermissionTransferUserConsentIntent",
			"(I)Landroid/content/IntentSender;",
			arg0
		);
	}
	inline void CompanionDeviceManager::detachSystemDataTransport(jint arg0) const
	{
		callMethod<void>(
			"detachSystemDataTransport",
			"(I)V",
			arg0
		);
	}
	inline void CompanionDeviceManager::disableSystemDataSyncForTypes(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"disableSystemDataSyncForTypes",
			"(II)V",
			arg0,
			arg1
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
	inline void CompanionDeviceManager::enableSystemDataSyncForTypes(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"enableSystemDataSyncForTypes",
			"(II)V",
			arg0,
			arg1
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
	inline void CompanionDeviceManager::startSystemDataTransfer(jint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"startSystemDataTransfer",
			"(ILjava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0,
			arg1.object(),
			arg2.object()
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
