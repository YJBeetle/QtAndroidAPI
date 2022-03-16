#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::service::voice
{
	class VoiceInteractionSession_ActivityId : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_ActivityId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_ActivityId(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::service::voice

