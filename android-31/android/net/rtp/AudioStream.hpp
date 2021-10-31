#pragma once

#include "../../../__JniBaseClass.hpp"
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
		AudioStream(QAndroidJniObject obj);
		
		// Constructors
		AudioStream(java::net::InetAddress arg0);
		
		// Methods
		android::net::rtp::AudioCodec getCodec();
		jint getDtmfType();
		android::net::rtp::AudioGroup getGroup();
		jboolean isBusy();
		void join(android::net::rtp::AudioGroup arg0);
		void setCodec(android::net::rtp::AudioCodec arg0);
		void setDtmfType(jint arg0);
	};
} // namespace android::net::rtp

