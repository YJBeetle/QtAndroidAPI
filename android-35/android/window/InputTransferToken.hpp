#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./InputTransferToken.def.hpp"

namespace android::window
{
	// Fields
	inline JObject InputTransferToken::CREATOR()
	{
		return getStaticObjectField(
			"android.window.InputTransferToken",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InputTransferToken::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InputTransferToken::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint InputTransferToken::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void InputTransferToken::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::window

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
