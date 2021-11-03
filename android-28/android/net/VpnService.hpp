#pragma once

#include "../app/Service.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
class JString;
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class Socket;
}

namespace android::net
{
	class VpnService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA_SUPPORTS_ALWAYS_ON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VpnService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		VpnService(QAndroidJniObject obj);
		
		// Constructors
		VpnService();
		
		// Methods
		static android::content::Intent prepare(android::content::Context arg0);
		JObject onBind(android::content::Intent arg0) const;
		void onRevoke() const;
		jboolean protect(jint arg0) const;
		jboolean protect(java::net::DatagramSocket arg0) const;
		jboolean protect(java::net::Socket arg0) const;
		jboolean setUnderlyingNetworks(JArray arg0) const;
	};
} // namespace android::net

