#pragma once

#include "./SyncParams.def.hpp"

namespace android::media
{
	// Fields
	inline jint SyncParams::AUDIO_ADJUST_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_DEFAULT"
		);
	}
	inline jint SyncParams::AUDIO_ADJUST_MODE_RESAMPLE()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_RESAMPLE"
		);
	}
	inline jint SyncParams::AUDIO_ADJUST_MODE_STRETCH()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"AUDIO_ADJUST_MODE_STRETCH"
		);
	}
	inline jint SyncParams::SYNC_SOURCE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_AUDIO"
		);
	}
	inline jint SyncParams::SYNC_SOURCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_DEFAULT"
		);
	}
	inline jint SyncParams::SYNC_SOURCE_SYSTEM_CLOCK()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_SYSTEM_CLOCK"
		);
	}
	inline jint SyncParams::SYNC_SOURCE_VSYNC()
	{
		return getStaticField<jint>(
			"android.media.SyncParams",
			"SYNC_SOURCE_VSYNC"
		);
	}
	
	// Constructors
	inline SyncParams::SyncParams()
		: JObject(
			"android.media.SyncParams",
			"()V"
		) {}
	
	// Methods
	inline android::media::SyncParams SyncParams::allowDefaults() const
	{
		return callObjectMethod(
			"allowDefaults",
			"()Landroid/media/SyncParams;"
		);
	}
	inline jint SyncParams::getAudioAdjustMode() const
	{
		return callMethod<jint>(
			"getAudioAdjustMode",
			"()I"
		);
	}
	inline jfloat SyncParams::getFrameRate() const
	{
		return callMethod<jfloat>(
			"getFrameRate",
			"()F"
		);
	}
	inline jint SyncParams::getSyncSource() const
	{
		return callMethod<jint>(
			"getSyncSource",
			"()I"
		);
	}
	inline jfloat SyncParams::getTolerance() const
	{
		return callMethod<jfloat>(
			"getTolerance",
			"()F"
		);
	}
	inline android::media::SyncParams SyncParams::setAudioAdjustMode(jint arg0) const
	{
		return callObjectMethod(
			"setAudioAdjustMode",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	inline android::media::SyncParams SyncParams::setFrameRate(jfloat arg0) const
	{
		return callObjectMethod(
			"setFrameRate",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
	inline android::media::SyncParams SyncParams::setSyncSource(jint arg0) const
	{
		return callObjectMethod(
			"setSyncSource",
			"(I)Landroid/media/SyncParams;",
			arg0
		);
	}
	inline android::media::SyncParams SyncParams::setTolerance(jfloat arg0) const
	{
		return callObjectMethod(
			"setTolerance",
			"(F)Landroid/media/SyncParams;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
