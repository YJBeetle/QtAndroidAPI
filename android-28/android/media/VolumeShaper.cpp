#include "./VolumeShaper_Configuration.hpp"
#include "./VolumeShaper_Operation.hpp"
#include "./VolumeShaper.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	void VolumeShaper::apply(android::media::VolumeShaper_Operation arg0) const
	{
		callMethod<void>(
			"apply",
			"(Landroid/media/VolumeShaper$Operation;)V",
			arg0.object()
		);
	}
	void VolumeShaper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jfloat VolumeShaper::getVolume() const
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	void VolumeShaper::replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2) const
	{
		callMethod<void>(
			"replace",
			"(Landroid/media/VolumeShaper$Configuration;Landroid/media/VolumeShaper$Operation;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::media

