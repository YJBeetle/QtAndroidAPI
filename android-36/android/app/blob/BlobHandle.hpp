#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./BlobHandle.def.hpp"

namespace android::app::blob
{
	// Fields
	inline JObject BlobHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.app.blob.BlobHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::blob::BlobHandle BlobHandle::createWithSha256(JByteArray arg0, JString arg1, jlong arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.app.blob.BlobHandle",
			"createWithSha256",
			"([BLjava/lang/CharSequence;JLjava/lang/String;)Landroid/app/blob/BlobHandle;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		);
	}
	inline jint BlobHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BlobHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong BlobHandle::getExpiryTimeMillis() const
	{
		return callMethod<jlong>(
			"getExpiryTimeMillis",
			"()J"
		);
	}
	inline JString BlobHandle::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JByteArray BlobHandle::getSha256Digest() const
	{
		return callObjectMethod(
			"getSha256Digest",
			"()[B"
		);
	}
	inline JString BlobHandle::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline jint BlobHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BlobHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BlobHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::blob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::blob;
#endif
