#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_GroupCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_256();
		static jint TKIP();
		static jint WEP104();
		static jint WEP40();
		static jarray strings();
		static jstring varName();
		
		WifiConfiguration_GroupCipher(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_GroupCipher() = default;
		
		// Methods
	};
} // namespace android::net::wifi

