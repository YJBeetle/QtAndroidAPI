#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./DownloadRequest.hpp"
#include "./FileServiceInfo.hpp"
#include "./DownloadRequest_Builder.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	DownloadRequest_Builder::DownloadRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DownloadRequest_Builder::DownloadRequest_Builder(android::net::Uri arg0, android::net::Uri arg1)
		: JObject(
			"android.telephony.mbms.DownloadRequest$Builder",
			"(Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::telephony::mbms::DownloadRequest_Builder DownloadRequest_Builder::fromDownloadRequest(android::telephony::mbms::DownloadRequest arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromDownloadRequest",
			"(Landroid/telephony/mbms/DownloadRequest;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.object()
		);
	}
	android::telephony::mbms::DownloadRequest_Builder DownloadRequest_Builder::fromSerializedRequest(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.mbms.DownloadRequest$Builder",
			"fromSerializedRequest",
			"([B)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0
		);
	}
	android::telephony::mbms::DownloadRequest DownloadRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/mbms/DownloadRequest;"
		);
	}
	android::telephony::mbms::DownloadRequest_Builder DownloadRequest_Builder::setAppIntent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"setAppIntent",
			"(Landroid/content/Intent;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.object()
		);
	}
	android::telephony::mbms::DownloadRequest_Builder DownloadRequest_Builder::setServiceInfo(android::telephony::mbms::FileServiceInfo arg0)
	{
		return callObjectMethod(
			"setServiceInfo",
			"(Landroid/telephony/mbms/FileServiceInfo;)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0.object()
		);
	}
	android::telephony::mbms::DownloadRequest_Builder DownloadRequest_Builder::setSubscriptionId(jint arg0)
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/telephony/mbms/DownloadRequest$Builder;",
			arg0
		);
	}
} // namespace android::telephony::mbms

