#include "./AudioCodec.hpp"
#include "./AudioGroup.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./AudioStream.hpp"

namespace android::net::rtp
{
	// Fields
	
	AudioStream::AudioStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioStream::AudioStream(java::net::InetAddress &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.AudioStream",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioStream::getCodec()
	{
		return __thiz.callObjectMethod(
			"getCodec",
			"()Landroid/net/rtp/AudioCodec;"
		);
	}
	jint AudioStream::getDtmfType()
	{
		return __thiz.callMethod<jint>(
			"getDtmfType",
			"()I"
		);
	}
	QAndroidJniObject AudioStream::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Landroid/net/rtp/AudioGroup;"
		);
	}
	jboolean AudioStream::isBusy()
	{
		return __thiz.callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	void AudioStream::join(android::net::rtp::AudioGroup arg0)
	{
		__thiz.callMethod<void>(
			"join",
			"(Landroid/net/rtp/AudioGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioStream::setCodec(android::net::rtp::AudioCodec arg0)
	{
		__thiz.callMethod<void>(
			"setCodec",
			"(Landroid/net/rtp/AudioCodec;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioStream::setDtmfType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDtmfType",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

