#pragma once

#include "../../../JByteArray.hpp"
#include "../../graphics/Rect.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./VerifiedDisplayHash.def.hpp"

namespace android::view::displayhash
{
	// Fields
	inline JObject VerifiedDisplayHash::CREATOR()
	{
		return getStaticObjectField(
			"android.view.displayhash.VerifiedDisplayHash",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline VerifiedDisplayHash::VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, JString arg2, JByteArray arg3)
		: JObject(
			"android.view.displayhash.VerifiedDisplayHash",
			"(JLandroid/graphics/Rect;Ljava/lang/String;[B)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint VerifiedDisplayHash::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::Rect VerifiedDisplayHash::getBoundsInWindow() const
	{
		return callObjectMethod(
			"getBoundsInWindow",
			"()Landroid/graphics/Rect;"
		);
	}
	inline JString VerifiedDisplayHash::getHashAlgorithm() const
	{
		return callObjectMethod(
			"getHashAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray VerifiedDisplayHash::getImageHash() const
	{
		return callObjectMethod(
			"getImageHash",
			"()[B"
		);
	}
	inline jlong VerifiedDisplayHash::getTimeMillis() const
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	inline JString VerifiedDisplayHash::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VerifiedDisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::displayhash;
#endif
