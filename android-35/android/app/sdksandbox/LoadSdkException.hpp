#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JThrowable.hpp"
#include "./LoadSdkException.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	inline JObject LoadSdkException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.LoadSdkException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LoadSdkException::LoadSdkException(JThrowable arg0, android::os::Bundle arg1)
		: java::lang::Exception(
			"android.app.sdksandbox.LoadSdkException",
			"(Ljava/lang/Throwable;Landroid/os/Bundle;)V",
			arg0.object<jthrowable>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint LoadSdkException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle LoadSdkException::getExtraInformation() const
	{
		return callObjectMethod(
			"getExtraInformation",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint LoadSdkException::getLoadSdkErrorCode() const
	{
		return callMethod<jint>(
			"getLoadSdkErrorCode",
			"()I"
		);
	}
	inline void LoadSdkException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::sdksandbox

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif
