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
		
		BroadcastReceiver_PendingResult(QAndroidJniObject obj);
		// Constructors
		BroadcastReceiver_PendingResult() = default;
		
		// Methods
		void abortBroadcast();
		void clearAbortBroadcast();
		void finish();
		jboolean getAbortBroadcast();
		jint getResultCode();
		jstring getResultData();
		QAndroidJniObject getResultExtras(jboolean arg0);
		void setResult(jint arg0, jstring arg1, android::os::Bundle arg2);
		void setResult(jint arg0, const QString &arg1, android::os::Bundle arg2);
		void setResultCode(jint arg0);
		void setResultData(jstring arg0);
		void setResultData(const QString &arg0);
		void setResultExtras(android::os::Bundle arg0);
	};
} // namespace android::content

