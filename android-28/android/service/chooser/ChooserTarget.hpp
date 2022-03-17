#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ChooserTarget.def.hpp"

namespace android::service::chooser
{
	// Fields
	inline JObject ChooserTarget::CREATOR()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTarget",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ChooserTarget::ChooserTarget(JString arg0, android::graphics::drawable::Icon arg1, jfloat arg2, android::content::ComponentName arg3, android::os::Bundle arg4)
		: JObject(
			"android.service.chooser.ChooserTarget",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;FLandroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	inline jint ChooserTarget::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ComponentName ChooserTarget::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::graphics::drawable::Icon ChooserTarget::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline android::os::Bundle ChooserTarget::getIntentExtras() const
	{
		return callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jfloat ChooserTarget::getScore() const
	{
		return callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	inline JString ChooserTarget::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ChooserTarget::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ChooserTarget::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
