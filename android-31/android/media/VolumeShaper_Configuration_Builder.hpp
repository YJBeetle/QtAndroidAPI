#pragma once

#include "../../JFloatArray.hpp"
#include "./VolumeShaper_Configuration.def.hpp"
#include "./VolumeShaper_Configuration_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline VolumeShaper_Configuration_Builder::VolumeShaper_Configuration_Builder()
		: JObject(
			"android.media.VolumeShaper$Configuration$Builder",
			"()V"
		) {}
	inline VolumeShaper_Configuration_Builder::VolumeShaper_Configuration_Builder(android::media::VolumeShaper_Configuration arg0)
		: JObject(
			"android.media.VolumeShaper$Configuration$Builder",
			"(Landroid/media/VolumeShaper$Configuration;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::VolumeShaper_Configuration VolumeShaper_Configuration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/VolumeShaper$Configuration;"
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::invertVolumes() const
	{
		return callObjectMethod(
			"invertVolumes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::reflectTimes() const
	{
		return callObjectMethod(
			"reflectTimes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::scaleToEndVolume(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleToEndVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::scaleToStartVolume(jfloat arg0) const
	{
		return callObjectMethod(
			"scaleToStartVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::setCurve(JFloatArray arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"setCurve",
			"([F[F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	inline android::media::VolumeShaper_Configuration_Builder VolumeShaper_Configuration_Builder::setInterpolatorType(jint arg0) const
	{
		return callObjectMethod(
			"setInterpolatorType",
			"(I)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

