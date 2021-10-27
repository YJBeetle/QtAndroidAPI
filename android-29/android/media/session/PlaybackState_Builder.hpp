#pragma once

#ifndef ANDROID_MEDIA_SESSION_PLAYBACKSTATE_BUILDER
#define ANDROID_MEDIA_SESSION_PLAYBACKSTATE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::session
{
	class PlaybackState;
}
namespace __jni_impl::android::media::session
{
	class PlaybackState_CustomAction;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::session
{
	class PlaybackState_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::session::PlaybackState arg0);
		
		// Methods
		QAndroidJniObject addCustomAction(__jni_impl::android::media::session::PlaybackState_CustomAction arg0);
		QAndroidJniObject addCustomAction(jstring arg0, jstring arg1, jint arg2);
		QAndroidJniObject addCustomAction(const QString &arg0, const QString &arg1, jint arg2);
		QAndroidJniObject build();
		QAndroidJniObject setActions(jlong arg0);
		QAndroidJniObject setActiveQueueItemId(jlong arg0);
		QAndroidJniObject setBufferedPosition(jlong arg0);
		QAndroidJniObject setErrorMessage(jstring arg0);
		QAndroidJniObject setErrorMessage(const QString &arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setState(jint arg0, jlong arg1, jfloat arg2);
		QAndroidJniObject setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3);
	};
} // namespace __jni_impl::android::media::session

#include "PlaybackState.hpp"
#include "PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void PlaybackState_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$Builder",
			"()V"
		);
	}
	void PlaybackState_Builder::__constructor(__jni_impl::android::media::session::PlaybackState arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$Builder",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PlaybackState_Builder::addCustomAction(__jni_impl::android::media::session::PlaybackState_CustomAction arg0)
	{
		return __thiz.callObjectMethod(
			"addCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;)Landroid/media/session/PlaybackState$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PlaybackState_Builder::addCustomAction(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"addCustomAction",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PlaybackState_Builder::addCustomAction(const QString &arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"addCustomAction",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/media/session/PlaybackState$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject PlaybackState_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	QAndroidJniObject PlaybackState_Builder::setActions(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setActions",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setActiveQueueItemId(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setActiveQueueItemId",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setBufferedPosition(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setBufferedPosition",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setErrorMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setErrorMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setErrorMessage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setErrorMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/session/PlaybackState$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PlaybackState_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"setState",
			"(IJF)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3)
	{
		return __thiz.callObjectMethod(
			"setState",
			"(IJFJ)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class PlaybackState_Builder : public __jni_impl::android::media::session::PlaybackState_Builder
	{
	public:
		PlaybackState_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PlaybackState_Builder()
		{
			__constructor();
		}
		PlaybackState_Builder(__jni_impl::android::media::session::PlaybackState arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_PLAYBACKSTATE_BUILDER

