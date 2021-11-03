#pragma once

#include "../../JObject.hpp"


namespace android::telecom
{
	class Connection_RttModifyStatus : public JObject
	{
	public:
		// Fields
		static jint SESSION_MODIFY_REQUEST_FAIL();
		static jint SESSION_MODIFY_REQUEST_INVALID();
		static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE();
		static jint SESSION_MODIFY_REQUEST_SUCCESS();
		static jint SESSION_MODIFY_REQUEST_TIMED_OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Connection_RttModifyStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Connection_RttModifyStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telecom

