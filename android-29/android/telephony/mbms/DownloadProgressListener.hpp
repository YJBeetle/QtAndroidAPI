#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_DOWNLOADPROGRESSLISTENER
#define ANDROID_TELEPHONY_MBMS_DOWNLOADPROGRESSLISTENER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony::mbms
{
	class DownloadRequest;
}
namespace __jni_impl::android::telephony::mbms
{
	class FileInfo;
}

namespace __jni_impl::android::telephony::mbms
{
	class DownloadProgressListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onProgressUpdated(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "DownloadRequest.hpp"
#include "FileInfo.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void DownloadProgressListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadProgressListener",
			"()V"
		);
	}
	
	// Methods
	void DownloadProgressListener::onProgressUpdated(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onProgressUpdated",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;IIII)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class DownloadProgressListener : public __jni_impl::android::telephony::mbms::DownloadProgressListener
	{
	public:
		DownloadProgressListener(QAndroidJniObject obj) { __thiz = obj; }
		DownloadProgressListener()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_DOWNLOADPROGRESSLISTENER

