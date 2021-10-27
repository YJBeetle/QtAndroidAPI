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
		
		CompanionDeviceManager_Callback(QAndroidJniObject obj);
		// Constructors
		CompanionDeviceManager_Callback();
		
		// Methods
		void onDeviceFound(android::content::IntentSender arg0);
		void onFailure(jstring arg0);
		void onFailure(const QString &arg0);
	};
} // namespace android::companion

