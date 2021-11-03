#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./RelativeSizeSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	RelativeSizeSpan::RelativeSizeSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	RelativeSizeSpan::RelativeSizeSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.RelativeSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	RelativeSizeSpan::RelativeSizeSpan(jfloat arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.RelativeSizeSpan",
			"(F)V",
			arg0
		) {}
	
	// Methods
	jint RelativeSizeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat RelativeSizeSpan::getSizeChange() const
	{
		return callMethod<jfloat>(
			"getSizeChange",
			"()F"
		);
	}
	jint RelativeSizeSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void RelativeSizeSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void RelativeSizeSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void RelativeSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

