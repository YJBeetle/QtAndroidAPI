#pragma once

#include "./DrmInitData_SchemeInitData.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./DrmInitData.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::DrmInitData_SchemeInitData DrmInitData::get(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/util/UUID;)Landroid/media/DrmInitData$SchemeInitData;",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

