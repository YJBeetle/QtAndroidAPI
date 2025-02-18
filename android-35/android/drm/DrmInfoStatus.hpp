#pragma once

#include "./ProcessedData.def.hpp"
#include "../../JString.hpp"
#include "./DrmInfoStatus.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmInfoStatus::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_ERROR"
		);
	}
	inline jint DrmInfoStatus::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoStatus",
			"STATUS_OK"
		);
	}
	inline android::drm::ProcessedData DrmInfoStatus::data()
	{
		return getObjectField(
			"data",
			"Landroid/drm/ProcessedData;"
		);
	}
	inline jint DrmInfoStatus::infoType()
	{
		return getField<jint>(
			"infoType"
		);
	}
	inline JString DrmInfoStatus::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		);
	}
	inline jint DrmInfoStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// Constructors
	inline DrmInfoStatus::DrmInfoStatus(jint arg0, jint arg1, android::drm::ProcessedData arg2, JString arg3)
		: JObject(
			"android.drm.DrmInfoStatus",
			"(IILandroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
