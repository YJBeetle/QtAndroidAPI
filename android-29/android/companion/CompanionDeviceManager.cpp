#include "./AssociationRequest.hpp"
#include "./CompanionDeviceManager_Callback.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Handler.hpp"
#include "./CompanionDeviceManager.hpp"

namespace android::companion
{
	// Fields
	jstring CompanionDeviceManager::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	CompanionDeviceManager::CompanionDeviceManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void CompanionDeviceManager::associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Landroid/companion/CompanionDeviceManager$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CompanionDeviceManager::disassociate(jstring arg0)
	{
		__thiz.callMethod<void>(
			"disassociate",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject CompanionDeviceManager::getAssociations()
	{
		return __thiz.callObjectMethod(
			"getAssociations",
			"()Ljava/util/List;"
		);
	}
	jboolean CompanionDeviceManager::hasNotificationAccess(android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNotificationAccess",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object()
		);
	}
	void CompanionDeviceManager::requestNotificationAccess(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"requestNotificationAccess",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::companion

