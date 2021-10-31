#include "./MediaCodec_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaCodec_MetricsConstants::CODEC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"CODEC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaCodec_MetricsConstants::MediaCodec_MetricsConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

