#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./BackgroundColorSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	BackgroundColorSpan::BackgroundColorSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	BackgroundColorSpan::BackgroundColorSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.BackgroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	BackgroundColorSpan::BackgroundColorSpan(jint arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.BackgroundColorSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint BackgroundColorSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BackgroundColorSpan::getBackgroundColor()
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	jint BackgroundColorSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BackgroundColorSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void BackgroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

