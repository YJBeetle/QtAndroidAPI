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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj);
		
		// Constructors
		VisualVoicemailSmsFilterSettings_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setClientPrefix(jstring arg0);
		QAndroidJniObject setDestinationPort(jint arg0);
		QAndroidJniObject setOriginatingNumbers(__JniBaseClass arg0);
	};
} // namespace android::telephony

