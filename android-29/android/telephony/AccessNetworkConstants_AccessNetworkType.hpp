#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class AccessNetworkConstants_AccessNetworkType : public __JniBaseClass
	{
	public:
		// Fields
		static jint CDMA2000();
		static jint EUTRAN();
		static jint GERAN();
		static jint IWLAN();
		static jint UNKNOWN();
		static jint UTRAN();
		
		AccessNetworkConstants_AccessNetworkType(QAndroidJniObject obj);
		// Constructors
		AccessNetworkConstants_AccessNetworkType() = default;
		
		// Methods
	};
} // namespace android::telephony

