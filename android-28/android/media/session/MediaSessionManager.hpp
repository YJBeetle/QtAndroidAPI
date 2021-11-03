#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace android::os
{
	class Handler;
}

namespace android::media::session
{
	class MediaSessionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSessionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSessionManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1);
		void addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1, android::os::Handler arg2);
		JObject getActiveSessions(android::content::ComponentName arg0);
		jboolean isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0);
		void removeOnActiveSessionsChangedListener(JObject arg0);
	};
} // namespace android::media::session

