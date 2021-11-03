#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./ForegroundColorSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	ForegroundColorSpan::ForegroundColorSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	ForegroundColorSpan::ForegroundColorSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.ForegroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ForegroundColorSpan::ForegroundColorSpan(jint arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.ForegroundColorSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint ForegroundColorSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ForegroundColorSpan::getForegroundColor() const
	{
		return callMethod<jint>(
			"getForegroundColor",
			"()I"
		);
	}
	jint ForegroundColorSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void ForegroundColorSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void ForegroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

