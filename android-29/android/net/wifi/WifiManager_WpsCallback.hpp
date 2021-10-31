#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiManager_WpsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiManager_WpsCallback(QAndroidJniObject obj);
		// Constructors
		WifiManager_WpsCallback();
		
		// Methods
		void onFailed(jint arg0);
		void onStarted(jstring arg0);
		void onSucceeded();
	};
} // namespace android::net::wifi

