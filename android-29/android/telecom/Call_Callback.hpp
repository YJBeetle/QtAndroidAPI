#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class Call;
}
namespace android::telecom
{
	class Call_Details;
}
namespace android::telecom
{
	class Call_RttCall;
}
namespace android::telecom
{
	class InCallService_VideoCall;
}

namespace android::telecom
{
	class Call_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint HANDOVER_FAILURE_DEST_APP_REJECTED();
		static jint HANDOVER_FAILURE_NOT_SUPPORTED();
		static jint HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL();
		static jint HANDOVER_FAILURE_UNKNOWN();
		static jint HANDOVER_FAILURE_USER_REJECTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit Call_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Call_Callback(QJniObject obj);
		
		// Constructors
		Call_Callback();
		
		// Methods
		void onCallDestroyed(android::telecom::Call arg0);
		void onCannedTextResponsesLoaded(android::telecom::Call arg0, __JniBaseClass arg1);
		void onChildrenChanged(android::telecom::Call arg0, __JniBaseClass arg1);
		void onConferenceableCallsChanged(android::telecom::Call arg0, __JniBaseClass arg1);
		void onConnectionEvent(android::telecom::Call arg0, jstring arg1, android::os::Bundle arg2);
		void onDetailsChanged(android::telecom::Call arg0, android::telecom::Call_Details arg1);
		void onHandoverComplete(android::telecom::Call arg0);
		void onHandoverFailed(android::telecom::Call arg0, jint arg1);
		void onParentChanged(android::telecom::Call arg0, android::telecom::Call arg1);
		void onPostDialWait(android::telecom::Call arg0, jstring arg1);
		void onRttInitiationFailure(android::telecom::Call arg0, jint arg1);
		void onRttModeChanged(android::telecom::Call arg0, jint arg1);
		void onRttRequest(android::telecom::Call arg0, jint arg1);
		void onRttStatusChanged(android::telecom::Call arg0, jboolean arg1, android::telecom::Call_RttCall arg2);
		void onStateChanged(android::telecom::Call arg0, jint arg1);
		void onVideoCallChanged(android::telecom::Call arg0, android::telecom::InCallService_VideoCall arg1);
	};
} // namespace android::telecom

