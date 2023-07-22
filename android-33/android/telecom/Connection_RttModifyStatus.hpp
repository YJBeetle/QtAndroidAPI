#pragma once

#include "./Connection_RttModifyStatus.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_FAIL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_FAIL"
		);
	}
	inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_INVALID()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_INVALID"
		);
	}
	inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"
		);
	}
	inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_SUCCESS"
		);
	}
	inline jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_TIMED_OUT"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
