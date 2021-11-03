#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
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
	
	// QJniObject forward
	ControlButton::ControlButton(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ControlButton::ControlButton(jboolean arg0, JString arg1)
		: JObject(
			"android.service.controls.templates.ControlButton",
			"(ZLjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint ControlButton::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ControlButton::getActionDescription() const
	{
		return callObjectMethod(
			"getActionDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ControlButton::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void ControlButton::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::controls::templates

