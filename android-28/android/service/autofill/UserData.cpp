#include "../../os/Parcel.hpp"
#include "./UserData_Builder.hpp"
#include "../../../JString.hpp"
#include "./UserData.hpp"

namespace android::service::autofill
{
	// Fields
	JObject UserData::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.UserData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UserData::UserData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UserData::getMaxCategoryCount()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxCategoryCount",
			"()I"
		);
	}
	jint UserData::getMaxFieldClassificationIdsSize()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxFieldClassificationIdsSize",
			"()I"
		);
	}
	jint UserData::getMaxUserDataSize()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxUserDataSize",
			"()I"
		);
	}
	jint UserData::getMaxValueLength()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxValueLength",
			"()I"
		);
	}
	jint UserData::getMinValueLength()
	{
		return callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMinValueLength",
			"()I"
		);
	}
	jint UserData::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString UserData::getFieldClassificationAlgorithm()
	{
		return callObjectMethod(
			"getFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JString UserData::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString UserData::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UserData::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

