#pragma once

#ifndef ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION_BUILDER
#define ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION_BUILDER

#include "../../../__JniBaseClass.hpp"

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
	class PlaybackState_CustomAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::media::session

#include "PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void PlaybackState_CustomAction_Builder::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject PlaybackState_CustomAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState$CustomAction;"
		);
	}
	QAndroidJniObject PlaybackState_CustomAction_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$CustomAction$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class PlaybackState_CustomAction_Builder : public __jni_impl::android::media::session::PlaybackState_CustomAction_Builder
	{
	public:
		PlaybackState_CustomAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PlaybackState_CustomAction_Builder(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION_BUILDER

