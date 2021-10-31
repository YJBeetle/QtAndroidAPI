#include "./Connection_RttModifyStatus.hpp"

namespace android::telecom
{
	// Fields
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_FAIL"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_INVALID"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_SUCCESS"
		);
	}
	jint Connection_RttModifyStatus::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$RttModifyStatus",
			"SESSION_MODIFY_REQUEST_TIMED_OUT"
		);
	}
	
	// QAndroidJniObject forward
	Connection_RttModifyStatus::Connection_RttModifyStatus(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telecom

