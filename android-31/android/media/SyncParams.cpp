#include "./SyncParams.hpp"

namespace android::media
{
	// Fields
	jint SyncParams::AUDIO_ADJUST_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_DEFAULT"
		);
	}
	jint SyncParams::AUDIO_ADJUST_MODE_RESAMPLE()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_RESAMPLE"
		);
	}
	jint SyncParams::AUDIO_ADJUST_MODE_STRETCH()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_STRETCH"
		);
	}
	jint SyncParams::SYNC_SOURCE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_AUDIO"
		);
	}
	jint SyncParams::SYNC_SOURCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_DEFAULT"
		);
	}
	jint SyncParams::SYNC_SOURCE_SYSTEM_CLOCK()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_SYSTEM_CLOCK"
		);
	}
	jint SyncParams::SYNC_SOURCE_VSYNC()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_VSYNC"
		);
	}
	
	// QAndroidJniObject forward
	SyncParams::SyncParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncParams::SyncParams()
		: JObject(
			"android.media.SyncParams",
			"()V"
		) {}
	
	// Methods
	android::media::SyncParams SyncParams::allowDefaults() const
	{
		return callObjectMethod(
			"allowDefaults",
			"()Landroid/media/SyncParams;"
		);
	}
	jint SyncParams::getAudioAdjustMode() const
	{
		return callMethod<jint>(
			"getAudioAdjustMode",
			"()I"
		);
	}
	jfloat SyncParams::getFrameRate() const
	{
		return callMethod<jfloat>(
			"getFrameRate",
			"()F"
		);
	}
	jint SyncParams::getSyncSource() const
	{
		return callMethod<jint>(
			"getSyncSource",
			"()I"
		);
	}
	jfloat SyncParams::getTolerance() const
	{
		return callMethod<jfloat>(
			"getTolerance",
			"()F"
		);
	}
	android::media::SyncParams SyncParams::setAudioAdjustMode(jint arg0) const
	{
		return callObjectMethod(
			"setAudioAdjustMode",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	android::media::SyncParams SyncParams::setFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setFrameRate",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
	android::media::SyncParams SyncParams::setSyncSource(jint arg0) const
	{
		return callObjectMethod(
			"setSyncSource",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	android::media::SyncParams SyncParams::setTolerance(jfloat arg0) const
	{
		return callObjectMethod(
			"setTolerance",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
} // namespace android::media

