#pragma once

#ifndef ANDROID_MEDIA_TV_TVRECORDINGCLIENT_RECORDINGCALLBACK
#define ANDROID_MEDIA_TV_TVRECORDINGCLIENT_RECORDINGCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
{
	class TvRecordingClient_RecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(jint arg0);
		void onRecordingStopped(__jni_impl::android::net::Uri arg0);
		void onTuned(__jni_impl::android::net::Uri arg0);
		void onDisconnected(jstring arg0);
		void onDisconnected(const QString &arg0);
		void onConnectionFailed(jstring arg0);
		void onConnectionFailed(const QString &arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvRecordingClient_RecordingCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient$RecordingCallback",
			"()V"
		);
	}
	
	// Methods
	void TvRecordingClient_RecordingCallback::onError(jint arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onRecordingStopped(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvRecordingClient_RecordingCallback::onTuned(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onTuned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvRecordingClient_RecordingCallback::onDisconnected(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onDisconnected(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TvRecordingClient_RecordingCallback::onConnectionFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onConnectionFailed(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvRecordingClient_RecordingCallback : public __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback
	{
	public:
		TvRecordingClient_RecordingCallback(QAndroidJniObject obj) { __thiz = obj; }
		TvRecordingClient_RecordingCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVRECORDINGCLIENT_RECORDINGCALLBACK

