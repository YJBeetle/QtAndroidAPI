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
	inline android::media::DrmInitData_SchemeInitData DrmInitData::getSchemeInitDataAt(jint arg0) const
	{
		return callObjectMethod(
			"getSchemeInitDataAt",
			"(I)Landroid/media/DrmInitData$SchemeInitData;",
			arg0
		);
	}
	inline jint DrmInitData::getSchemeInitDataCount() const
	{
		return callMethod<jint>(
			"getSchemeInitDataCount",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
