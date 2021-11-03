#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj);
		
		// Constructors
		VisualVoicemailSmsFilterSettings_Builder();
		
		// Methods
		android::telephony::VisualVoicemailSmsFilterSettings build();
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setClientPrefix(jstring arg0);
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setDestinationPort(jint arg0);
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setOriginatingNumbers(JObject arg0);
	};
} // namespace android::telephony

