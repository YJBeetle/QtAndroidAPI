#pragma once

#ifndef ANDROID_MEDIA_VOLUMESHAPER
#define ANDROID_MEDIA_VOLUMESHAPER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration;
}
namespace __jni_impl::android::media
{
	class VolumeShaper_Operation;
}

namespace __jni_impl::android::media
{
	class VolumeShaper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void replace(__jni_impl::android::media::VolumeShaper_Configuration arg0, __jni_impl::android::media::VolumeShaper_Operation arg1, jboolean arg2);
		void apply(__jni_impl::android::media::VolumeShaper_Operation arg0);
		void close();
		jfloat getVolume();
	};
} // namespace __jni_impl::android::media

#include "VolumeShaper_Configuration.hpp"
#include "VolumeShaper_Operation.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void VolumeShaper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeShaper",
			"(V)V");
	}
	
	// Methods
	void VolumeShaper::replace(__jni_impl::android::media::VolumeShaper_Configuration arg0, __jni_impl::android::media::VolumeShaper_Operation arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"replace",
			"(Landroid/media/VolumeShaper$Configuration;Landroid/media/VolumeShaper$Operation;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void VolumeShaper::apply(__jni_impl::android::media::VolumeShaper_Operation arg0)
	{
		__thiz.callMethod<void>(
			"apply",
			"(Landroid/media/VolumeShaper$Operation;)V",
			arg0.__jniObject().object()
		);
	}
	void VolumeShaper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jfloat VolumeShaper::getVolume()
	{
		return __thiz.callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class VolumeShaper : public __jni_impl::android::media::VolumeShaper
	{
	public:
		VolumeShaper(QAndroidJniObject obj) { __thiz = obj; }
		VolumeShaper()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_VOLUMESHAPER

