#pragma once

#include "./VolumeShaper_Configuration.def.hpp"
#include "./VolumeShaper_Operation.def.hpp"
#include "./VolumeShaper.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VolumeShaper::apply(android::media::VolumeShaper_Operation arg0) const
	{
		callMethod<void>(
			"apply",
			"(Landroid/media/VolumeShaper$Operation;)V",
			arg0.object()
		);
	}
	inline void VolumeShaper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jfloat VolumeShaper::getVolume() const
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	inline void VolumeShaper::replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
