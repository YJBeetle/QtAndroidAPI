#pragma once

#include "../../JByteArray.hpp"
#include "./DrmUtils_ExtendedMetadataParser.def.hpp"
#include "./DrmUtils.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	inline DrmUtils::DrmUtils()
		: JObject(
			"android.drm.DrmUtils",
			"()V"
		) {}
	
	// Methods
	inline android::drm::DrmUtils_ExtendedMetadataParser DrmUtils::getExtendedMetadataParser(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.drm.DrmUtils",
			"getExtendedMetadataParser",
			"([B)Landroid/drm/DrmUtils$ExtendedMetadataParser;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::drm

// Base class headers

