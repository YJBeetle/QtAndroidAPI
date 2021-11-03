#include "./Connection_RttModifyStatus.hpp"

namespace android::telecom
{
	// Fields
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_FAIL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_FAIL"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_INVALID()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_INVALID"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_SUCCESS"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_TIMED_OUT"
		);
	}
	
	// QJniObject forward
	Connection_RttModifyStatus::Connection_RttModifyStatus(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telecom

