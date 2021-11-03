#pragma once

#include "../../JObject.hpp"


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
		CallScreeningService_CallResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getCallComposerAttachmentsToShow();
		jboolean getDisallowCall();
		jboolean getRejectCall();
		jboolean getSilenceCall();
		jboolean getSkipCallLog();
		jboolean getSkipNotification();
		jint hashCode();
	};
} // namespace android::telecom

