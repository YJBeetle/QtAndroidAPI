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

namespace android::media
{
	class MediaSession2 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2(QJniObject obj);
		
		// Constructors
		
		// Methods
		void broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1);
		void cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, jobject arg1);
		void close();
		JObject getConnectedControllers();
		jstring getId();
		android::media::Session2Token getToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2);
		void setPlaybackActive(jboolean arg0);
	};
} // namespace android::media

