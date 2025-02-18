#pragma once

#include "./PolicyUpdateResult.def.hpp"

namespace android::app::admin
{
	// Fields
	inline jint PolicyUpdateResult::RESULT_FAILURE_CONFLICTING_ADMIN_POLICY()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_FAILURE_CONFLICTING_ADMIN_POLICY"
		);
	}
	inline jint PolicyUpdateResult::RESULT_FAILURE_HARDWARE_LIMITATION()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_FAILURE_HARDWARE_LIMITATION"
		);
	}
	inline jint PolicyUpdateResult::RESULT_FAILURE_STORAGE_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_FAILURE_STORAGE_LIMIT_REACHED"
		);
	}
	inline jint PolicyUpdateResult::RESULT_FAILURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_FAILURE_UNKNOWN"
		);
	}
	inline jint PolicyUpdateResult::RESULT_POLICY_CLEARED()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_POLICY_CLEARED"
		);
	}
	inline jint PolicyUpdateResult::RESULT_POLICY_SET()
	{
		return getStaticField<jint>(
			"android.app.admin.PolicyUpdateResult",
			"RESULT_POLICY_SET"
		);
	}
	
	// Constructors
	inline PolicyUpdateResult::PolicyUpdateResult(jint arg0)
		: JObject(
			"android.app.admin.PolicyUpdateResult",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint PolicyUpdateResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
