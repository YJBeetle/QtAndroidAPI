#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::net
{
	class NetworkInfo_DetailedState : public java::lang::Enum
	{
	public:
		// Fields
		static android::net::NetworkInfo_DetailedState AUTHENTICATING();
		static android::net::NetworkInfo_DetailedState BLOCKED();
		static android::net::NetworkInfo_DetailedState CAPTIVE_PORTAL_CHECK();
		static android::net::NetworkInfo_DetailedState CONNECTED();
		static android::net::NetworkInfo_DetailedState CONNECTING();
		static android::net::NetworkInfo_DetailedState DISCONNECTED();
		static android::net::NetworkInfo_DetailedState DISCONNECTING();
		static android::net::NetworkInfo_DetailedState FAILED();
		static android::net::NetworkInfo_DetailedState IDLE();
		static android::net::NetworkInfo_DetailedState OBTAINING_IPADDR();
		static android::net::NetworkInfo_DetailedState SCANNING();
		static android::net::NetworkInfo_DetailedState SUSPENDED();
		static android::net::NetworkInfo_DetailedState VERIFYING_POOR_LINK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInfo_DetailedState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo_DetailedState(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::net

