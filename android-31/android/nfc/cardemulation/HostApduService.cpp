#include "../../../JByteArray.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./HostApduService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jint HostApduService::DEACTIVATION_DESELECTED()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_DESELECTED"
		);
	}
	jint HostApduService::DEACTIVATION_LINK_LOSS()
	{
		return getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	JString HostApduService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString HostApduService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	HostApduService::HostApduService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	HostApduService::HostApduService()
		: android::app::Service(
			"android.nfc.cardemulation.HostApduService",
			"()V"
		) {}
	
	// Methods
	void HostApduService::notifyUnhandled()
	{
		callMethod<void>(
			"notifyUnhandled",
			"()V"
		);
	}
	JObject HostApduService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void HostApduService::onDeactivated(jint arg0)
	{
		callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	JByteArray HostApduService::processCommandApdu(JByteArray arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"processCommandApdu",
			"([BLandroid/os/Bundle;)[B",
			arg0.object<jbyteArray>(),
			arg1.object()
		);
	}
	void HostApduService::sendResponseApdu(JByteArray arg0)
	{
		callMethod<void>(
			"sendResponseApdu",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::nfc::cardemulation

