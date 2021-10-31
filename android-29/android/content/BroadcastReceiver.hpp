#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class BroadcastReceiver_PendingResult;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}

namespace android::content
{
	class BroadcastReceiver : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver(QAndroidJniObject obj);
		
		// Constructors
		BroadcastReceiver();
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		jboolean getAbortBroadcast();
		jboolean getDebugUnregister();
		jint getResultCode();
		jstring getResultData();
		QAndroidJniObject getResultExtras(jboolean arg0);
		QAndroidJniObject goAsync();
		jboolean isInitialStickyBroadcast();
		jboolean isOrderedBroadcast();
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		QAndroidJniObject peekService(android::content::Context arg0, android::content::Intent arg1);
		void setDebugUnregister(jboolean arg0);
		void setOrderedHint(jboolean arg0);
		void setResult(jint arg0, jstring arg1, android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(jstring arg0);
		void setResultExtras(android::os::Bundle arg0);
	};
} // namespace android::content

