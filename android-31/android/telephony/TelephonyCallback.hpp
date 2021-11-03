#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class TelephonyCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyCallback(QAndroidJniObject obj);
		
		// Constructors
		TelephonyCallback();
		
		// Methods
	};
} // namespace android::telephony

