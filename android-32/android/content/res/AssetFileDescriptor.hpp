#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/FileInputStream.def.hpp"
#include "../../../java/io/FileOutputStream.def.hpp"
#include "../../../JString.hpp"
#include "./AssetFileDescriptor.def.hpp"

namespace android::content::res
{
	// Fields
	inline JObject AssetFileDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.AssetFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong AssetFileDescriptor::UNKNOWN_LENGTH()
	{
		return getStaticField<jlong>(
			"android.content.res.AssetFileDescriptor",
			"UNKNOWN_LENGTH"
		);
	}
	
	// Constructors
	inline AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, android::os::Bundle arg3)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJLandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline void AssetFileDescriptor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::io::FileInputStream AssetFileDescriptor::createInputStream() const
	{
		return callObjectMethod(
			"createInputStream",
			"()Ljava/io/FileInputStream;"
		);
	}
	inline java::io::FileOutputStream AssetFileDescriptor::createOutputStream() const
	{
		return callObjectMethod(
			"createOutputStream",
			"()Ljava/io/FileOutputStream;"
		);
	}
	inline jint AssetFileDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong AssetFileDescriptor::getDeclaredLength() const
	{
		return callMethod<jlong>(
			"getDeclaredLength",
			"()J"
		);
	}
	inline android::os::Bundle AssetFileDescriptor::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline java::io::FileDescriptor AssetFileDescriptor::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline jlong AssetFileDescriptor::getLength() const
	{
		return callMethod<jlong>(
			"getLength",
			"()J"
		);
	}
	inline android::os::ParcelFileDescriptor AssetFileDescriptor::getParcelFileDescriptor() const
	{
		return callObjectMethod(
			"getParcelFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline jlong AssetFileDescriptor::getStartOffset() const
	{
		return callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	inline JString AssetFileDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AssetFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
