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
		return __thiz.getObjectField(
			"fmtp",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioCodec::rtpmap()
	{
		return __thiz.getObjectField(
			"rtpmap",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioCodec::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	
	AudioCodec::AudioCodec(QAndroidJniObject obj) { __thiz = obj; }
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
	QAndroidJniObject AudioCodec::getCodec(jint arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodec",
			"(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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

