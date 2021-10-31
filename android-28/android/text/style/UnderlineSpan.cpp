#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./UnderlineSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	UnderlineSpan::UnderlineSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	UnderlineSpan::UnderlineSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"()V"
		) {}
	UnderlineSpan::UnderlineSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint UnderlineSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UnderlineSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void UnderlineSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void UnderlineSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

