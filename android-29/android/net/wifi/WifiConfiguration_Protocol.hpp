#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_Protocol : public __JniBaseClass
	{
	public:
		// Fields
		static jint RSN();
		static jint WPA();
		static jarray strings();
		static jstring varName();
		
		WifiConfiguration_Protocol(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_Protocol() = default;
		
		// Methods
	};
} // namespace android::net::wifi

