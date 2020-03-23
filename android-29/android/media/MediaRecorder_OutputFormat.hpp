#pragma once

#ifndef ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT
#define ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRecorder;
}

namespace __jni_impl::android::media
{
	class MediaRecorder_OutputFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint AAC_ADTS();
		static jint AMR_NB();
		static jint AMR_WB();
		static jint DEFAULT();
		static jint MPEG_2_TS();
		static jint MPEG_4();
		static jint OGG();
		static jint RAW_AMR();
		static jint THREE_GPP();
		static jint WEBM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media

#include "MediaRecorder.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder_OutputFormat::AAC_ADTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AAC_ADTS");
	}
	jint MediaRecorder_OutputFormat::AMR_NB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_NB");
	}
	jint MediaRecorder_OutputFormat::AMR_WB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_WB");
	}
	jint MediaRecorder_OutputFormat::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"DEFAULT");
	}
	jint MediaRecorder_OutputFormat::MPEG_2_TS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_2_TS");
	}
	jint MediaRecorder_OutputFormat::MPEG_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_4");
	}
	jint MediaRecorder_OutputFormat::OGG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"OGG");
	}
	jint MediaRecorder_OutputFormat::RAW_AMR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"RAW_AMR");
	}
	jint MediaRecorder_OutputFormat::THREE_GPP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"THREE_GPP");
	}
	jint MediaRecorder_OutputFormat::WEBM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"WEBM");
	}
	
	// Constructors
	void MediaRecorder_OutputFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$OutputFormat",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_OutputFormat : public __jni_impl::android::media::MediaRecorder_OutputFormat
	{
	public:
		MediaRecorder_OutputFormat(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_OutputFormat()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIARECORDER_OUTPUTFORMAT

