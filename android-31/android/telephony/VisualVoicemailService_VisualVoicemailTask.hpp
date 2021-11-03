#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService_VisualVoicemailTask(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService_VisualVoicemailTask(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		void finish();
		jint hashCode();
	};
} // namespace android::telephony

