#include "./Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./SharedMemory.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject SharedMemory::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.SharedMemory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SharedMemory::SharedMemory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SharedMemory::create(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.SharedMemory",
			"create",
			"(Ljava/lang/String;I)Landroid/os/SharedMemory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SharedMemory::create(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.SharedMemory",
			"create",
			"(Ljava/lang/String;I)Landroid/os/SharedMemory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SharedMemory::unmap(java::nio::ByteBuffer arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.SharedMemory",
			"unmap",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void SharedMemory::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SharedMemory::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SharedMemory::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	QAndroidJniObject SharedMemory::map(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"map",
			"(III)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SharedMemory::mapReadOnly()
	{
		return __thiz.callObjectMethod(
			"mapReadOnly",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	QAndroidJniObject SharedMemory::mapReadWrite()
	{
		return __thiz.callObjectMethod(
			"mapReadWrite",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jboolean SharedMemory::setProtect(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setProtect",
			"(I)Z",
			arg0
		);
	}
	void SharedMemory::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

