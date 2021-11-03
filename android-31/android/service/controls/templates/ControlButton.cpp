#include "../../../os/Parcel.hpp"
#include "./ControlButton.hpp"

namespace android::service::controls::templates
{
	// Fields
	JObject ControlButton::CREATOR()
	{
		return getStaticObjectField(
			"android.service.controls.templates.ControlButton",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ControlButton::ControlButton(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ControlButton::ControlButton(jboolean arg0, jstring arg1)
		: JObject(
			"android.service.controls.templates.ControlButton",
			"(ZLjava/lang/CharSequence;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint ControlButton::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ControlButton::getActionDescription()
	{
		return callObjectMethod(
			"getActionDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ControlButton::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void ControlButton::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::controls::templates

