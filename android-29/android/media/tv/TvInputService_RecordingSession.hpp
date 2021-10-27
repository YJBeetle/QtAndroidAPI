#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION
#define ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::tv
{
	class TvInputService_RecordingSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void notifyError(jint arg0);
		void notifyRecordingStopped(__jni_impl::android::net::Uri arg0);
		void notifyTuned(__jni_impl::android::net::Uri arg0);
		void onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onRelease();
		void onStartRecording(__jni_impl::android::net::Uri arg0);
		void onStopRecording();
		void onTune(__jni_impl::android::net::Uri arg0);
		void onTune(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvInputService_RecordingSession::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService$RecordingSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void TvInputService_RecordingSession::notifyError(jint arg0)
	{
		__thiz.callMethod<void>(
			"notifyError",
			"(I)V",
			arg0
		);
	}
	void TvInputService_RecordingSession::notifyRecordingStopped(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"notifyRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::notifyTuned(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"notifyTuned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onStartRecording(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onStopRecording()
	{
		__thiz.callMethod<void>(
			"onStopRecording",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onTune(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onTune(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputService_RecordingSession : public __jni_impl::android::media::tv::TvInputService_RecordingSession
	{
	public:
		TvInputService_RecordingSession(QAndroidJniObject obj) { __thiz = obj; }
		TvInputService_RecordingSession(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION

