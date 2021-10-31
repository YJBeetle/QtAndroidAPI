#include "./Parcel.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/InputStream.hpp"
#include "./DropBoxManager_Entry.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject DropBoxManager_Entry::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.DropBoxManager$Entry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DropBoxManager_Entry::DropBoxManager_Entry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J[BI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, android::os::ParcelFileDescriptor arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, java::io::File arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/io/File;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	void DropBoxManager_Entry::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint DropBoxManager_Entry::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DropBoxManager_Entry::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject DropBoxManager_Entry::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jstring DropBoxManager_Entry::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager_Entry::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong DropBoxManager_Entry::getTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	void DropBoxManager_Entry::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

