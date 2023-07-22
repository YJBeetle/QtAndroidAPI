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
		static JString EXTRA_ASSOCIATION();
		static JString EXTRA_DEVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2) const;
		void associate(android::companion::AssociationRequest arg0, JObject arg1, android::companion::CompanionDeviceManager_Callback arg2) const;
		void disassociate(jint arg0) const;
		void disassociate(JString arg0) const;
		JObject getAssociations() const;
		JObject getMyAssociations() const;
		jboolean hasNotificationAccess(android::content::ComponentName arg0) const;
		void requestNotificationAccess(android::content::ComponentName arg0) const;
		void startObservingDevicePresence(JString arg0) const;
		void stopObservingDevicePresence(JString arg0) const;
	};
} // namespace android::companion

