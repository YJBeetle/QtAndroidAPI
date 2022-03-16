#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::content
{
	class BroadcastReceiver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		BroadcastReceiver();
		
		// Methods
		void abortBroadcast() const;
		void clearAbortBroadcast() const;
		jboolean getAbortBroadcast() const;
		jboolean getDebugUnregister() const;
		jint getResultCode() const;
		JString getResultData() const;
		android::os::Bundle getResultExtras(jboolean arg0) const;
		android::content::BroadcastReceiver_PendingResult goAsync() const;
		jboolean isInitialStickyBroadcast() const;
		jboolean isOrderedBroadcast() const;
		void onReceive(android::content::Context arg0, android::content::Intent arg1) const;
		JObject peekService(android::content::Context arg0, android::content::Intent arg1) const;
		void setDebugUnregister(jboolean arg0) const;
		void setOrderedHint(jboolean arg0) const;
		void setResult(jint arg0, JString arg1, android::os::Bundle arg2) const;
		void setResultCode(jint arg0) const;
		void setResultData(JString arg0) const;
		void setResultExtras(android::os::Bundle arg0) const;
	};
} // namespace android::content

