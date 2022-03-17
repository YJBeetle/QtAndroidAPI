#pragma once

#include "../../JString.hpp"
#include "../../java/util/HashMap.def.hpp"
#include "./DrmInfoEvent.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmInfoEvent::TYPE_ACCOUNT_ALREADY_REGISTERED()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ACCOUNT_ALREADY_REGISTERED"
		);
	}
	inline jint DrmInfoEvent::TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_ALREADY_REGISTERED_BY_ANOTHER_ACCOUNT"
		);
	}
	inline jint DrmInfoEvent::TYPE_REMOVE_RIGHTS()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_REMOVE_RIGHTS"
		);
	}
	inline jint DrmInfoEvent::TYPE_RIGHTS_INSTALLED()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_INSTALLED"
		);
	}
	inline jint DrmInfoEvent::TYPE_RIGHTS_REMOVED()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_RIGHTS_REMOVED"
		);
	}
	inline jint DrmInfoEvent::TYPE_WAIT_FOR_RIGHTS()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoEvent",
			"TYPE_WAIT_FOR_RIGHTS"
		);
	}
	
	// Constructors
	inline DrmInfoEvent::DrmInfoEvent(jint arg0, jint arg1, JString arg2)
		: android::drm::DrmEvent(
			"android.drm.DrmInfoEvent",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	inline DrmInfoEvent::DrmInfoEvent(jint arg0, jint arg1, JString arg2, java::util::HashMap arg3)
		: android::drm::DrmEvent(
			"android.drm.DrmInfoEvent",
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

