#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Tag.def.hpp"

namespace android::nfc
{
	// Fields
	inline JObject Tag::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.Tag",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Tag::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray Tag::getId() const
	{
		return callObjectMethod(
			"getId",
			"()[B"
		);
	}
	inline JArray Tag::getTechList() const
	{
		return callObjectMethod(
			"getTechList",
			"()[Ljava/lang/String;"
		);
	}
	inline JString Tag::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Tag::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
