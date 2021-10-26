#pragma once

#ifndef ANDROID_MEDIA_TV_TVRECORDINGCLIENT
#define ANDROID_MEDIA_TV_TVRECORDINGCLIENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media::tv
{
	class TvRecordingClient_RecordingCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
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
	class TvRecordingClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback arg2, __jni_impl::android::os::Handler arg3);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback arg2, __jni_impl::android::os::Handler arg3);
		
		// Methods
		void release();
		void startRecording(__jni_impl::android::net::Uri arg0);
		void tune(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
		void tune(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
		void tune(jstring arg0, __jni_impl::android::net::Uri arg1);
		void tune(const QString &arg0, __jni_impl::android::net::Uri arg1);
		void sendAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void sendAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void stopRecording();
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/Context.hpp"
#include "TvRecordingClient_RecordingCallback.hpp"
#include "../../os/Handler.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvRecordingClient::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TvRecordingClient::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void TvRecordingClient::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void TvRecordingClient::startRecording(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(const QString &arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::stopRecording()
	{
		__thiz.callMethod<void>(
			"stopRecording",
			"()V"
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvRecordingClient : public __jni_impl::android::media::tv::TvRecordingClient
	{
	public:
		TvRecordingClient(QAndroidJniObject obj) { __thiz = obj; }
		TvRecordingClient(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::media::tv::TvRecordingClient_RecordingCallback arg2, __jni_impl::android::os::Handler arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVRECORDINGCLIENT

