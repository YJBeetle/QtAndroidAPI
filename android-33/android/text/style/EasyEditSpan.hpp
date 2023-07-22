#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./EasyEditSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JString EasyEditSpan::EXTRA_TEXT_CHANGED_TYPE()
	{
		return getStaticObjectField(
			"android.text.style.EasyEditSpan",
			"EXTRA_TEXT_CHANGED_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint EasyEditSpan::TEXT_DELETED()
	{
		return getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_DELETED"
		);
	}
	inline jint EasyEditSpan::TEXT_MODIFIED()
	{
		return getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_MODIFIED"
		);
	}
	
	// Constructors
	inline EasyEditSpan::EasyEditSpan()
		: JObject(
			"android.text.style.EasyEditSpan",
			"()V"
		) {}
	inline EasyEditSpan::EasyEditSpan(android::app::PendingIntent arg0)
		: JObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		) {}
	inline EasyEditSpan::EasyEditSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint EasyEditSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint EasyEditSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void EasyEditSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
