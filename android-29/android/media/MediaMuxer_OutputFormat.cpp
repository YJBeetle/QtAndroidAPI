#include "./MediaMuxer_OutputFormat.hpp"

namespace android::media
{
	// Fields
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_3GPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_3GPP"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_HEIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_HEIF"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_MPEG_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_MPEG_4"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_OGG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_OGG"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_WEBM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_WEBM"
		);
	}
	
	// QAndroidJniObject forward
	MediaMuxer_OutputFormat::MediaMuxer_OutputFormat(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

