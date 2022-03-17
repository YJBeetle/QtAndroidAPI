#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PackageManager_Property.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageManager_Property::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager$Property",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PackageManager_Property::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PackageManager_Property::getBoolean() const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"()Z"
		);
	}
	inline JString PackageManager_Property::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat PackageManager_Property::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	inline jint PackageManager_Property::getInteger() const
	{
		return callMethod<jint>(
			"getInteger",
			"()I"
		);
	}
	inline JString PackageManager_Property::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString PackageManager_Property::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PackageManager_Property::getResourceId() const
	{
		return callMethod<jint>(
			"getResourceId",
			"()I"
		);
	}
	inline JString PackageManager_Property::getString() const
	{
		return callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean PackageManager_Property::isBoolean() const
	{
		return callMethod<jboolean>(
			"isBoolean",
			"()Z"
		);
	}
	inline jboolean PackageManager_Property::isFloat() const
	{
		return callMethod<jboolean>(
			"isFloat",
			"()Z"
		);
	}
	inline jboolean PackageManager_Property::isInteger() const
	{
		return callMethod<jboolean>(
			"isInteger",
			"()Z"
		);
	}
	inline jboolean PackageManager_Property::isResourceId() const
	{
		return callMethod<jboolean>(
			"isResourceId",
			"()Z"
		);
	}
	inline jboolean PackageManager_Property::isString() const
	{
		return callMethod<jboolean>(
			"isString",
			"()Z"
		);
	}
	inline void PackageManager_Property::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
