#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DocumentsContract_Path.def.hpp"

namespace android::provider
{
	// Fields
	inline JObject DocumentsContract_Path::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Path",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DocumentsContract_Path::DocumentsContract_Path(JString arg0, JObject arg1)
		: JObject(
			"android.provider.DocumentsContract$Path",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint DocumentsContract_Path::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DocumentsContract_Path::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DocumentsContract_Path::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/util/List;"
		);
	}
	inline JString DocumentsContract_Path::getRootId() const
	{
		return callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		);
	}
	inline jint DocumentsContract_Path::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DocumentsContract_Path::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DocumentsContract_Path::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

