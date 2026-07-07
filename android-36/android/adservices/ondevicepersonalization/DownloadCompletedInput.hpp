#pragma once

#include "../../../JObject.hpp"
#include "./DownloadCompletedInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline DownloadCompletedInput::DownloadCompletedInput(JObject arg0)
		: JObject(
			"android.adservices.ondevicepersonalization.DownloadCompletedInput",
			"(Landroid/adservices/ondevicepersonalization/KeyValueStore;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean DownloadCompletedInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DownloadCompletedInput::getDownloadedContents() const
	{
		return callObjectMethod(
			"getDownloadedContents",
			"()Landroid/adservices/ondevicepersonalization/KeyValueStore;"
		);
	}
	inline jint DownloadCompletedInput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
