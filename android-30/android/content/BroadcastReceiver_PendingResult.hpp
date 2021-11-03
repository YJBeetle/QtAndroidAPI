#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::content
{
	class BroadcastReceiver_PendingResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver_PendingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver_PendingResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		void finish();
		jboolean getAbortBroadcast();
		jint getResultCode();
		JString getResultData();
		android::os::Bundle getResultExtras(jboolean arg0);
		void setResult(jint arg0, JString arg1, android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(JString arg0);
		void setResultExtras(android::os::Bundle arg0);
	};
} // namespace android::content

