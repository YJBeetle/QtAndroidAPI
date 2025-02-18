#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/HashMap.def.hpp"
#include "./DrmEvent.def.hpp"

namespace android::drm
{
	// Fields
	inline JString DrmEvent::DRM_INFO_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_OBJECT",
			"Ljava/lang/String;"
		);
	}
	inline JString DrmEvent::DRM_INFO_STATUS_OBJECT()
	{
		return getStaticObjectField(
			"android.drm.DrmEvent",
			"DRM_INFO_STATUS_OBJECT",
			"Ljava/lang/String;"
		);
	}
	inline jint DrmEvent::TYPE_ALL_RIGHTS_REMOVED()
	{
		return getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_ALL_RIGHTS_REMOVED"
		);
	}
	inline jint DrmEvent::TYPE_DRM_INFO_PROCESSED()
	{
		return getStaticField<jint>(
			"android.drm.DrmEvent",
			"TYPE_DRM_INFO_PROCESSED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject DrmEvent::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JString DrmEvent::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint DrmEvent::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint DrmEvent::getUniqueId() const
	{
		return callMethod<jint>(
			"getUniqueId",
			"()I"
		);
	}
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
