#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./SuperscriptSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	SuperscriptSpan::SuperscriptSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
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
	jint SuperscriptSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuperscriptSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void SuperscriptSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void SuperscriptSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void SuperscriptSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

