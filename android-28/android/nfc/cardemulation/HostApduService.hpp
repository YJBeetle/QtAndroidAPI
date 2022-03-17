#pragma once

#include "../../../JByteArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./HostApduService.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	inline jint HostApduService::DEACTIVATION_DESELECTED()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_DESELECTED"
		);
	}
	inline jint HostApduService::DEACTIVATION_LINK_LOSS()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	inline JString HostApduService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString HostApduService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline HostApduService::HostApduService()
		: android::app::Service(
			"android.nfc.cardemulation.HostApduService",
			"()V"
		) {}
	
	// Methods
	inline void HostApduService::notifyUnhandled() const
	{
		callMethod<void>(
			"notifyUnhandled",
			"()V"
		);
	}
	inline JObject HostApduService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void HostApduService::onDeactivated(jint arg0) const
	{
		callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	inline JByteArray HostApduService::processCommandApdu(JByteArray arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"processCommandApdu",
			"([BLandroid/os/Bundle;)[B",
			arg0.object<jbyteArray>(),
			arg1.object()
		);
	}
	inline void HostApduService::sendResponseApdu(JByteArray arg0) const
	{
		callMethod<void>(
			"sendResponseApdu",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

