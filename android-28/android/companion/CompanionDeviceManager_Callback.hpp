#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentSender;
}

namespace android::companion
{
	class CompanionDeviceManager_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceManager_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceManager_Callback(QJniObject obj);
		
		// Constructors
		CompanionDeviceManager_Callback();
		
		// Methods
		void onDeviceFound(android::content::IntentSender arg0);
		void onFailure(jstring arg0);
	};
} // namespace android::companion

