#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::net
{
	class StandardSocketOptions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject IP_MULTICAST_IF();
		static QAndroidJniObject IP_MULTICAST_LOOP();
		static QAndroidJniObject IP_MULTICAST_TTL();
		static QAndroidJniObject IP_TOS();
		static QAndroidJniObject SO_BROADCAST();
		static QAndroidJniObject SO_KEEPALIVE();
		static QAndroidJniObject SO_LINGER();
		static QAndroidJniObject SO_RCVBUF();
		static QAndroidJniObject SO_REUSEADDR();
		static QAndroidJniObject SO_REUSEPORT();
		static QAndroidJniObject SO_SNDBUF();
		static QAndroidJniObject TCP_NODELAY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardSocketOptions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardSocketOptions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::net

