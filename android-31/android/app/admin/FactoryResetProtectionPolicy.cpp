#include "../../os/Parcel.hpp"
#include "./FactoryResetProtectionPolicy.hpp"

namespace android::app::admin
{
	// Fields
	__JniBaseClass FactoryResetProtectionPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.FactoryResetProtectionPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	FactoryResetProtectionPolicy::FactoryResetProtectionPolicy(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint FactoryResetProtectionPolicy::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass FactoryResetProtectionPolicy::getFactoryResetProtectionAccounts()
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
	jstring FactoryResetProtectionPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

