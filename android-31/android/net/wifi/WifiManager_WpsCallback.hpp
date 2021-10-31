#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiManager_WpsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_WpsCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_WpsCallback(QAndroidJniObject obj);
		
		// Constructors
		WifiManager_WpsCallback();
		
		// Methods
		void onFailed(jint arg0);
		void onStarted(jstring arg0);
		void onSucceeded();
	};
} // namespace android::net::wifi

