#pragma once

#include "./DownloadCompletedOutput.def.hpp"
#include "../../../JString.hpp"
#include "./DownloadCompletedOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline DownloadCompletedOutput_Builder::DownloadCompletedOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.DownloadCompletedOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::DownloadCompletedOutput_Builder DownloadCompletedOutput_Builder::addRetainedKey(JString arg0) const
	{
		return callObjectMethod(
			"addRetainedKey",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/DownloadCompletedOutput$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::ondevicepersonalization::DownloadCompletedOutput DownloadCompletedOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/DownloadCompletedOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::DownloadCompletedOutput_Builder DownloadCompletedOutput_Builder::setRetainedKeys(JObject arg0) const
	{
		return callObjectMethod(
			"setRetainedKeys",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/DownloadCompletedOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
