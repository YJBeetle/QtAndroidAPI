#pragma once

#include "./RtpStream.hpp"

namespace android::net::rtp
{
	class AudioCodec;
}
namespace android::net::rtp
{
	class AudioGroup;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net::rtp
{
	class AudioStream : public android::net::rtp::RtpStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioStream(const char *className, const char *sig, Ts...agv) : android::net::rtp::RtpStream(className, sig, std::forward<Ts>(agv)...) {}
		AudioStream(QAndroidJniObject obj) : android::net::rtp::RtpStream(obj) {}
		
		// Constructors
		AudioStream(java::net::InetAddress arg0);
		
		// Methods
		android::net::rtp::AudioCodec getCodec() const;
		jint getDtmfType() const;
		android::net::rtp::AudioGroup getGroup() const;
		jboolean isBusy() const;
		void join(android::net::rtp::AudioGroup arg0) const;
		void setCodec(android::net::rtp::AudioCodec arg0) const;
		void setDtmfType(jint arg0) const;
	};
} // namespace android::net::rtp

