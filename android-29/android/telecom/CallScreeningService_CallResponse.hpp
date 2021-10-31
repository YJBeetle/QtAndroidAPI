#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class CallScreeningService_CallResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

