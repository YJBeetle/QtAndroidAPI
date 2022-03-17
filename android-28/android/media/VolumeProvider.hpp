#pragma once

#include "./VolumeProvider.def.hpp"

namespace android::media
{
	// Fields
	inline jint VolumeProvider::VOLUME_CONTROL_ABSOLUTE()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_ABSOLUTE"
		);
	}
	inline jint VolumeProvider::VOLUME_CONTROL_FIXED()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_FIXED"
		);
	}
	inline jint VolumeProvider::VOLUME_CONTROL_RELATIVE()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_RELATIVE"
		);
	}
	
	// Constructors
	inline VolumeProvider::VolumeProvider(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.VolumeProvider",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint VolumeProvider::getCurrentVolume() const
	{
		return callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	inline jint VolumeProvider::getMaxVolume() const
	{
		return callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	inline jint VolumeProvider::getVolumeControl() const
	{
		return callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	inline void VolumeProvider::onAdjustVolume(jint arg0) const
	{
		callMethod<void>(
			"onAdjustVolume",
			"(I)V",
			arg0
		);
	}
	inline void VolumeProvider::onSetVolumeTo(jint arg0) const
	{
		callMethod<void>(
			"onSetVolumeTo",
			"(I)V",
			arg0
		);
	}
	inline void VolumeProvider::setCurrentVolume(jint arg0) const
	{
		callMethod<void>(
			"setCurrentVolume",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
