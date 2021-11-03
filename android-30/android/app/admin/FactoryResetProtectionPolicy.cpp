#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./FactoryResetProtectionPolicy.hpp"

namespace android::app::admin
{
	// Fields
	JObject FactoryResetProtectionPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.FactoryResetProtectionPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	FactoryResetProtectionPolicy::FactoryResetProtectionPolicy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint FactoryResetProtectionPolicy::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject FactoryResetProtectionPolicy::getFactoryResetProtectionAccounts()
	{
		return callObjectMethod(
			"getFactoryResetProtectionAccounts",
			"()Ljava/util/List;"
		);
	}
	jboolean FactoryResetProtectionPolicy::isFactoryResetProtectionEnabled()
	{
		return callMethod<jboolean>(
			"isFactoryResetProtectionEnabled",
			"()Z"
		);
	}
	JString FactoryResetProtectionPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FactoryResetProtectionPolicy::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

