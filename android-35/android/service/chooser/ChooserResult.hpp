#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./ChooserResult.def.hpp"

namespace android::service::chooser
{
	// Fields
	inline jint ChooserResult::CHOOSER_RESULT_COPY()
	{
		return getStaticField<jint>(
			"android.service.chooser.ChooserResult",
			"CHOOSER_RESULT_COPY"
		);
	}
	inline jint ChooserResult::CHOOSER_RESULT_EDIT()
	{
		return getStaticField<jint>(
			"android.service.chooser.ChooserResult",
			"CHOOSER_RESULT_EDIT"
		);
	}
	inline jint ChooserResult::CHOOSER_RESULT_SELECTED_COMPONENT()
	{
		return getStaticField<jint>(
			"android.service.chooser.ChooserResult",
			"CHOOSER_RESULT_SELECTED_COMPONENT"
		);
	}
	inline jint ChooserResult::CHOOSER_RESULT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.chooser.ChooserResult",
			"CHOOSER_RESULT_UNKNOWN"
		);
	}
	inline JObject ChooserResult::CREATOR()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ChooserResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ChooserResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::ComponentName ChooserResult::getSelectedComponent() const
	{
		return callObjectMethod(
			"getSelectedComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint ChooserResult::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint ChooserResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ChooserResult::isShortcut() const
	{
		return callMethod<jboolean>(
			"isShortcut",
			"()Z"
		);
	}
	inline void ChooserResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
