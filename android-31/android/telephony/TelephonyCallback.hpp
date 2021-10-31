#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyCallback(QAndroidJniObject obj);
		
		// Constructors
		TelephonyCallback();
		
		// Methods
	};
} // namespace android::telephony

