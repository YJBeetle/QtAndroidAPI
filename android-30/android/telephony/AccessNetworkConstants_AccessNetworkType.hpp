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
		static jint NGRAN();
		static jint UNKNOWN();
		static jint UTRAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants_AccessNetworkType(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants_AccessNetworkType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

