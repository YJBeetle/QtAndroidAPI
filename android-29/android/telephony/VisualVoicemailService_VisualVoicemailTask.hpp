#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Messenger;
}

namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public __JniBaseClass
	{
	public:
		// Fields
		
		VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj);
		// Constructors
		VisualVoicemailService_VisualVoicemailTask() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		void finish();
		jint hashCode();
	};
} // namespace android::telephony

