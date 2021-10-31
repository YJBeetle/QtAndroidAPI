#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./RelativeSizeSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	RelativeSizeSpan::RelativeSizeSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
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
	jint RelativeSizeSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat RelativeSizeSpan::getSizeChange()
	{
		return callMethod<jfloat>(
			"getSizeChange",
			"()F"
		);
	}
	jint RelativeSizeSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void RelativeSizeSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void RelativeSizeSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void RelativeSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

