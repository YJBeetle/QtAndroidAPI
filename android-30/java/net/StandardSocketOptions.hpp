#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class StandardSocketOptions : public JObject
	{
	public:
		// Fields
		static JObject IP_MULTICAST_IF();
		static JObject IP_MULTICAST_LOOP();
		static JObject IP_MULTICAST_TTL();
		static JObject IP_TOS();
		static JObject SO_BROADCAST();
		static JObject SO_KEEPALIVE();
		static JObject SO_LINGER();
		static JObject SO_RCVBUF();
		static JObject SO_REUSEADDR();
		static JObject SO_REUSEPORT();
		static JObject SO_SNDBUF();
		static JObject TCP_NODELAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardSocketOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StandardSocketOptions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::net

