#include "./Parcel.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/InputStream.hpp"
#include "./DropBoxManager_Entry.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass DropBoxManager_Entry::CREATOR()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager$Entry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DropBoxManager_Entry::DropBoxManager_Entry(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1)
		: __JniBaseClass(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, jstring arg2)
		: __JniBaseClass(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, jbyteArray arg2, jint arg3)
		: __JniBaseClass(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J[BI)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, android::os::ParcelFileDescriptor arg2, jint arg3)
		: __JniBaseClass(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(jstring arg0, jlong arg1, java::io::File arg2, jint arg3)
		: __JniBaseClass(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/io/File;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	void DropBoxManager_Entry::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint DropBoxManager_Entry::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DropBoxManager_Entry::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	java::io::InputStream DropBoxManager_Entry::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jstring DropBoxManager_Entry::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DropBoxManager_Entry::getText(jint arg0)
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong DropBoxManager_Entry::getTimeMillis()
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	void DropBoxManager_Entry::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

