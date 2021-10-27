#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../Session2Token.hpp"
#include "./MediaSessionManager_RemoteUserInfo.hpp"
#include "../../os/Handler.hpp"
#include "./MediaSessionManager.hpp"

namespace android::media::session
{
	// Fields
	
	MediaSessionManager::MediaSessionManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaSessionManager::addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1)
	{
		__thiz.callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSessionManager::addOnActiveSessionsChangedListener(__JniBaseClass arg0, android::content::ComponentName arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSessionManager::getActiveSessions(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveSessions",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSessionManager::getSession2Tokens()
	{
		return __thiz.callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	jboolean MediaSessionManager::isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTrustedForMediaControl",
			"(Landroid/media/session/MediaSessionManager$RemoteUserInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaSessionManager::notifySession2Created(android::media::Session2Token arg0)
	{
		__thiz.callMethod<void>(
			"notifySession2Created",
			"(Landroid/media/Session2Token;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSessionManager::removeOnActiveSessionsChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSessionManager::removeOnSession2TokensChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::session

