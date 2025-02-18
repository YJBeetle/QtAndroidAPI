#pragma once

#include "../../JObject.hpp"

namespace android::speech
{
	class RecognitionSupport;
}

namespace android::speech
{
	class RecognitionService_SupportCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService_SupportCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService_SupportCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void onError(jint arg0) const;
		void onSupportResult(android::speech::RecognitionSupport arg0) const;
	};
} // namespace android::speech

