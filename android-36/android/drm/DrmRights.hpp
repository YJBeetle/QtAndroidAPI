#pragma once

#include "../../JByteArray.hpp"
#include "./ProcessedData.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JString.hpp"
#include "./DrmRights.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	inline DrmRights::DrmRights(android::drm::ProcessedData arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline DrmRights::DrmRights(java::io::File arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline DrmRights::DrmRights(JString arg0, JString arg1)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline DrmRights::DrmRights(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	inline DrmRights::DrmRights(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline JString DrmRights::getAccountId() const
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray DrmRights::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline JString DrmRights::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline JString DrmRights::getSubscriptionId() const
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
