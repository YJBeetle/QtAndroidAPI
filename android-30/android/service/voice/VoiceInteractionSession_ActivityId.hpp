#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::voice
{
	class VoiceInteractionSession_ActivityId : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_ActivityId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_ActivityId(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::service::voice

