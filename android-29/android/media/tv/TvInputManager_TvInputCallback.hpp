#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTMANAGER_TVINPUTCALLBACK
#define ANDROID_MEDIA_TV_TVINPUTMANAGER_TVINPUTCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::tv
{
	class TvInputInfo;
}

namespace __jni_impl::android::media::tv
{
	class TvInputManager_TvInputCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onInputStateChanged(jstring arg0, jint arg1);
		void onInputAdded(jstring arg0);
		void onInputRemoved(jstring arg0);
		void onInputUpdated(jstring arg0);
		void onTvInputInfoUpdated(__jni_impl::android::media::tv::TvInputInfo arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "TvInputInfo.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvInputManager_TvInputCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputManager$TvInputCallback",
			"()V");
	}
	
	// Methods
	void TvInputManager_TvInputCallback::onInputStateChanged(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onInputStateChanged",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void TvInputManager_TvInputCallback::onInputAdded(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputAdded",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TvInputManager_TvInputCallback::onInputRemoved(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputRemoved",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TvInputManager_TvInputCallback::onInputUpdated(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputUpdated",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TvInputManager_TvInputCallback::onTvInputInfoUpdated(__jni_impl::android::media::tv::TvInputInfo arg0)
	{
		__thiz.callMethod<void>(
			"onTvInputInfoUpdated",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputManager_TvInputCallback : public __jni_impl::android::media::tv::TvInputManager_TvInputCallback
	{
	public:
		TvInputManager_TvInputCallback(QAndroidJniObject obj) { __thiz = obj; }
		TvInputManager_TvInputCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTMANAGER_TVINPUTCALLBACK

