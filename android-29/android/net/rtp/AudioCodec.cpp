#include "./AudioCodec.hpp"

namespace android::net::rtp
{
	// Fields
	QAndroidJniObject AudioCodec::AMR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"AMR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	QAndroidJniObject AudioCodec::GSM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	QAndroidJniObject AudioCodec::GSM_EFR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM_EFR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	QAndroidJniObject AudioCodec::PCMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMA",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	QAndroidJniObject AudioCodec::PCMU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMU",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	jstring AudioCodec::fmtp()
	{
		return getObjectField(
			"fmtp",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioCodec::rtpmap()
	{
		return getObjectField(
			"rtpmap",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioCodec::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QAndroidJniObject forward
	AudioCodec::AudioCodec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AudioCodec::getCodec(jint arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodec",
			"(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;",
			arg0,
			arg1,
			arg2
		);
	}
	jarray AudioCodec::getCodecs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodecs",
			"()[Landroid/net/rtp/AudioCodec;"
		).object<jarray>();
	}
} // namespace android::net::rtp

