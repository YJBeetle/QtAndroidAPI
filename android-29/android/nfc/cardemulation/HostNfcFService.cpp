#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "./HostNfcFService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jint HostNfcFService::DEACTIVATION_LINK_LOSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostNfcFService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	jstring HostNfcFService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HostNfcFService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	HostNfcFService::HostNfcFService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HostNfcFService::HostNfcFService()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.HostNfcFService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject HostNfcFService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void HostNfcFService::onDeactivated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	jbyteArray HostNfcFService::processNfcFPacket(jbyteArray arg0, android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"processNfcFPacket",
			"([BLandroid/os/Bundle;)[B",
			arg0,
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	void HostNfcFService::sendResponsePacket(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"sendResponsePacket",
			"([B)V",
			arg0
		);
	}
} // namespace android::nfc::cardemulation

