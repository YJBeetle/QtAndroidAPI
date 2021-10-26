#pragma once

#ifndef ANDROID_MEDIA_SYNCPARAMS
#define ANDROID_MEDIA_SYNCPARAMS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class SyncParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_ADJUST_MODE_DEFAULT();
		static jint AUDIO_ADJUST_MODE_RESAMPLE();
		static jint AUDIO_ADJUST_MODE_STRETCH();
		static jint SYNC_SOURCE_AUDIO();
		static jint SYNC_SOURCE_DEFAULT();
		static jint SYNC_SOURCE_SYSTEM_CLOCK();
		static jint SYNC_SOURCE_VSYNC();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject allowDefaults();
		QAndroidJniObject setAudioAdjustMode(jint arg0);
		jint getAudioAdjustMode();
		QAndroidJniObject setSyncSource(jint arg0);
		jint getSyncSource();
		QAndroidJniObject setTolerance(jfloat arg0);
		jfloat getTolerance();
		QAndroidJniObject setFrameRate(jfloat arg0);
		jfloat getFrameRate();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint SyncParams::AUDIO_ADJUST_MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_DEFAULT"
		);
	}
	jint SyncParams::AUDIO_ADJUST_MODE_RESAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_RESAMPLE"
		);
	}
	jint SyncParams::AUDIO_ADJUST_MODE_STRETCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_STRETCH"
		);
	}
	jint SyncParams::SYNC_SOURCE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_AUDIO"
		);
	}
	jint SyncParams::SYNC_SOURCE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_DEFAULT"
		);
	}
	jint SyncParams::SYNC_SOURCE_SYSTEM_CLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_SYSTEM_CLOCK"
		);
	}
	jint SyncParams::SYNC_SOURCE_VSYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_VSYNC"
		);
	}
	
	// Constructors
	void SyncParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.SyncParams",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SyncParams::allowDefaults()
	{
		return __thiz.callObjectMethod(
			"allowDefaults",
			"()Landroid/media/SyncParams;"
		);
	}
	QAndroidJniObject SyncParams::setAudioAdjustMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioAdjustMode",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	jint SyncParams::getAudioAdjustMode()
	{
		return __thiz.callMethod<jint>(
			"getAudioAdjustMode",
			"()I"
		);
	}
	QAndroidJniObject SyncParams::setSyncSource(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSyncSource",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	jint SyncParams::getSyncSource()
	{
		return __thiz.callMethod<jint>(
			"getSyncSource",
			"()I"
		);
	}
	QAndroidJniObject SyncParams::setTolerance(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setTolerance",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
	jfloat SyncParams::getTolerance()
	{
		return __thiz.callMethod<jfloat>(
			"getTolerance",
			"()F"
		);
	}
	QAndroidJniObject SyncParams::setFrameRate(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setFrameRate",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
	jfloat SyncParams::getFrameRate()
	{
		return __thiz.callMethod<jfloat>(
			"getFrameRate",
			"()F"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class SyncParams : public __jni_impl::android::media::SyncParams
	{
	public:
		SyncParams(QAndroidJniObject obj) { __thiz = obj; }
		SyncParams()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SYNCPARAMS

