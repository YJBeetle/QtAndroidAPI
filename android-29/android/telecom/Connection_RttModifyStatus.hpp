#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class Connection_RttModifyStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint SESSION_MODIFY_REQUEST_FAIL();
		static jint SESSION_MODIFY_REQUEST_INVALID();
		static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE();
		static jint SESSION_MODIFY_REQUEST_SUCCESS();
		static jint SESSION_MODIFY_REQUEST_TIMED_OUT();
		
		Connection_RttModifyStatus(QAndroidJniObject obj);
		// Constructors
		Connection_RttModifyStatus() = default;
		
		// Methods
	};
} // namespace android::telecom

