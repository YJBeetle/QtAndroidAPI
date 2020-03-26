#pragma once

#ifndef ANDROID_MEDIA_AUDIOTIMESTAMP
#define ANDROID_MEDIA_AUDIOTIMESTAMP

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioTimestamp : public __JniBaseClass
	{
	public:
		// Fields
		static jint TIMEBASE_BOOTTIME();
		static jint TIMEBASE_MONOTONIC();
		jlong framePosition();
		jlong nanoTime();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint AudioTimestamp::TIMEBASE_BOOTTIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_BOOTTIME"
		);
	}
	jint AudioTimestamp::TIMEBASE_MONOTONIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioTimestamp",
			"TIMEBASE_MONOTONIC"
		);
	}
	jlong AudioTimestamp::framePosition()
	{
		return __thiz.getField<jlong>(
			"framePosition"
		);
	}
	jlong AudioTimestamp::nanoTime()
	{
		return __thiz.getField<jlong>(
			"nanoTime"
		);
	}
	
	// Constructors
	void AudioTimestamp::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTimestamp",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioTimestamp : public __jni_impl::android::media::AudioTimestamp
	{
	public:
		AudioTimestamp(QAndroidJniObject obj) { __thiz = obj; }
		AudioTimestamp()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOTIMESTAMP

