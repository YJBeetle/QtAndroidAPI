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
		
		// QJniObject forward
		template<typename ...Ts> explicit BroadcastReceiver_PendingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastReceiver_PendingResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void abortBroadcast() const;
		void clearAbortBroadcast() const;
		void finish() const;
		jboolean getAbortBroadcast() const;
		jint getResultCode() const;
		JString getResultData() const;
		android::os::Bundle getResultExtras(jboolean arg0) const;
		void setResult(jint arg0, JString arg1, android::os::Bundle arg2) const;
		void setResultCode(jint arg0) const;
		void setResultData(JString arg0) const;
		void setResultExtras(android::os::Bundle arg0) const;
	};
} // namespace android::content

