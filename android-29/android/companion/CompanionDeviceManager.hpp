#pragma once

#ifndef ANDROID_COMPANION_COMPANIONDEVICEMANAGER
#define ANDROID_COMPANION_COMPANIONDEVICEMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::companion
{
	class AssociationRequest;
}
namespace __jni_impl::android::companion
{
	class CompanionDeviceManager_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::companion
{
	class CompanionDeviceManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_DEVICE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void associate(__jni_impl::android::companion::AssociationRequest arg0, __jni_impl::android::companion::CompanionDeviceManager_Callback arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject getAssociations();
		void disassociate(jstring arg0);
		void requestNotificationAccess(__jni_impl::android::content::ComponentName arg0);
		jboolean hasNotificationAccess(__jni_impl::android::content::ComponentName arg0);
	};
} // namespace __jni_impl::android::companion

#include "AssociationRequest.hpp"
#include "CompanionDeviceManager_Callback.hpp"
#include "../os/Handler.hpp"
#include "../content/ComponentName.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	QAndroidJniObject CompanionDeviceManager::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.CompanionDeviceManager",
			"EXTRA_DEVICE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void CompanionDeviceManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.CompanionDeviceManager",
			"(V)V");
	}
	
	// Methods
	void CompanionDeviceManager::associate(__jni_impl::android::companion::AssociationRequest arg0, __jni_impl::android::companion::CompanionDeviceManager_Callback arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"associate",
			"(Landroid/companion/AssociationRequest;Landroid/companion/CompanionDeviceManager$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject CompanionDeviceManager::getAssociations()
	{
		return __thiz.callObjectMethod(
			"getAssociations",
			"()Ljava/util/List;");
	}
	void CompanionDeviceManager::disassociate(jstring arg0)
	{
		__thiz.callMethod<void>(
			"disassociate",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CompanionDeviceManager::requestNotificationAccess(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"requestNotificationAccess",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object());
	}
	jboolean CompanionDeviceManager::hasNotificationAccess(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasNotificationAccess",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class CompanionDeviceManager : public __jni_impl::android::companion::CompanionDeviceManager
	{
	public:
		CompanionDeviceManager(QAndroidJniObject obj) { __thiz = obj; }
		CompanionDeviceManager()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_COMPANIONDEVICEMANAGER

