#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::voice
{
	class VoiceInteractionSession_Request : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_Request(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		JString getCallingPackage() const;
		jint getCallingUid() const;
		android::os::Bundle getExtras() const;
		jboolean isActive() const;
		JString toString() const;
	};
} // namespace android::service::voice

