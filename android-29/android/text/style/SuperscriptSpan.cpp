#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./SuperscriptSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	SuperscriptSpan::SuperscriptSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	SuperscriptSpan::SuperscriptSpan()
		: android::text::style::MetricAffectingSpan(
			"android.text.style.SuperscriptSpan",
			"()V"
		) {}
	SuperscriptSpan::SuperscriptSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.SuperscriptSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint SuperscriptSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuperscriptSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void SuperscriptSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void SuperscriptSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void SuperscriptSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

