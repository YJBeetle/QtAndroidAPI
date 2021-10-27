#include "./SyncParams.hpp"

namespace android::media
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
	
	SyncParams::SyncParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncParams::SyncParams()
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
	jint SyncParams::getAudioAdjustMode()
	{
		return __thiz.callMethod<jint>(
			"getAudioAdjustMode",
			"()I"
		);
	}
	jfloat SyncParams::getFrameRate()
	{
		return __thiz.callMethod<jfloat>(
			"getFrameRate",
			"()F"
		);
	}
	jint SyncParams::getSyncSource()
	{
		return __thiz.callMethod<jint>(
			"getSyncSource",
			"()I"
		);
	}
	jfloat SyncParams::getTolerance()
	{
		return __thiz.callMethod<jfloat>(
			"getTolerance",
			"()F"
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
	QAndroidJniObject SyncParams::setFrameRate(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setFrameRate",
			"(F)Landroid/media/SyncParams;",
			arg0
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
	QAndroidJniObject SyncParams::setTolerance(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setTolerance",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
} // namespace android::media

