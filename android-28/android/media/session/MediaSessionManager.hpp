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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSessionManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSessionManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1);
		void addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1, android::os::Handler arg2);
		__JniBaseClass getActiveSessions(android::content::ComponentName arg0);
		jboolean isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0);
		void removeOnActiveSessionsChangedListener(__JniBaseClass arg0);
	};
} // namespace android::media::session

