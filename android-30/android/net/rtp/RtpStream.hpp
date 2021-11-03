#pragma once

#include "../../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}

namespace android::net::rtp
{
	class RtpStream : public JObject
	{
	public:
		// Fields
		static jint MODE_NORMAL();
		static jint MODE_RECEIVE_ONLY();
		static jint MODE_SEND_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RtpStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RtpStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void associate(java::net::InetAddress arg0, jint arg1) const;
		java::net::InetAddress getLocalAddress() const;
		jint getLocalPort() const;
		jint getMode() const;
		java::net::InetAddress getRemoteAddress() const;
		jint getRemotePort() const;
		jboolean isBusy() const;
		void release() const;
		void setMode(jint arg0) const;
	};
} // namespace android::net::rtp

