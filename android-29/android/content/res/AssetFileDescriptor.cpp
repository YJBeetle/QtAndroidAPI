#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/FileInputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"
#include "../../../JString.hpp"
#include "./AssetFileDescriptor.hpp"

namespace android::content::res
{
	// Fields
	JObject AssetFileDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.AssetFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong AssetFileDescriptor::UNKNOWN_LENGTH()
	{
		return getStaticField<jlong>(
			"android.content.res.AssetFileDescriptor",
			"UNKNOWN_LENGTH"
		);
	}
	
	// QAndroidJniObject forward
	AssetFileDescriptor::AssetFileDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, android::os::Bundle arg3)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJLandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	void AssetFileDescriptor::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::io::FileInputStream AssetFileDescriptor::createInputStream()
	{
		return callObjectMethod(
			"createInputStream",
			"()Ljava/io/FileInputStream;"
		);
	}
	java::io::FileOutputStream AssetFileDescriptor::createOutputStream()
	{
		return callObjectMethod(
			"createOutputStream",
			"()Ljava/io/FileOutputStream;"
		);
	}
	jint AssetFileDescriptor::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssetFileDescriptor::getDeclaredLength()
	{
		return callMethod<jlong>(
			"getDeclaredLength",
			"()J"
		);
	}
	android::os::Bundle AssetFileDescriptor::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	java::io::FileDescriptor AssetFileDescriptor::getFileDescriptor()
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getLength()
	{
		return callMethod<jlong>(
			"getLength",
			"()J"
		);
	}
	android::os::ParcelFileDescriptor AssetFileDescriptor::getParcelFileDescriptor()
	{
		return callObjectMethod(
			"getParcelFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getStartOffset()
	{
		return callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	JString AssetFileDescriptor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AssetFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

