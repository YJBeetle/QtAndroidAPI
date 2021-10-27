#pragma once

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
	class DownloadStatusListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStatusUpdated(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1, jint arg2);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "./DownloadRequest.hpp"
#include "./FileInfo.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void DownloadStatusListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadStatusListener",
			"()V"
		);
	}
	
	// Methods
	void DownloadStatusListener::onStatusUpdated(__jni_impl::android::telephony::mbms::DownloadRequest arg0, __jni_impl::android::telephony::mbms::FileInfo arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onStatusUpdated",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class DownloadStatusListener : public __jni_impl::android::telephony::mbms::DownloadStatusListener
	{
	public:
		DownloadStatusListener(QAndroidJniObject obj) { __thiz = obj; }
		DownloadStatusListener()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

