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
		
		StandardSocketOptions(QAndroidJniObject obj);
		// Constructors
		StandardSocketOptions() = default;
		
		// Methods
	};
} // namespace java::net

