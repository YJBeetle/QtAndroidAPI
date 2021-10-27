#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public __JniBaseClass
	{
	public:
		// Fields
		static jint LEAP();
		static jint OPEN();
		static jint SHARED();
		static jarray strings();
		static jstring varName();
		
		WifiConfiguration_AuthAlgorithm(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_AuthAlgorithm() = default;
		
		// Methods
	};
} // namespace android::net::wifi

