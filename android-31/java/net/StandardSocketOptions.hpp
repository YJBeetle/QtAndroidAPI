#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::net
{
	class StandardSocketOptions : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass IP_MULTICAST_IF();
		static __JniBaseClass IP_MULTICAST_LOOP();
		static __JniBaseClass IP_MULTICAST_TTL();
		static __JniBaseClass IP_TOS();
		static __JniBaseClass SO_BROADCAST();
		static __JniBaseClass SO_KEEPALIVE();
		static __JniBaseClass SO_LINGER();
		static __JniBaseClass SO_RCVBUF();
		static __JniBaseClass SO_REUSEADDR();
		static __JniBaseClass SO_REUSEPORT();
		static __JniBaseClass SO_SNDBUF();
		static __JniBaseClass TCP_NODELAY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardSocketOptions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardSocketOptions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::net

