#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyCallback(QJniObject obj);
		
		// Constructors
		TelephonyCallback();
		
		// Methods
	};
} // namespace android::telephony

