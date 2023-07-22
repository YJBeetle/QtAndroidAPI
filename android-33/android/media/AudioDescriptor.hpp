#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioDescriptor.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AudioDescriptor::STANDARD_EDID()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_EDID"
		);
	}
	inline jint AudioDescriptor::STANDARD_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray AudioDescriptor::getDescriptor() const
	{
		return callObjectMethod(
			"getDescriptor",
			"()[B"
		);
	}
	inline jint AudioDescriptor::getEncapsulationType() const
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	inline jint AudioDescriptor::getStandard() const
	{
		return callMethod<jint>(
			"getStandard",
			"()I"
		);
	}
	inline jint AudioDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
