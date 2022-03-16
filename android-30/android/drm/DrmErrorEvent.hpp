#pragma once

#include "../../JString.hpp"
#include "../../java/util/HashMap.def.hpp"
#include "./DrmErrorEvent.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmErrorEvent::TYPE_ACQUIRE_DRM_INFO_FAILED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_ACQUIRE_DRM_INFO_FAILED"
		);
	}
	inline jint DrmErrorEvent::TYPE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NOT_SUPPORTED"
		);
	}
	inline jint DrmErrorEvent::TYPE_NO_INTERNET_CONNECTION()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_NO_INTERNET_CONNECTION"
		);
	}
	inline jint DrmErrorEvent::TYPE_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_OUT_OF_MEMORY"
		);
	}
	inline jint DrmErrorEvent::TYPE_PROCESS_DRM_INFO_FAILED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_PROCESS_DRM_INFO_FAILED"
		);
	}
	inline jint DrmErrorEvent::TYPE_REMOVE_ALL_RIGHTS_FAILED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_REMOVE_ALL_RIGHTS_FAILED"
		);
	}
	inline jint DrmErrorEvent::TYPE_RIGHTS_NOT_INSTALLED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_NOT_INSTALLED"
		);
	}
	inline jint DrmErrorEvent::TYPE_RIGHTS_RENEWAL_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.drm.DrmErrorEvent",
			"TYPE_RIGHTS_RENEWAL_NOT_ALLOWED"
		);
	}
	
	// Constructors
	inline DrmErrorEvent::DrmErrorEvent(jint arg0, jint arg1, JString arg2)
		: android::drm::DrmEvent(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	inline DrmErrorEvent::DrmErrorEvent(jint arg0, jint arg1, JString arg2, java::util::HashMap arg3)
		: android::drm::DrmEvent(
			"android.drm.DrmErrorEvent",
			"(IILjava/lang/String;Ljava/util/HashMap;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers
#include "./DrmEvent.hpp"

