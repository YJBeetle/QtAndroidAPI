#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
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
	jstring HostNfcFService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HostNfcFService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	HostNfcFService::HostNfcFService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	HostNfcFService::HostNfcFService()
		: android::app::Service(
			"android.nfc.cardemulation.HostNfcFService",
			"()V"
		) {}
	
	// Methods
	JObject HostNfcFService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void HostNfcFService::onDeactivated(jint arg0)
	{
		callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	jbyteArray HostNfcFService::processNfcFPacket(jbyteArray arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"processNfcFPacket",
			"([BLandroid/os/Bundle;)[B",
			arg0,
			arg1.object()
		).object<jbyteArray>();
	}
	void HostNfcFService::sendResponsePacket(jbyteArray arg0)
	{
		callMethod<void>(
			"sendResponsePacket",
			"([B)V",
			arg0
		);
	}
} // namespace android::nfc::cardemulation

