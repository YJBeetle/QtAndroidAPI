#include "../../../JByteArray.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./HostNfcFService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jint HostNfcFService::DEACTIVATION_LINK_LOSS()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostNfcFService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	JString HostNfcFService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString HostNfcFService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	HostNfcFService::HostNfcFService()
		: android::app::Service(
			"android.nfc.cardemulation.HostNfcFService",
			"()V"
		) {}
	
	// Methods
	JObject HostNfcFService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void HostNfcFService::onDeactivated(jint arg0) const
	{
		callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	JByteArray HostNfcFService::processNfcFPacket(JByteArray arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"processNfcFPacket",
			"([BLandroid/os/Bundle;)[B",
			arg0.object<jbyteArray>(),
			arg1.object()
		);
	}
	void HostNfcFService::sendResponsePacket(JByteArray arg0) const
	{
		callMethod<void>(
			"sendResponsePacket",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::cardemulation

