#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::companion
{
	class CompanionDeviceManager : public JObject
	{
	public:
		// Fields
		static JString EXTRA_DEVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2);
		void disassociate(JString arg0);
		JObject getAssociations();
		jboolean hasNotificationAccess(android::content::ComponentName arg0);
		void requestNotificationAccess(android::content::ComponentName arg0);
	};
} // namespace android::companion

