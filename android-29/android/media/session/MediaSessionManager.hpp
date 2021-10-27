#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
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
	class MediaSessionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSessionManager(QAndroidJniObject obj);
		// Constructors
		MediaSessionManager() = default;
		
		// Methods
		void addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1);
		void addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1, android::os::Handler arg2);
		void addOnSession2TokensChangedListener(__JniBaseClass arg0);
		void addOnSession2TokensChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		QAndroidJniObject getActiveSessions(android::content::ComponentName arg0);
		QAndroidJniObject getSession2Tokens();
		jboolean isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0);
		void notifySession2Created(android::media::Session2Token arg0);
		void removeOnActiveSessionsChangedListener(__JniBaseClass arg0);
		void removeOnSession2TokensChangedListener(__JniBaseClass arg0);
	};
} // namespace android::media::session

