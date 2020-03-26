#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER
#define ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER

#include "../../../__JniBaseClass.hpp"
#include "../../content/BroadcastReceiver.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::telephony::mbms
{
	class MbmsDownloadReceiver : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void MbmsDownloadReceiver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsDownloadReceiver",
			"()V");
	}
	
	// Methods
	void MbmsDownloadReceiver::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsDownloadReceiver : public __jni_impl::android::telephony::mbms::MbmsDownloadReceiver
	{
	public:
		MbmsDownloadReceiver(QAndroidJniObject obj) { __thiz = obj; }
		MbmsDownloadReceiver()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSDOWNLOADRECEIVER

