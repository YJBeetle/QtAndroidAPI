#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::os
{
	class SharedMemory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(jstring arg0, jint arg1);
		static QAndroidJniObject create(const QString &arg0, jint arg1);
		static void unmap(__jni_impl::java::nio::ByteBuffer arg0);
		void close();
		jint describeContents();
		jint getSize();
		QAndroidJniObject map(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject mapReadOnly();
		QAndroidJniObject mapReadWrite();
		jboolean setProtect(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "./Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::os
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
	
	// Constructors
	void SharedMemory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.SharedMemory",
			"(V)V");
	}
	
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
	void SharedMemory::unmap(__jni_impl::java::nio::ByteBuffer arg0)
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
	void SharedMemory::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class SharedMemory : public __jni_impl::android::os::SharedMemory
	{
	public:
		SharedMemory(QAndroidJniObject obj) { __thiz = obj; }
		SharedMemory()
		{
			__constructor();
		}
	};
} // namespace android::os

