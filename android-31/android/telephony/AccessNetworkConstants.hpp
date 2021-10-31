#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class AccessNetworkConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint TRANSPORT_TYPE_WLAN();
		static jint TRANSPORT_TYPE_WWAN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessNetworkConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessNetworkConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

