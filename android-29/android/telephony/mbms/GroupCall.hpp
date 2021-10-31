#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class GroupCall : public __JniBaseClass
	{
	public:
		// Fields
		static jint REASON_BY_USER_REQUEST();
		static jint REASON_FREQUENCY_CONFLICT();
		static jint REASON_LEFT_MBMS_BROADCAST_AREA();
		static jint REASON_NONE();
		static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE();
		static jint REASON_OUT_OF_MEMORY();
		static jint STATE_STALLED();
		static jint STATE_STARTED();
		static jint STATE_STOPPED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GroupCall(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GroupCall(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jlong getTmgi();
		void updateGroupCall(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace android::telephony::mbms

