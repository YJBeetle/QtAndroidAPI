#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./StrikethroughSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	StrikethroughSpan::StrikethroughSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.StrikethroughSpan",
			"()V"
		) {}
	StrikethroughSpan::StrikethroughSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.StrikethroughSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint StrikethroughSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint StrikethroughSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void StrikethroughSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void StrikethroughSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

