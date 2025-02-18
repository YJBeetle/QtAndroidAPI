#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}
class JString;

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VisualVoicemailSmsFilterSettings_Builder();
		
		// Methods
		android::telephony::VisualVoicemailSmsFilterSettings build() const;
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setClientPrefix(JString arg0) const;
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setDestinationPort(jint arg0) const;
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setOriginatingNumbers(JObject arg0) const;
	};
} // namespace android::telephony

