#include "./Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./SharedMemory.hpp"

namespace android::os
{
	// Fields
	JObject SharedMemory::CREATOR()
	{
		return getStaticObjectField(
			"android.os.SharedMemory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SharedMemory::SharedMemory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::SharedMemory SharedMemory::create(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.SharedMemory",
			"create",
			"(Ljava/lang/String;I)Landroid/os/SharedMemory;",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SharedMemory::unmap(java::nio::ByteBuffer arg0)
	{
		callStaticMethod<void>(
			"android.os.SharedMemory",
			"unmap",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void SharedMemory::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SharedMemory::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SharedMemory::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	java::nio::ByteBuffer SharedMemory::map(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"map",
			"(III)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer SharedMemory::mapReadOnly() const
	{
		return callObjectMethod(
			"mapReadOnly",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer SharedMemory::mapReadWrite() const
	{
		return callObjectMethod(
			"mapReadWrite",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jboolean SharedMemory::setProtect(jint arg0) const
	{
		return callMethod<jboolean>(
			"setProtect",
			"(I)Z",
			arg0
		);
	}
	void SharedMemory::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

