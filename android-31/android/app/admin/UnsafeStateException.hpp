#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UnsafeStateException.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject UnsafeStateException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.UnsafeStateException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UnsafeStateException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString UnsafeStateException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JObject UnsafeStateException::getReasons() const
	{
		return callObjectMethod(
			"getReasons",
			"()Ljava/util/List;"
		);
	}
	inline void UnsafeStateException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/lang/IllegalStateException.hpp"

