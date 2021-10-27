#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class VolumeProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint VOLUME_CONTROL_ABSOLUTE();
		static jint VOLUME_CONTROL_FIXED();
		static jint VOLUME_CONTROL_RELATIVE();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getVolumeControl();
		void onAdjustVolume(jint arg0);
		void onSetVolumeTo(jint arg0);
		void setCurrentVolume(jint arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint VolumeProvider::VOLUME_CONTROL_ABSOLUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_ABSOLUTE"
		);
	}
	jint VolumeProvider::VOLUME_CONTROL_FIXED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_FIXED"
		);
	}
	jint VolumeProvider::VOLUME_CONTROL_RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_RELATIVE"
		);
	}
	
	// Constructors
	void VolumeProvider::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeProvider",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint VolumeProvider::getCurrentVolume()
	{
		return __thiz.callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	jint VolumeProvider::getMaxVolume()
	{
		return __thiz.callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	jint VolumeProvider::getVolumeControl()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	void VolumeProvider::onAdjustVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"onAdjustVolume",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::onSetVolumeTo(jint arg0)
	{
		__thiz.callMethod<void>(
			"onSetVolumeTo",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::setCurrentVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentVolume",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class VolumeProvider : public __jni_impl::android::media::VolumeProvider
	{
	public:
		VolumeProvider(QAndroidJniObject obj) { __thiz = obj; }
		VolumeProvider(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

