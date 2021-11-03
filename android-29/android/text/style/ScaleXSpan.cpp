#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./ScaleXSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	ScaleXSpan::ScaleXSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	ScaleXSpan::ScaleXSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ScaleXSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ScaleXSpan::ScaleXSpan(jfloat arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ScaleXSpan",
			"(F)V",
			arg0
		) {}
	
	// Methods
	jint ScaleXSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat ScaleXSpan::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jint ScaleXSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void ScaleXSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void ScaleXSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void ScaleXSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

