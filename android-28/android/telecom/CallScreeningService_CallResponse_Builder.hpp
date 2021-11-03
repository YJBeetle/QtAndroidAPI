#pragma once

#include "../../JObject.hpp"

namespace android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace android::telecom
{
	class CallScreeningService_CallResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService_CallResponse_Builder(QJniObject obj);
		
		// Constructors
		CallScreeningService_CallResponse_Builder();
		
		// Methods
		android::telecom::CallScreeningService_CallResponse build() const;
		android::telecom::CallScreeningService_CallResponse_Builder setDisallowCall(jboolean arg0) const;
		android::telecom::CallScreeningService_CallResponse_Builder setRejectCall(jboolean arg0) const;
		android::telecom::CallScreeningService_CallResponse_Builder setSkipCallLog(jboolean arg0) const;
		android::telecom::CallScreeningService_CallResponse_Builder setSkipNotification(jboolean arg0) const;
	};
} // namespace android::telecom

