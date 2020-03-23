#pragma once

#ifndef ANDROID_OS_DROPBOXMANAGER_ENTRY
#define ANDROID_OS_DROPBOXMANAGER_ENTRY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class DropBoxManager_Entry : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jlong arg1, __jni_impl::java::io::File arg2, jint arg3);
		void __constructor(jstring arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2, jint arg3);
		void __constructor(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3);
		void __constructor(jstring arg0, jlong arg1, jstring arg2);
		void __constructor(jstring arg0, jlong arg1);
		
		// Methods
		void close();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getTag();
		jint getFlags();
		QAndroidJniObject getText(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getTimeMillis();
	};
} // namespace __jni_impl::android::os

#include "../../java/io/File.hpp"
#include "ParcelFileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject DropBoxManager_Entry::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager$Entry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void DropBoxManager_Entry::__constructor(jstring arg0, jlong arg1, __jni_impl::java::io::File arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/io/File;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DropBoxManager_Entry::__constructor(jstring arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DropBoxManager_Entry::__constructor(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J[BI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void DropBoxManager_Entry::__constructor(jstring arg0, jlong arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void DropBoxManager_Entry::__constructor(jstring arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	
	// Methods
	void DropBoxManager_Entry::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject DropBoxManager_Entry::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;");
	}
	QAndroidJniObject DropBoxManager_Entry::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;");
	}
	jint DropBoxManager_Entry::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I");
	}
	QAndroidJniObject DropBoxManager_Entry::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint DropBoxManager_Entry::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void DropBoxManager_Entry::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong DropBoxManager_Entry::getTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimeMillis",
			"()J");
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class DropBoxManager_Entry : public __jni_impl::android::os::DropBoxManager_Entry
	{
	public:
		DropBoxManager_Entry(QAndroidJniObject obj) { __thiz = obj; }
		DropBoxManager_Entry(jstring arg0, jlong arg1, __jni_impl::java::io::File arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DropBoxManager_Entry(jstring arg0, jlong arg1, __jni_impl::android::os::ParcelFileDescriptor arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DropBoxManager_Entry(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DropBoxManager_Entry(jstring arg0, jlong arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DropBoxManager_Entry(jstring arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_DROPBOXMANAGER_ENTRY

