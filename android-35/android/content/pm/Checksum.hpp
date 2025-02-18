#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./Checksum.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject Checksum::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Checksum",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Checksum::TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256"
		);
	}
	inline jint Checksum::TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512"
		);
	}
	inline jint Checksum::TYPE_WHOLE_MD5()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_MD5"
		);
	}
	inline jint Checksum::TYPE_WHOLE_MERKLE_ROOT_4K_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_MERKLE_ROOT_4K_SHA256"
		);
	}
	inline jint Checksum::TYPE_WHOLE_SHA1()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA1"
		);
	}
	inline jint Checksum::TYPE_WHOLE_SHA256()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA256"
		);
	}
	inline jint Checksum::TYPE_WHOLE_SHA512()
	{
		return getStaticField<jint>(
			"android.content.pm.Checksum",
			"TYPE_WHOLE_SHA512"
		);
	}
	
	// Constructors
	inline Checksum::Checksum(jint arg0, JByteArray arg1)
		: JObject(
			"android.content.pm.Checksum",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint Checksum::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Checksum::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JByteArray Checksum::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	inline void Checksum::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
