#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AccessNetworkConstants : public JObject
	{
	public:
		// Fields
		static jint TRANSPORT_TYPE_WLAN();
		static jint TRANSPORT_TYPE_WWAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

