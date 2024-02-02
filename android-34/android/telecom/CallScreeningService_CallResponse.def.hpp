#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::telecom
{
	class CallScreeningService_CallResponse : public JObject
	{
	public:
		// Fields
		static jint CALL_COMPOSER_ATTACHMENT_LOCATION();
		static jint CALL_COMPOSER_ATTACHMENT_PICTURE();
		static jint CALL_COMPOSER_ATTACHMENT_PRIORITY();
		static jint CALL_COMPOSER_ATTACHMENT_SUBJECT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallScreeningService_CallResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallScreeningService_CallResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getCallComposerAttachmentsToShow() const;
		jboolean getDisallowCall() const;
		jboolean getRejectCall() const;
		jboolean getSilenceCall() const;
		jboolean getSkipCallLog() const;
		jboolean getSkipNotification() const;
		jint hashCode() const;
	};
} // namespace android::telecom

