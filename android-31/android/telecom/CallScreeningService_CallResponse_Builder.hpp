#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace android::telecom
{
	class CallScreeningService_CallResponse_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService_CallResponse_Builder(QJniObject obj);
		
		// Constructors
		CallScreeningService_CallResponse_Builder();
		
		// Methods
		android::telecom::CallScreeningService_CallResponse build();
		android::telecom::CallScreeningService_CallResponse_Builder setCallComposerAttachmentsToShow(jint arg0);
		android::telecom::CallScreeningService_CallResponse_Builder setDisallowCall(jboolean arg0);
		android::telecom::CallScreeningService_CallResponse_Builder setRejectCall(jboolean arg0);
		android::telecom::CallScreeningService_CallResponse_Builder setSilenceCall(jboolean arg0);
		android::telecom::CallScreeningService_CallResponse_Builder setSkipCallLog(jboolean arg0);
		android::telecom::CallScreeningService_CallResponse_Builder setSkipNotification(jboolean arg0);
	};
} // namespace android::telecom

