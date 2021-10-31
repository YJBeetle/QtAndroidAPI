#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class VisualVoicemailService_VisualVoicemailTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VisualVoicemailService_VisualVoicemailTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailService_VisualVoicemailTask(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		void finish();
		jint hashCode();
	};
} // namespace android::telephony

