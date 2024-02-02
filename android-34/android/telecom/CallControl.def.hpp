#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ParcelUuid;
}
namespace android::telecom
{
	class CallEndpoint;
}
namespace android::telecom
{
	class DisconnectCause;
}
class JString;

namespace android::telecom
{
	class CallControl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallControl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallControl(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void answer(jint arg0, JObject arg1, JObject arg2) const;
		void disconnect(android::telecom::DisconnectCause arg0, JObject arg1, JObject arg2) const;
		android::os::ParcelUuid getCallId() const;
		void requestCallEndpointChange(android::telecom::CallEndpoint arg0, JObject arg1, JObject arg2) const;
		void sendEvent(JString arg0, android::os::Bundle arg1) const;
		void setActive(JObject arg0, JObject arg1) const;
		void setInactive(JObject arg0, JObject arg1) const;
		void startCallStreaming(JObject arg0, JObject arg1) const;
	};
} // namespace android::telecom

