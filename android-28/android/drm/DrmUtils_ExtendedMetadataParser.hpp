#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./DrmUtils_ExtendedMetadataParser.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString DrmUtils_ExtendedMetadataParser::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject DrmUtils_ExtendedMetadataParser::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject DrmUtils_ExtendedMetadataParser::keyIterator() const
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
