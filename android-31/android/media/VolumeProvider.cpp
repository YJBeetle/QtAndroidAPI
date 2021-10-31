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
	
	// QAndroidJniObject forward
	VolumeProvider::VolumeProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VolumeProvider::VolumeProvider(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.media.VolumeProvider",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	VolumeProvider::VolumeProvider(jint arg0, jint arg1, jint arg2, jstring arg3)
		: __JniBaseClass(
			"android.media.VolumeProvider",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint VolumeProvider::getCurrentVolume()
	{
		return callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	jint VolumeProvider::getMaxVolume()
	{
		return callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	jint VolumeProvider::getVolumeControl()
	{
		return callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	jstring VolumeProvider::getVolumeControlId()
	{
		return callObjectMethod(
			"getVolumeControlId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VolumeProvider::onAdjustVolume(jint arg0)
	{
		callMethod<void>(
			"onAdjustVolume",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::onSetVolumeTo(jint arg0)
	{
		callMethod<void>(
			"onSetVolumeTo",
			"(I)V",
			arg0
		);
	}
	void VolumeProvider::setCurrentVolume(jint arg0)
	{
		callMethod<void>(
			"setCurrentVolume",
			"(I)V",
			arg0
		);
	}
} // namespace android::media

