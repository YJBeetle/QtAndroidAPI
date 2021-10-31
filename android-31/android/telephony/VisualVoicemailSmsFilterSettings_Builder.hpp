#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings;
}

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings_Builder(QJniObject obj);
		
		// Constructors
		VisualVoicemailSmsFilterSettings_Builder();
		
		// Methods
		android::telephony::VisualVoicemailSmsFilterSettings build();
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setClientPrefix(jstring arg0);
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setDestinationPort(jint arg0);
		android::telephony::VisualVoicemailSmsFilterSettings_Builder setOriginatingNumbers(__JniBaseClass arg0);
	};
} // namespace android::telephony

