#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::companion
{
	class AssociationRequest;
}
namespace android::companion
{
	class CompanionDeviceManager_Callback;
}
namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Handler;
}

namespace android::companion
{
	class CompanionDeviceManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_DEVICE();
		
		CompanionDeviceManager(QAndroidJniObject obj);
		// Constructors
		CompanionDeviceManager() = default;
		
		// Methods
		void associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2);
		void disassociate(jstring arg0);
		void disassociate(const QString &arg0);
		QAndroidJniObject getAssociations();
		jboolean hasNotificationAccess(android::content::ComponentName arg0);
		void requestNotificationAccess(android::content::ComponentName arg0);
	};
} // namespace android::companion

