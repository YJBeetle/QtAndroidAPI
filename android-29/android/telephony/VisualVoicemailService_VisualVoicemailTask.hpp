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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService_VisualVoicemailTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService_VisualVoicemailTask(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		void finish();
		jint hashCode();
	};
} // namespace android::telephony

