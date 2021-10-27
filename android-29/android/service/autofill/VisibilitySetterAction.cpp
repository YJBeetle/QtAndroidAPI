#include "../../os/Parcel.hpp"
#include "./VisibilitySetterAction_Builder.hpp"
#include "./VisibilitySetterAction.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject VisibilitySetterAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.VisibilitySetterAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	VisibilitySetterAction::VisibilitySetterAction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint VisibilitySetterAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VisibilitySetterAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisibilitySetterAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

