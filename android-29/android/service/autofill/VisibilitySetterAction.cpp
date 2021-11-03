#include "../../os/Parcel.hpp"
#include "./VisibilitySetterAction_Builder.hpp"
#include "./VisibilitySetterAction.hpp"

namespace android::service::autofill
{
	// Fields
	JObject VisibilitySetterAction::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.VisibilitySetterAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VisibilitySetterAction::VisibilitySetterAction(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VisibilitySetterAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VisibilitySetterAction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisibilitySetterAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

