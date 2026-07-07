#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchBlobHandle.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject AppSearchBlobHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.AppSearchBlobHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::appsearch::AppSearchBlobHandle AppSearchBlobHandle::createWithSha256(JByteArray arg0, JString arg1, JString arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.AppSearchBlobHandle",
			"createWithSha256",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/app/appsearch/AppSearchBlobHandle;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline jint AppSearchBlobHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AppSearchBlobHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AppSearchBlobHandle::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline JString AppSearchBlobHandle::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline JString AppSearchBlobHandle::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray AppSearchBlobHandle::getSha256Digest() const
	{
		return callObjectMethod(
			"getSha256Digest",
			"()[B"
		);
	}
	inline jint AppSearchBlobHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AppSearchBlobHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AppSearchBlobHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
