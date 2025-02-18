#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::net
{
	class NetworkInfo_State : public java::lang::Enum
	{
	public:
		// Fields
		static android::net::NetworkInfo_State CONNECTED();
		static android::net::NetworkInfo_State CONNECTING();
		static android::net::NetworkInfo_State DISCONNECTED();
		static android::net::NetworkInfo_State DISCONNECTING();
		static android::net::NetworkInfo_State SUSPENDED();
		static android::net::NetworkInfo_State UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkInfo_State(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo_State(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_State valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::net

