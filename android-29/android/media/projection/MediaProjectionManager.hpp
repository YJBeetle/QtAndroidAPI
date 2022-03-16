#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./MediaProjection.def.hpp"
#include "./MediaProjectionManager.def.hpp"

namespace android::media::projection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::Intent MediaProjectionManager::createScreenCaptureIntent() const
	{
		return callObjectMethod(
			"createScreenCaptureIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline android::media::projection::MediaProjection MediaProjectionManager::getMediaProjection(jint arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"getMediaProjection",
			"(ILandroid/content/Intent;)Landroid/media/projection/MediaProjection;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::projection

// Base class headers

