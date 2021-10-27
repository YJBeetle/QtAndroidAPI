#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./DownloadRequest.hpp"
#include "./FileServiceInfo.hpp"
#include "./DownloadRequest_Builder.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	DownloadRequest_Builder::DownloadRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DownloadRequest_Builder::DownloadRequest_Builder(android::net::Uri &arg0, android::net::Uri &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadRequest$Builder",
			"(Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DownloadRequest_Builder::fromDownloadRequest(android::telephony::mbms::DownloadRequest arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromDownloadRequest",
			"(Landroid/telephony/mbms/DownloadRequest;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DownloadRequest_Builder::fromSerializedRequest(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromSerializedRequest",
			"([B)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject DownloadRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/mbms/DownloadRequest;"
		);
	}
	QAndroidJniObject DownloadRequest_Builder::setAppIntent(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setAppIntent",
			"(Landroid/content/Intent;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DownloadRequest_Builder::setServiceInfo(android::telephony::mbms::FileServiceInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceInfo",
			"(Landroid/telephony/mbms/FileServiceInfo;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DownloadRequest_Builder::setSubscriptionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0
		);
	}
} // namespace android::telephony::mbms

