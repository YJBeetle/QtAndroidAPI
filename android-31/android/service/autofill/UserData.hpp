#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UserData.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject UserData::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.UserData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UserData::getMaxCategoryCount()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxCategoryCount",
			"()I"
		);
	}
	inline jint UserData::getMaxFieldClassificationIdsSize()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxFieldClassificationIdsSize",
			"()I"
		);
	}
	inline jint UserData::getMaxUserDataSize()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxUserDataSize",
			"()I"
		);
	}
	inline jint UserData::getMaxValueLength()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxValueLength",
			"()I"
		);
	}
	inline jint UserData::getMinValueLength()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMinValueLength",
			"()I"
		);
	}
	inline jint UserData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString UserData::getFieldClassificationAlgorithm() const
	{
		return callObjectMethod(
			"getFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JString UserData::getFieldClassificationAlgorithmForCategory(JString arg0) const
	{
		return callObjectMethod(
			"getFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString UserData::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString UserData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UserData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

