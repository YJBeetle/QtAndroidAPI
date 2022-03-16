#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./templates/ControlTemplate.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./Control.def.hpp"

namespace android::service::controls
{
	// Fields
	inline JObject Control::CREATOR()
	{
		return getStaticObjectField(
			"android.service.controls.Control",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Control::STATUS_DISABLED()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_DISABLED"
		);
	}
	inline jint Control::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_ERROR"
		);
	}
	inline jint Control::STATUS_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_NOT_FOUND"
		);
	}
	inline jint Control::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_OK"
		);
	}
	inline jint Control::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.Control",
			"STATUS_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Control::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::PendingIntent Control::getAppIntent() const
	{
		return callObjectMethod(
			"getAppIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline JString Control::getControlId() const
	{
		return callObjectMethod(
			"getControlId",
			"()Ljava/lang/String;"
		);
	}
	inline android::service::controls::templates::ControlTemplate Control::getControlTemplate() const
	{
		return callObjectMethod(
			"getControlTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	inline android::content::res::ColorStateList Control::getCustomColor() const
	{
		return callObjectMethod(
			"getCustomColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::drawable::Icon Control::getCustomIcon() const
	{
		return callObjectMethod(
			"getCustomIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline jint Control::getDeviceType() const
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	inline jint Control::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline JString Control::getStatusText() const
	{
		return callObjectMethod(
			"getStatusText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Control::getStructure() const
	{
		return callObjectMethod(
			"getStructure",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Control::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Control::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Control::getZone() const
	{
		return callObjectMethod(
			"getZone",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void Control::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::controls

// Base class headers

