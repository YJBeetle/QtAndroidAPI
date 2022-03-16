#include "../../app/PendingIntent.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./EasyEditSpan.hpp"

namespace android::text::style
{
	// Fields
	JString EasyEditSpan::EXTRA_TEXT_CHANGED_TYPE()
	{
		return getStaticObjectField(
			"android.text.style.EasyEditSpan",
			"EXTRA_TEXT_CHANGED_TYPE",
			"Ljava/lang/String;"
		);
	}
	jint EasyEditSpan::TEXT_DELETED()
	{
		return getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_DELETED"
		);
	}
	jint EasyEditSpan::TEXT_MODIFIED()
	{
		return getStaticField<jint>(
			"android.text.style.EasyEditSpan",
			"TEXT_MODIFIED"
		);
	}
	
	// Constructors
	EasyEditSpan::EasyEditSpan()
		: JObject(
			"android.text.style.EasyEditSpan",
			"()V"
		) {}
	EasyEditSpan::EasyEditSpan(android::app::PendingIntent arg0)
		: JObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		) {}
	EasyEditSpan::EasyEditSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.EasyEditSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint EasyEditSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint EasyEditSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void EasyEditSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

