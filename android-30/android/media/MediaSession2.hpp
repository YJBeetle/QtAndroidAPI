#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaSession2_ControllerInfo;
}
namespace android::media
{
	class Session2Command;
}
namespace android::media
{
	class Session2Token;
}
namespace android::os
{
	class Bundle;
}
class JObject;
class JString;

namespace android::media
{
	class MediaSession2 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1) const;
		void cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, JObject arg1) const;
		void close() const;
		JObject getConnectedControllers() const;
		JString getId() const;
		android::media::Session2Token getToken() const;
		jboolean isPlaybackActive() const;
		JObject sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2) const;
		void setPlaybackActive(jboolean arg0) const;
	};
} // namespace android::media

