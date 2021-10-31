#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}

namespace android::net::rtp
{
	class RtpStream : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_NORMAL();
		static jint MODE_RECEIVE_ONLY();
		static jint MODE_SEND_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RtpStream(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RtpStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void associate(java::net::InetAddress arg0, jint arg1);
		java::net::InetAddress getLocalAddress();
		jint getLocalPort();
		jint getMode();
		java::net::InetAddress getRemoteAddress();
		jint getRemotePort();
		jboolean isBusy();
		void release();
		void setMode(jint arg0);
	};
} // namespace android::net::rtp
