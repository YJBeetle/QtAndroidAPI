#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaMuxer_OutputFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint MUXER_OUTPUT_3GPP();
		static jint MUXER_OUTPUT_HEIF();
		static jint MUXER_OUTPUT_MPEG_4();
		static jint MUXER_OUTPUT_OGG();
		static jint MUXER_OUTPUT_WEBM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
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
	
	// Constructors
	void MediaMuxer_OutputFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer$OutputFormat",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMuxer_OutputFormat : public __jni_impl::android::media::MediaMuxer_OutputFormat
	{
	public:
		MediaMuxer_OutputFormat(QAndroidJniObject obj) { __thiz = obj; }
		MediaMuxer_OutputFormat()
		{
			__constructor();
		}
	};
} // namespace android::media

