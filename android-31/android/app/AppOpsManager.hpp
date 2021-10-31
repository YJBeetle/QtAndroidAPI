#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class AppOpsManager_OnOpNotedCallback;
}

namespace android::app
{
	class AppOpsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_ALLOWED();
		static jint MODE_DEFAULT();
		static jint MODE_ERRORED();
		static jint MODE_FOREGROUND();
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
		static jint WATCH_FOREGROUND_CHANGES();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppOpsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppOpsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring permissionToOp(jstring arg0);
		jint checkOp(jstring arg0, jint arg1, jstring arg2);
		jint checkOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		void checkPackage(jint arg0, jstring arg1);
		void finishOp(jstring arg0, jint arg1, jstring arg2);
		void finishOp(jstring arg0, jint arg1, jstring arg2, jstring arg3);
		void finishProxyOp(jstring arg0, jint arg1, jstring arg2, jstring arg3);
		jboolean isOpActive(jstring arg0, jint arg1, jstring arg2);
		jint noteOp(jstring arg0, jint arg1, jstring arg2);
		jint noteOp(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		jint noteOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint noteOpNoThrow(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		jint noteProxyOp(jstring arg0, jstring arg1);
		jint noteProxyOp(jstring arg0, jstring arg1, jint arg2, jstring arg3, jstring arg4);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1, jint arg2);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1, jint arg2, jstring arg3, jstring arg4);
		void setOnOpNotedCallback(__JniBaseClass arg0, android::app::AppOpsManager_OnOpNotedCallback arg1);
		jint startOp(jstring arg0, jint arg1, jstring arg2);
		jint startOp(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		jint startOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint startOpNoThrow(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		jint startProxyOp(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		jint startProxyOpNoThrow(jstring arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		void startWatchingActive(jarray arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void startWatchingMode(jstring arg0, jstring arg1, __JniBaseClass arg2);
		void startWatchingMode(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3);
		void stopWatchingActive(__JniBaseClass arg0);
		void stopWatchingMode(__JniBaseClass arg0);
		jint unsafeCheckOp(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpRaw(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpRawNoThrow(jstring arg0, jint arg1, jstring arg2);
	};
} // namespace android::app

