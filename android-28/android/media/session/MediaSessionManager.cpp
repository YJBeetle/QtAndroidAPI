#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./MediaSessionManager_RemoteUserInfo.hpp"
#include "../../os/Handler.hpp"
#include "./MediaSessionManager.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSessionManager::MediaSessionManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaSessionManager::addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSessionManager::addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject MediaSessionManager::getActiveSessions(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getActiveSessions",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jboolean MediaSessionManager::isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0) const
	{
		return callMethod<jboolean>(
			"isTrustedForMediaControl",
			"(Landroid/media/session/MediaSessionManager$RemoteUserInfo;)Z",
			arg0.object()
		);
	}
	void MediaSessionManager::removeOnActiveSessionsChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

