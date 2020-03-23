#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER
#define ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class Session2Token;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}

namespace __jni_impl::android::media::session
{
	class MediaSessionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void notifySession2Created(__jni_impl::android::media::Session2Token arg0);
		QAndroidJniObject getActiveSessions(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getSession2Tokens();
		void addOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Handler arg2);
		void addOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ComponentName arg1);
		void removeOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0);
		void addOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void addOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0);
		void removeOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean isTrustedForMediaControl(__jni_impl::android::media::session::MediaSessionManager_RemoteUserInfo arg0);
	};
} // namespace __jni_impl::android::media::session

#include "../../content/Context.hpp"
#include "../Session2Token.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Handler.hpp"
#include "MediaSessionManager_RemoteUserInfo.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaSessionManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSessionManager",
			"(V)V");
	}
	
	// Methods
	void MediaSessionManager::notifySession2Created(__jni_impl::android::media::Session2Token arg0)
	{
		__thiz.callMethod<void>(
			"notifySession2Created",
			"(Landroid/media/Session2Token;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaSessionManager::getActiveSessions(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveSessions",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaSessionManager::getSession2Tokens()
	{
		return __thiz.callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;");
	}
	void MediaSessionManager::addOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MediaSessionManager::addOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ComponentName arg1)
	{
		__thiz.callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaSessionManager::removeOnActiveSessionsChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaSessionManager::addOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaSessionManager::removeOnSession2TokensChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.__jniObject().object());
	}
	jboolean MediaSessionManager::isTrustedForMediaControl(__jni_impl::android::media::session::MediaSessionManager_RemoteUserInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTrustedForMediaControl",
			"(Landroid/media/session/MediaSessionManager$RemoteUserInfo;)Z",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaSessionManager : public __jni_impl::android::media::session::MediaSessionManager
	{
	public:
		MediaSessionManager(QAndroidJniObject obj) { __thiz = obj; }
		MediaSessionManager()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER

