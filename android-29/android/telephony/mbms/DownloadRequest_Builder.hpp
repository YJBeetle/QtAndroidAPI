#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST_BUILDER
#define ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telephony::mbms
{
	class DownloadRequest;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telephony::mbms
{
	class FileServiceInfo;
}

namespace __jni_impl::android::telephony::mbms
{
	class DownloadRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::net::Uri arg1);
		
		// Methods
		QAndroidJniObject build();
		static QAndroidJniObject fromDownloadRequest(__jni_impl::android::telephony::mbms::DownloadRequest arg0);
		static QAndroidJniObject fromSerializedRequest(jbyteArray arg0);
		QAndroidJniObject setSubscriptionId(jint arg0);
		QAndroidJniObject setAppIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject setServiceInfo(__jni_impl::android::telephony::mbms::FileServiceInfo arg0);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../net/Uri.hpp"
#include "DownloadRequest.hpp"
#include "../../content/Intent.hpp"
#include "FileServiceInfo.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void DownloadRequest_Builder::__constructor(__jni_impl::android::net::Uri arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadRequest$Builder",
			"(Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DownloadRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/mbms/DownloadRequest;");
	}
	QAndroidJniObject DownloadRequest_Builder::fromDownloadRequest(__jni_impl::android::telephony::mbms::DownloadRequest arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromDownloadRequest",
			"(Landroid/telephony/mbms/DownloadRequest;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DownloadRequest_Builder::fromSerializedRequest(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromSerializedRequest",
			"([B)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0);
	}
	QAndroidJniObject DownloadRequest_Builder::setSubscriptionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0);
	}
	QAndroidJniObject DownloadRequest_Builder::setAppIntent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setAppIntent",
			"(Landroid/content/Intent;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DownloadRequest_Builder::setServiceInfo(__jni_impl::android::telephony::mbms::FileServiceInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceInfo",
			"(Landroid/telephony/mbms/FileServiceInfo;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class DownloadRequest_Builder : public __jni_impl::android::telephony::mbms::DownloadRequest_Builder
	{
	public:
		DownloadRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		DownloadRequest_Builder(__jni_impl::android::net::Uri arg0, __jni_impl::android::net::Uri arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_DOWNLOADREQUEST_BUILDER

