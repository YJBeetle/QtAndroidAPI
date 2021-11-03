#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./StyleSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	StyleSpan::StyleSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	StyleSpan::StyleSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.StyleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	StyleSpan::StyleSpan(jint arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.StyleSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint StyleSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint StyleSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jint StyleSpan::getStyle() const
	{
		return callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	void StyleSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void StyleSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void StyleSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

