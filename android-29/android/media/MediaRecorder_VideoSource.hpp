#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaRecorder;
}

namespace __jni_impl::android::media
{
	class MediaRecorder_VideoSource : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMERA();
		static jint DEFAULT();
		static jint SURFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media

#include "./MediaRecorder.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaRecorder_VideoSource::CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"CAMERA"
		);
	}
	jint MediaRecorder_VideoSource::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"DEFAULT"
		);
	}
	jint MediaRecorder_VideoSource::SURFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"SURFACE"
		);
	}
	
	// Constructors
	void MediaRecorder_VideoSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRecorder$VideoSource",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRecorder_VideoSource : public __jni_impl::android::media::MediaRecorder_VideoSource
	{
	public:
		MediaRecorder_VideoSource(QAndroidJniObject obj) { __thiz = obj; }
		MediaRecorder_VideoSource()
		{
			__constructor();
		}
	};
} // namespace android::media

