#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::media
{
	class Session2Token;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSessionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSessionManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1) const;
		void addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1, android::os::Handler arg2) const;
		void addOnSession2TokensChangedListener(JObject arg0) const;
		void addOnSession2TokensChangedListener(JObject arg0, android::os::Handler arg1) const;
		JObject getActiveSessions(android::content::ComponentName arg0) const;
		JObject getSession2Tokens() const;
		jboolean isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0) const;
		void notifySession2Created(android::media::Session2Token arg0) const;
		void removeOnActiveSessionsChangedListener(JObject arg0) const;
		void removeOnSession2TokensChangedListener(JObject arg0) const;
	};
} // namespace android::media::session

