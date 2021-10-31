#include "./MediaRecorder.hpp"
#include "./MediaRecorder_OutputFormat.hpp"

namespace android::media
{
	// Fields
	jint MediaRecorder_OutputFormat::AAC_ADTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AAC_ADTS"
		);
	}
	jint MediaRecorder_OutputFormat::AMR_NB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_NB"
		);
	}
	jint MediaRecorder_OutputFormat::AMR_WB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_WB"
		);
	}
	jint MediaRecorder_OutputFormat::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"DEFAULT"
		);
	}
	jint MediaRecorder_OutputFormat::MPEG_2_TS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_2_TS"
		);
	}
	jint MediaRecorder_OutputFormat::MPEG_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_4"
		);
	}
	jint MediaRecorder_OutputFormat::OGG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"OGG"
		);
	}
	jint MediaRecorder_OutputFormat::RAW_AMR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"RAW_AMR"
		);
	}
	jint MediaRecorder_OutputFormat::THREE_GPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"THREE_GPP"
		);
	}
	jint MediaRecorder_OutputFormat::WEBM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"WEBM"
		);
	}
	
	// QAndroidJniObject forward
	MediaRecorder_OutputFormat::MediaRecorder_OutputFormat(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

