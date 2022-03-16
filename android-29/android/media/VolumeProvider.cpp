#include "./VolumeProvider.hpp"

namespace android::media
{
	// Fields
	jint VolumeProvider::VOLUME_CONTROL_ABSOLUTE()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_ABSOLUTE"
		);
	}
	jint VolumeProvider::VOLUME_CONTROL_FIXED()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_FIXED"
		);
	}
	jint VolumeProvider::VOLUME_CONTROL_RELATIVE()
	{
		return getStaticField<jint>(
			"android.media.VolumeProvider",
			"VOLUME_CONTROL_RELATIVE"
		);
	}
	
	// Constructors
	VolumeProvider::VolumeProvider(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.VolumeProvider",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint VolumeProvider::getCurrentVolume() const
	{
		return callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	jint VolumeProvider::getMaxVolume() const
	{
		return callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	jint VolumeProvider::getVolumeControl() const
	{
		return callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	void VolumeProvider::onAdjustVolume(jint arg0) const
	{
		callMethod<void>(
			"onAdjustVolume",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::onSetVolumeTo(jint arg0) const
	{
		callMethod<void>(
			"onSetVolumeTo",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::setCurrentVolume(jint arg0) const
	{
		callMethod<void>(
			"setCurrentVolume",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

