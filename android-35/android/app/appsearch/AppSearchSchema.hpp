#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject AppSearchSchema::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.AppSearchSchema",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AppSearchSchema::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AppSearchSchema::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AppSearchSchema::getParentTypes() const
	{
		return callObjectMethod(
			"getParentTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject AppSearchSchema::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Ljava/util/List;"
		);
	}
	inline JString AppSearchSchema::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint AppSearchSchema::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AppSearchSchema::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AppSearchSchema::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
