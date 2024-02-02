#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RadioAccessSpecifier.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject RadioAccessSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.RadioAccessSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RadioAccessSpecifier::RadioAccessSpecifier(jint arg0, JIntArray arg1, JIntArray arg2)
		: JObject(
			"android.telephony.RadioAccessSpecifier",
			"(I[I[I)V",
			arg0,
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		) {}
	
	// Methods
	inline jint RadioAccessSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RadioAccessSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JIntArray RadioAccessSpecifier::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		);
	}
	inline JIntArray RadioAccessSpecifier::getChannels() const
	{
		return callObjectMethod(
			"getChannels",
			"()[I"
		);
	}
	inline jint RadioAccessSpecifier::getRadioAccessNetwork() const
	{
		return callMethod<jint>(
			"getRadioAccessNetwork",
			"()I"
		);
	}
	inline jint RadioAccessSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RadioAccessSpecifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RadioAccessSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
