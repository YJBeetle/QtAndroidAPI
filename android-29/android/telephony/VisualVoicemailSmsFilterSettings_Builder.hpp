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
		
		VisualVoicemailSmsFilterSettings_Builder(QAndroidJniObject obj);
		// Constructors
		VisualVoicemailSmsFilterSettings_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setClientPrefix(jstring arg0);
		QAndroidJniObject setClientPrefix(const QString &arg0);
		QAndroidJniObject setDestinationPort(jint arg0);
		QAndroidJniObject setOriginatingNumbers(__JniBaseClass arg0);
	};
} // namespace android::telephony

