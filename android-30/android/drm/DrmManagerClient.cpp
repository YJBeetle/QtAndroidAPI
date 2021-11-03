#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "./DrmConvertedStatus.hpp"
#include "./DrmInfo.hpp"
#include "./DrmInfoRequest.hpp"
#include "./DrmRights.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
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
	
	// QAndroidJniObject forward
	DrmManagerClient::DrmManagerClient(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmManagerClient::DrmManagerClient(android::content::Context arg0)
		: JObject(
			"android.drm.DrmManagerClient",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::drm::DrmInfo DrmManagerClient::acquireDrmInfo(android::drm::DrmInfoRequest arg0) const
	{
		return callObjectMethod(
			"acquireDrmInfo",
			"(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;",
			arg0.object()
		);
	}
	jint DrmManagerClient::acquireRights(android::drm::DrmInfoRequest arg0) const
	{
		return callMethod<jint>(
			"acquireRights",
			"(Landroid/drm/DrmInfoRequest;)I",
			arg0.object()
		);
	}
	jboolean DrmManagerClient::canHandle(android::net::Uri arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DrmManagerClient::canHandle(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint DrmManagerClient::checkRightsStatus(JString arg0) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint DrmManagerClient::checkRightsStatus(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	void DrmManagerClient::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::drm::DrmConvertedStatus DrmManagerClient::closeConvertSession(jint arg0) const
	{
		return callObjectMethod(
			"closeConvertSession",
			"(I)Landroid/drm/DrmConvertedStatus;",
			arg0
		);
	}
	android::drm::DrmConvertedStatus DrmManagerClient::convertData(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"convertData",
			"(I[B)Landroid/drm/DrmConvertedStatus;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	JArray DrmManagerClient::getAvailableDrmEngines() const
	{
		return callObjectMethod(
			"getAvailableDrmEngines",
			"()[Ljava/lang/String;"
		);
	}
	JObject DrmManagerClient::getAvailableDrmSupportInfo() const
	{
		return callObjectMethod(
			"getAvailableDrmSupportInfo",
			"()Ljava/util/Collection;"
		);
	}
	android::content::ContentValues DrmManagerClient::getConstraints(android::net::Uri arg0, jint arg1) const
	{
		return callObjectMethod(
			"getConstraints",
			"(Landroid/net/Uri;I)Landroid/content/ContentValues;",
			arg0.object(),
			arg1
		);
	}
	android::content::ContentValues DrmManagerClient::getConstraints(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getConstraints",
			"(Ljava/lang/String;I)Landroid/content/ContentValues;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint DrmManagerClient::getDrmObjectType(android::net::Uri arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint DrmManagerClient::getDrmObjectType(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::content::ContentValues DrmManagerClient::getMetadata(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getMetadata",
			"(Landroid/net/Uri;)Landroid/content/ContentValues;",
			arg0.object()
		);
	}
	android::content::ContentValues DrmManagerClient::getMetadata(JString arg0) const
	{
		return callObjectMethod(
			"getMetadata",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0.object<jstring>()
		);
	}
	JString DrmManagerClient::getOriginalMimeType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString DrmManagerClient::getOriginalMimeType(JString arg0) const
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint DrmManagerClient::openConvertSession(JString arg0) const
	{
		return callMethod<jint>(
			"openConvertSession",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint DrmManagerClient::processDrmInfo(android::drm::DrmInfo arg0) const
	{
		return callMethod<jint>(
			"processDrmInfo",
			"(Landroid/drm/DrmInfo;)I",
			arg0.object()
		);
	}
	void DrmManagerClient::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jint DrmManagerClient::removeAllRights() const
	{
		return callMethod<jint>(
			"removeAllRights",
			"()I"
		);
	}
	jint DrmManagerClient::removeRights(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"removeRights",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	jint DrmManagerClient::removeRights(JString arg0) const
	{
		return callMethod<jint>(
			"removeRights",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint DrmManagerClient::saveRights(android::drm::DrmRights arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DrmManagerClient::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/drm/DrmManagerClient$OnErrorListener;)V",
			arg0.object()
		);
	}
	void DrmManagerClient::setOnEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/drm/DrmManagerClient$OnEventListener;)V",
			arg0.object()
		);
	}
	void DrmManagerClient::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/drm/DrmManagerClient$OnInfoListener;)V",
			arg0.object()
		);
	}
} // namespace android::drm

