#pragma once

#include "../../../JByteArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./HostNfcFService.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	inline jint HostNfcFService::DEACTIVATION_LINK_LOSS()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostNfcFService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	inline JString HostNfcFService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString HostNfcFService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline HostNfcFService::HostNfcFService()
		: android::app::Service(
			"android.nfc.cardemulation.HostNfcFService",
			"()V"
		) {}
	
	// Methods
	inline JObject HostNfcFService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void HostNfcFService::onDeactivated(jint arg0) const
	{
		callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	inline JByteArray HostNfcFService::processNfcFPacket(JByteArray arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"processNfcFPacket",
			"([BLandroid/os/Bundle;)[B",
			arg0.object<jbyteArray>(),
			arg1.object()
		);
	}
	inline void HostNfcFService::sendResponsePacket(JByteArray arg0) const
	{
		callMethod<void>(
			"sendResponsePacket",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc::cardemulation;
#endif
