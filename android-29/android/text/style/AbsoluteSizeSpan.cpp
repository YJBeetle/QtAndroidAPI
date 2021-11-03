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
	jint AbsoluteSizeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AbsoluteSizeSpan::getDip() const
	{
		return callMethod<jboolean>(
			"getDip",
			"()Z"
		);
	}
	jint AbsoluteSizeSpan::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	jint AbsoluteSizeSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AbsoluteSizeSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void AbsoluteSizeSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void AbsoluteSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

