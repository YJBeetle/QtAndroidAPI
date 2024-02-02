#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ChooserAction.def.hpp"

namespace android::service::chooser
{
	// Fields
	inline JObject ChooserAction::CREATOR()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ChooserAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::PendingIntent ChooserAction::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline android::graphics::drawable::Icon ChooserAction::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString ChooserAction::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ChooserAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ChooserAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::chooser

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::chooser;
#endif
