#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../os/SharedMemory.def.hpp"
#include "../../../JString.hpp"
#include "./AdBuffer.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject AdBuffer::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.AdBuffer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AdBuffer::AdBuffer(jint arg0, JString arg1, android::os::SharedMemory arg2, jint arg3, jint arg4, jlong arg5, jint arg6)
		: JObject(
			"android.media.tv.AdBuffer",
			"(ILjava/lang/String;Landroid/os/SharedMemory;IIJI)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	inline jint AdBuffer::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AdBuffer::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jint AdBuffer::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint AdBuffer::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline JString AdBuffer::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline jint AdBuffer::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jlong AdBuffer::getPresentationTimeUs() const
	{
		return callMethod<jlong>(
			"getPresentationTimeUs",
			"()J"
		);
	}
	inline android::os::SharedMemory AdBuffer::getSharedMemory() const
	{
		return callObjectMethod(
			"getSharedMemory",
			"()Landroid/os/SharedMemory;"
		);
	}
	inline void AdBuffer::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
