#include "../../app/PendingIntent.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "./templates/ControlTemplate.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Control.hpp"

namespace android::service::controls
{
	// Fields
	JObject Control::CREATOR()
	{
		return getStaticObjectField(
			"android.service.controls.Control",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Control::STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_DISABLED"
		);
	}
	jint Control::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_ERROR"
		);
	}
	jint Control::STATUS_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_NOT_FOUND"
		);
	}
	jint Control::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_OK"
		);
	}
	jint Control::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_UNKNOWN"
		);
	}
	
	// QJniObject forward
	Control::Control(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Control::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::PendingIntent Control::getAppIntent()
	{
		return callObjectMethod(
			"getAppIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	JString Control::getControlId()
	{
		return callObjectMethod(
			"getControlId",
			"()Ljava/lang/String;"
		);
	}
	android::service::controls::templates::ControlTemplate Control::getControlTemplate()
	{
		return callObjectMethod(
			"getControlTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	android::content::res::ColorStateList Control::getCustomColor()
	{
		return callObjectMethod(
			"getCustomColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::drawable::Icon Control::getCustomIcon()
	{
		return callObjectMethod(
			"getCustomIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jint Control::getDeviceType()
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	jint Control::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	JString Control::getStatusText()
	{
		return callObjectMethod(
			"getStatusText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Control::getStructure()
	{
		return callObjectMethod(
			"getStructure",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Control::getSubtitle()
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Control::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Control::getZone()
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/lang/CharSequence;"
		);
	}
	void Control::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::controls

