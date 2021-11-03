#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class GroupCall : public JObject
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
		template<typename ...Ts> explicit GroupCall(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GroupCall(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jlong getTmgi();
		void updateGroupCall(JObject arg0, JObject arg1);
	};
} // namespace android::telephony::mbms

