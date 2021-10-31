#include "./MediaCodec_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaCodec_MetricsConstants::CODEC()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"CODEC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::MODE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"MODE_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::SECURE()
	{
		return getStaticObjectField(
			"android.media.MediaCodec$MetricsConstants",
			"SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec_MetricsConstants::WIDTH()
	{
		return getStaticObjectField(
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

