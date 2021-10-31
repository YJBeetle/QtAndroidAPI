#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "./DrmConvertedStatus.hpp"
#include "./DrmInfo.hpp"
#include "./DrmInfoRequest.hpp"
#include "./DrmRights.hpp"
#include "../net/Uri.hpp"
#include "./DrmManagerClient.hpp"

namespace android::drm
{
	// Fields
	jint DrmManagerClient::ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_NONE"
		);
	}
	jint DrmManagerClient::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_UNKNOWN"
		);
	}
	
	// QJniObject forward
	DrmManagerClient::DrmManagerClient(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmManagerClient::DrmManagerClient(android::content::Context arg0)
		: __JniBaseClass(
			"android.drm.DrmManagerClient",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::drm::DrmInfo DrmManagerClient::acquireDrmInfo(android::drm::DrmInfoRequest arg0)
	{
		return callObjectMethod(
			"acquireDrmInfo",
			"(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;",
			arg0.object()
		);
	}
	jint DrmManagerClient::acquireRights(android::drm::DrmInfoRequest arg0)
	{
		return callMethod<jint>(
			"acquireRights",
			"(Landroid/drm/DrmInfoRequest;)I",
			arg0.object()
		);
	}
	jboolean DrmManagerClient::canHandle(android::net::Uri arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean DrmManagerClient::canHandle(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint DrmManagerClient::checkRightsStatus(jstring arg0)
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint DrmManagerClient::checkRightsStatus(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	void DrmManagerClient::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::drm::DrmConvertedStatus DrmManagerClient::closeConvertSession(jint arg0)
	{
		return callObjectMethod(
			"closeConvertSession",
			"(I)Landroid/drm/DrmConvertedStatus;",
			arg0
		);
	}
	android::drm::DrmConvertedStatus DrmManagerClient::convertData(jint arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"convertData",
			"(I[B)Landroid/drm/DrmConvertedStatus;",
			arg0,
			arg1
		);
	}
	jarray DrmManagerClient::getAvailableDrmEngines()
	{
		return callObjectMethod(
			"getAvailableDrmEngines",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	__JniBaseClass DrmManagerClient::getAvailableDrmSupportInfo()
	{
		return callObjectMethod(
			"getAvailableDrmSupportInfo",
			"()Ljava/util/Collection;"
		);
	}
	android::content::ContentValues DrmManagerClient::getConstraints(android::net::Uri arg0, jint arg1)
	{
		return callObjectMethod(
			"getConstraints",
			"(Landroid/net/Uri;I)Landroid/content/ContentValues;",
			arg0.object(),
			arg1
		);
	}
	android::content::ContentValues DrmManagerClient::getConstraints(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getConstraints",
			"(Ljava/lang/String;I)Landroid/content/ContentValues;",
			arg0,
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(android::net::Uri arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.object(),
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	android::content::ContentValues DrmManagerClient::getMetadata(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getMetadata",
			"(Landroid/net/Uri;)Landroid/content/ContentValues;",
			arg0.object()
		);
	}
	android::content::ContentValues DrmManagerClient::getMetadata(jstring arg0)
	{
		return callObjectMethod(
			"getMetadata",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0
		);
	}
	jstring DrmManagerClient::getOriginalMimeType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring DrmManagerClient::getOriginalMimeType(jstring arg0)
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint DrmManagerClient::openConvertSession(jstring arg0)
	{
		return callMethod<jint>(
			"openConvertSession",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::processDrmInfo(android::drm::DrmInfo arg0)
	{
		return callMethod<jint>(
			"processDrmInfo",
			"(Landroid/drm/DrmInfo;)I",
			arg0.object()
		);
	}
	void DrmManagerClient::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jint DrmManagerClient::removeAllRights()
	{
		return callMethod<jint>(
			"removeAllRights",
			"()I"
		);
	}
	jint DrmManagerClient::removeRights(android::net::Uri arg0)
	{
		return callMethod<jint>(
			"removeRights",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint DrmManagerClient::removeRights(jstring arg0)
	{
		return callMethod<jint>(
			"removeRights",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DrmManagerClient::saveRights(android::drm::DrmRights arg0, jstring arg1, jstring arg2)
	{
		return callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void DrmManagerClient::setOnErrorListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/drm/DrmManagerClient$OnErrorListener;)V",
			arg0.object()
		);
	}
	void DrmManagerClient::setOnEventListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/drm/DrmManagerClient$OnEventListener;)V",
			arg0.object()
		);
	}
	void DrmManagerClient::setOnInfoListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/drm/DrmManagerClient$OnInfoListener;)V",
			arg0.object()
		);
	}
} // namespace android::drm

