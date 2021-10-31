#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::content
{
	class BroadcastReceiver_PendingResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver_PendingResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver_PendingResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		void finish();
		jboolean getAbortBroadcast();
		jint getResultCode();
		jstring getResultData();
		android::os::Bundle getResultExtras(jboolean arg0);
		void setResult(jint arg0, jstring arg1, android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(jstring arg0);
		void setResultExtras(android::os::Bundle arg0);
	};
} // namespace android::content

