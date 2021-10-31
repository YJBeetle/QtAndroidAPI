#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class AppOpsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_ALLOWED();
		static jint MODE_DEFAULT();
		static jint MODE_ERRORED();
		static jint MODE_IGNORED();
		static jstring OPSTR_ADD_VOICEMAIL();
		static jstring OPSTR_ANSWER_PHONE_CALLS();
		static jstring OPSTR_BODY_SENSORS();
		static jstring OPSTR_CALL_PHONE();
		static jstring OPSTR_CAMERA();
		static jstring OPSTR_COARSE_LOCATION();
		static jstring OPSTR_FINE_LOCATION();
		static jstring OPSTR_GET_USAGE_STATS();
		static jstring OPSTR_MOCK_LOCATION();
		static jstring OPSTR_MONITOR_HIGH_POWER_LOCATION();
		static jstring OPSTR_MONITOR_LOCATION();
		static jstring OPSTR_PICTURE_IN_PICTURE();
		static jstring OPSTR_PROCESS_OUTGOING_CALLS();
		static jstring OPSTR_READ_CALENDAR();
		static jstring OPSTR_READ_CALL_LOG();
		static jstring OPSTR_READ_CELL_BROADCASTS();
		static jstring OPSTR_READ_CONTACTS();
		static jstring OPSTR_READ_EXTERNAL_STORAGE();
		static jstring OPSTR_READ_PHONE_NUMBERS();
		static jstring OPSTR_READ_PHONE_STATE();
		static jstring OPSTR_READ_SMS();
		static jstring OPSTR_RECEIVE_MMS();
		static jstring OPSTR_RECEIVE_SMS();
		static jstring OPSTR_RECEIVE_WAP_PUSH();
		static jstring OPSTR_RECORD_AUDIO();
		static jstring OPSTR_SEND_SMS();
		static jstring OPSTR_SYSTEM_ALERT_WINDOW();
		static jstring OPSTR_USE_FINGERPRINT();
		static jstring OPSTR_USE_SIP();
		static jstring OPSTR_WRITE_CALENDAR();
		static jstring OPSTR_WRITE_CALL_LOG();
		static jstring OPSTR_WRITE_CONTACTS();
		static jstring OPSTR_WRITE_EXTERNAL_STORAGE();
		static jstring OPSTR_WRITE_SETTINGS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppOpsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppOpsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring permissionToOp(jstring arg0);
		jint checkOp(jstring arg0, jint arg1, jstring arg2);
		jint checkOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		void checkPackage(jint arg0, jstring arg1);
		void finishOp(jstring arg0, jint arg1, jstring arg2);
		jint noteOp(jstring arg0, jint arg1, jstring arg2);
		jint noteOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint noteProxyOp(jstring arg0, jstring arg1);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1);
		jint startOp(jstring arg0, jint arg1, jstring arg2);
		jint startOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		void startWatchingMode(jstring arg0, jstring arg1, __JniBaseClass arg2);
		void stopWatchingMode(__JniBaseClass arg0);
	};
} // namespace android::app

