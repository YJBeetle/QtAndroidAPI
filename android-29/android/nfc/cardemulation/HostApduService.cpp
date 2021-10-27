#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "./HostApduService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jint HostApduService::DEACTIVATION_DESELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_DESELECTED"
		);
	}
	jint HostApduService::DEACTIVATION_LINK_LOSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	jstring HostApduService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HostApduService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	HostApduService::HostApduService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HostApduService::HostApduService()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.HostApduService",
			"()V"
		);
	}
	
	// Methods
	void HostApduService::notifyUnhandled()
	{
		__thiz.callMethod<void>(
			"notifyUnhandled",
			"()V"
		);
	}
	QAndroidJniObject HostApduService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void HostApduService::onDeactivated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	jbyteArray HostApduService::processCommandApdu(jbyteArray arg0, android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"processCommandApdu",
			"([BLandroid/os/Bundle;)[B",
			arg0,
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	void HostApduService::sendResponseApdu(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"sendResponseApdu",
			"([B)V",
			arg0
		);
	}
} // namespace android::nfc::cardemulation

