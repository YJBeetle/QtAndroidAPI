#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_PairwiseCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_256();
		static jint NONE();
		static jint TKIP();
		static jarray strings();
		static jstring varName();
		
		WifiConfiguration_PairwiseCipher(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_PairwiseCipher() = default;
		
		// Methods
	};
} // namespace android::net::wifi

