#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class AssociationInfo;
}
namespace android::content
{
	class IntentSender;
}
class JString;

namespace android::companion
{
	class CompanionDeviceManager_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompanionDeviceManager_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceManager_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CompanionDeviceManager_Callback();
		
		// Methods
		void onAssociationCreated(android::companion::AssociationInfo arg0) const;
		void onAssociationPending(android::content::IntentSender arg0) const;
		void onDeviceFound(android::content::IntentSender arg0) const;
		void onFailure(JString arg0) const;
	};
} // namespace android::companion

