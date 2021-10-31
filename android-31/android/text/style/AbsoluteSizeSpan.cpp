#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./AbsoluteSizeSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	AbsoluteSizeSpan::AbsoluteSizeSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	AbsoluteSizeSpan::AbsoluteSizeSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(I)V",
			arg0
		) {}
	AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0, jboolean arg1)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint AbsoluteSizeSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AbsoluteSizeSpan::getDip()
	{
		return callMethod<jboolean>(
			"getDip",
			"()Z"
		);
	}
	jint AbsoluteSizeSpan::getSize()
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	jint AbsoluteSizeSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AbsoluteSizeSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void AbsoluteSizeSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void AbsoluteSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

