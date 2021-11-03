#include "../../JByteArray.hpp"
#include "./Parcel.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "./DropBoxManager_Entry.hpp"

namespace android::os
{
	// Fields
	JObject DropBoxManager_Entry::CREATOR()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager$Entry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DropBoxManager_Entry::DropBoxManager_Entry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DropBoxManager_Entry::DropBoxManager_Entry(JString arg0, jlong arg1)
		: JObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(JString arg0, jlong arg1, JString arg2)
		: JObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(JString arg0, jlong arg1, JByteArray arg2, jint arg3)
		: JObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;J[BI)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jbyteArray>(),
			arg3
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(JString arg0, jlong arg1, android::os::ParcelFileDescriptor arg2, jint arg3)
		: JObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	DropBoxManager_Entry::DropBoxManager_Entry(JString arg0, jlong arg1, java::io::File arg2, jint arg3)
		: JObject(
			"android.os.DropBoxManager$Entry",
			"(Ljava/lang/String;JLjava/io/File;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	void DropBoxManager_Entry::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint DropBoxManager_Entry::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DropBoxManager_Entry::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	java::io::InputStream DropBoxManager_Entry::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	JString DropBoxManager_Entry::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	JString DropBoxManager_Entry::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jlong DropBoxManager_Entry::getTimeMillis() const
	{
		return callMethod<jlong>(
			"getTimeMillis",
			"()J"
		);
	}
	void DropBoxManager_Entry::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

