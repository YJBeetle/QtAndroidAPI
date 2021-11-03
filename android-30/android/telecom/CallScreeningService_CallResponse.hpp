#pragma once

#include "../../JObject.hpp"


namespace android::telecom
{
	class CallScreeningService_CallResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService_CallResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean getDisallowCall();
		jboolean getRejectCall();
		jboolean getSilenceCall();
		jboolean getSkipCallLog();
		jboolean getSkipNotification();
	};
} // namespace android::telecom

