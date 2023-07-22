#pragma once

#include "./Parcel.def.hpp"
#include "./ParcelFileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./SharedMemory.def.hpp"

namespace android::os
{
	// Fields
	inline JObject SharedMemory::CREATOR()
	{
		return getStaticObjectField(
			"android.os.SharedMemory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::SharedMemory SharedMemory::create(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.SharedMemory",
			"create",
			"(Ljava/lang/String;I)Landroid/os/SharedMemory;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::os::SharedMemory SharedMemory::fromFileDescriptor(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.os.SharedMemory",
			"fromFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/os/SharedMemory;",
			arg0.object()
		);
	}
	inline void SharedMemory::unmap(java::nio::ByteBuffer arg0)
	{
		callStaticMethod<void>(
			"android.os.SharedMemory",
			"unmap",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void SharedMemory::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint SharedMemory::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SharedMemory::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	inline java::nio::ByteBuffer SharedMemory::map(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"map",
			"(III)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	inline java::nio::ByteBuffer SharedMemory::mapReadOnly() const
	{
		return callObjectMethod(
			"mapReadOnly",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ByteBuffer SharedMemory::mapReadWrite() const
	{
		return callObjectMethod(
			"mapReadWrite",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jboolean SharedMemory::setProtect(jint arg0) const
	{
		return callMethod<jboolean>(
			"setProtect",
			"(I)Z",
			arg0
		);
	}
	inline void SharedMemory::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
