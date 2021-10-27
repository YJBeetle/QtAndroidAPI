#include "../../content/Intent.hpp"
#include "./OffHostApduService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	jstring OffHostApduService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OffHostApduService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	OffHostApduService::OffHostApduService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OffHostApduService::OffHostApduService()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.OffHostApduService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject OffHostApduService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::nfc::cardemulation

