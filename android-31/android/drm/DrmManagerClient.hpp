#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/ContentValues.def.hpp"
#include "../content/Context.def.hpp"
#include "./DrmConvertedStatus.def.hpp"
#include "./DrmInfo.def.hpp"
#include "./DrmInfoRequest.def.hpp"
#include "./DrmRights.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./DrmManagerClient.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmManagerClient::ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_NONE"
		);
	}
	inline jint DrmManagerClient::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.drm.DrmManagerClient",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	inline DrmManagerClient::DrmManagerClient(android::content::Context arg0)
		: JObject(
			"android.drm.DrmManagerClient",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::drm::DrmInfo DrmManagerClient::acquireDrmInfo(android::drm::DrmInfoRequest arg0) const
	{
		return callObjectMethod(
			"acquireDrmInfo",
			"(Landroid/drm/DrmInfoRequest;)Landroid/drm/DrmInfo;",
			arg0.object()
		);
	}
	inline jint DrmManagerClient::acquireRights(android::drm::DrmInfoRequest arg0) const
	{
		return callMethod<jint>(
			"acquireRights",
			"(Landroid/drm/DrmInfoRequest;)I",
			arg0.object()
		);
	}
	inline jboolean DrmManagerClient::canHandle(android::net::Uri arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean DrmManagerClient::canHandle(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"canHandle",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline jint DrmManagerClient::checkRightsStatus(JString arg0) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint DrmManagerClient::checkRightsStatus(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint DrmManagerClient::checkRightsStatus(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkRightsStatus",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void DrmManagerClient::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::drm::DrmConvertedStatus DrmManagerClient::closeConvertSession(jint arg0) const
	{
		return callObjectMethod(
			"closeConvertSession",
			"(I)Landroid/drm/DrmConvertedStatus;",
			arg0
		);
	}
	inline android::drm::DrmConvertedStatus DrmManagerClient::convertData(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"convertData",
			"(I[B)Landroid/drm/DrmConvertedStatus;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline JArray DrmManagerClient::getAvailableDrmEngines() const
	{
		return callObjectMethod(
			"getAvailableDrmEngines",
			"()[Ljava/lang/String;"
		);
	}
	inline JObject DrmManagerClient::getAvailableDrmSupportInfo() const
	{
		return callObjectMethod(
			"getAvailableDrmSupportInfo",
			"()Ljava/util/Collection;"
		);
	}
	inline android::content::ContentValues DrmManagerClient::getConstraints(android::net::Uri arg0, jint arg1) const
	{
		return callObjectMethod(
			"getConstraints",
			"(Landroid/net/Uri;I)Landroid/content/ContentValues;",
			arg0.object(),
			arg1
		);
	}
	inline android::content::ContentValues DrmManagerClient::getConstraints(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getConstraints",
			"(Ljava/lang/String;I)Landroid/content/ContentValues;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint DrmManagerClient::getDrmObjectType(android::net::Uri arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Landroid/net/Uri;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint DrmManagerClient::getDrmObjectType(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getDrmObjectType",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::content::ContentValues DrmManagerClient::getMetadata(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getMetadata",
			"(Landroid/net/Uri;)Landroid/content/ContentValues;",
			arg0.object()
		);
	}
	inline android::content::ContentValues DrmManagerClient::getMetadata(JString arg0) const
	{
		return callObjectMethod(
			"getMetadata",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0.object<jstring>()
		);
	}
	inline JString DrmManagerClient::getOriginalMimeType(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString DrmManagerClient::getOriginalMimeType(JString arg0) const
	{
		return callObjectMethod(
			"getOriginalMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint DrmManagerClient::openConvertSession(JString arg0) const
	{
		return callMethod<jint>(
			"openConvertSession",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint DrmManagerClient::processDrmInfo(android::drm::DrmInfo arg0) const
	{
		return callMethod<jint>(
			"processDrmInfo",
			"(Landroid/drm/DrmInfo;)I",
			arg0.object()
		);
	}
	inline void DrmManagerClient::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jint DrmManagerClient::removeAllRights() const
	{
		return callMethod<jint>(
			"removeAllRights",
			"()I"
		);
	}
	inline jint DrmManagerClient::removeRights(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"removeRights",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline jint DrmManagerClient::removeRights(JString arg0) const
	{
		return callMethod<jint>(
			"removeRights",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint DrmManagerClient::saveRights(android::drm::DrmRights arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"saveRights",
			"(Landroid/drm/DrmRights;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void DrmManagerClient::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/drm/DrmManagerClient$OnErrorListener;)V",
			arg0.object()
		);
	}
	inline void DrmManagerClient::setOnEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnEventListener",
			"(Landroid/drm/DrmManagerClient$OnEventListener;)V",
			arg0.object()
		);
	}
	inline void DrmManagerClient::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/drm/DrmManagerClient$OnInfoListener;)V",
			arg0.object()
		);
	}
} // namespace android::drm

// Base class headers

