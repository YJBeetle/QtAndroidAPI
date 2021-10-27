#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_Status : public __JniBaseClass
	{
	public:
		// Fields
		static jint CURRENT();
		static jint DISABLED();
		static jint ENABLED();
		static jarray strings();
		
		WifiConfiguration_Status(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_Status() = default;
		
		// Methods
	};
} // namespace android::net::wifi

