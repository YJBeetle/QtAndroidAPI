#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class AppOpsManager_OnOpNotedCallback;
}
class JString;

namespace android::app
{
	class AppOpsManager : public JObject
	{
	public:
		// Fields
		static jint MODE_ALLOWED();
		static jint MODE_DEFAULT();
		static jint MODE_ERRORED();
		static jint MODE_FOREGROUND();
		static jint MODE_IGNORED();
		static JString OPSTR_ADD_VOICEMAIL();
		static JString OPSTR_ANSWER_PHONE_CALLS();
		static JString OPSTR_BODY_SENSORS();
		static JString OPSTR_CALL_PHONE();
		static JString OPSTR_CAMERA();
		static JString OPSTR_COARSE_LOCATION();
		static JString OPSTR_FINE_LOCATION();
		static JString OPSTR_GET_USAGE_STATS();
		static JString OPSTR_MOCK_LOCATION();
		static JString OPSTR_MONITOR_HIGH_POWER_LOCATION();
		static JString OPSTR_MONITOR_LOCATION();
		static JString OPSTR_PICTURE_IN_PICTURE();
		static JString OPSTR_PROCESS_OUTGOING_CALLS();
		static JString OPSTR_READ_CALENDAR();
		static JString OPSTR_READ_CALL_LOG();
		static JString OPSTR_READ_CELL_BROADCASTS();
		static JString OPSTR_READ_CONTACTS();
		static JString OPSTR_READ_EXTERNAL_STORAGE();
		static JString OPSTR_READ_PHONE_NUMBERS();
		static JString OPSTR_READ_PHONE_STATE();
		static JString OPSTR_READ_SMS();
		static JString OPSTR_RECEIVE_MMS();
		static JString OPSTR_RECEIVE_SMS();
		static JString OPSTR_RECEIVE_WAP_PUSH();
		static JString OPSTR_RECORD_AUDIO();
		static JString OPSTR_SEND_SMS();
		static JString OPSTR_SYSTEM_ALERT_WINDOW();
		static JString OPSTR_USE_FINGERPRINT();
		static JString OPSTR_USE_SIP();
		static JString OPSTR_WRITE_CALENDAR();
		static JString OPSTR_WRITE_CALL_LOG();
		static JString OPSTR_WRITE_CONTACTS();
		static JString OPSTR_WRITE_EXTERNAL_STORAGE();
		static JString OPSTR_WRITE_SETTINGS();
		static jint WATCH_FOREGROUND_CHANGES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppOpsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppOpsManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString permissionToOp(JString arg0);
		jint checkOp(JString arg0, jint arg1, JString arg2) const;
		jint checkOpNoThrow(JString arg0, jint arg1, JString arg2) const;
		void checkPackage(jint arg0, JString arg1) const;
		void finishOp(JString arg0, jint arg1, JString arg2) const;
		void finishOp(JString arg0, jint arg1, JString arg2, JString arg3) const;
		void finishProxyOp(JString arg0, jint arg1, JString arg2, JString arg3) const;
		jboolean isOpActive(JString arg0, jint arg1, JString arg2) const;
		jint noteOp(JString arg0, jint arg1, JString arg2) const;
		jint noteOp(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		jint noteOpNoThrow(JString arg0, jint arg1, JString arg2) const;
		jint noteOpNoThrow(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		jint noteProxyOp(JString arg0, JString arg1) const;
		jint noteProxyOp(JString arg0, JString arg1, jint arg2, JString arg3, JString arg4) const;
		jint noteProxyOpNoThrow(JString arg0, JString arg1) const;
		jint noteProxyOpNoThrow(JString arg0, JString arg1, jint arg2) const;
		jint noteProxyOpNoThrow(JString arg0, JString arg1, jint arg2, JString arg3, JString arg4) const;
		void setOnOpNotedCallback(JObject arg0, android::app::AppOpsManager_OnOpNotedCallback arg1) const;
		jint startOp(JString arg0, jint arg1, JString arg2) const;
		jint startOp(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		jint startOpNoThrow(JString arg0, jint arg1, JString arg2) const;
		jint startOpNoThrow(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		jint startProxyOp(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		jint startProxyOpNoThrow(JString arg0, jint arg1, JString arg2, JString arg3, JString arg4) const;
		void startWatchingActive(JArray arg0, JObject arg1, JObject arg2) const;
		void startWatchingMode(JString arg0, JString arg1, JObject arg2) const;
		void startWatchingMode(JString arg0, JString arg1, jint arg2, JObject arg3) const;
		void stopWatchingActive(JObject arg0) const;
		void stopWatchingMode(JObject arg0) const;
		jint unsafeCheckOp(JString arg0, jint arg1, JString arg2) const;
		jint unsafeCheckOpNoThrow(JString arg0, jint arg1, JString arg2) const;
		jint unsafeCheckOpRaw(JString arg0, jint arg1, JString arg2) const;
		jint unsafeCheckOpRawNoThrow(JString arg0, jint arg1, JString arg2) const;
	};
} // namespace android::app

