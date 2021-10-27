#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRecorder;
}

namespace __jni_impl::android::media
{
	class MediaRecorder_VideoEncoder : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT();
		static jint H263();
		static jint H264();
		static jint HEVC();
		static jint MPEG_4_SP();
		static jint VP8();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media

#include "./MediaRecorder.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder_VideoEncoder::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"DEFAULT"
		);
	}
	jint MediaRecorder_VideoEncoder::H263()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H263"
		);
	}
	jint MediaRecorder_VideoEncoder::H264()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H264"
		);
	}
	jint MediaRecorder_VideoEncoder::HEVC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"HEVC"
		);
	}
	jint MediaRecorder_VideoEncoder::MPEG_4_SP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"MPEG_4_SP"
		);
	}
	jint MediaRecorder_VideoEncoder::VP8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"VP8"
		);
	}
	
	// Constructors
	void MediaRecorder_VideoEncoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$VideoEncoder",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_VideoEncoder : public __jni_impl::android::media::MediaRecorder_VideoEncoder
	{
	public:
		MediaRecorder_VideoEncoder(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_VideoEncoder()
		{
			__constructor();
		}
	};
} // namespace android::media

