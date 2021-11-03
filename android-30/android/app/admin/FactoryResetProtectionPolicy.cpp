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
	jint FactoryResetProtectionPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject FactoryResetProtectionPolicy::getFactoryResetProtectionAccounts() const
	{
		return callObjectMethod(
			"getFactoryResetProtectionAccounts",
			"()Ljava/util/List;"
		);
	}
	jboolean FactoryResetProtectionPolicy::isFactoryResetProtectionEnabled() const
	{
		return callMethod<jboolean>(
			"isFactoryResetProtectionEnabled",
			"()Z"
		);
	}
	JString FactoryResetProtectionPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FactoryResetProtectionPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

