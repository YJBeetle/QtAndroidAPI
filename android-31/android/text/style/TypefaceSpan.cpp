#include "../../graphics/Typeface.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../JString.hpp"
#include "./TypefaceSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	TypefaceSpan::TypefaceSpan(android::graphics::Typeface arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		) {}
	TypefaceSpan::TypefaceSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	TypefaceSpan::TypefaceSpan(JString arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint TypefaceSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TypefaceSpan::getFamily() const
	{
		return callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		);
	}
	jint TypefaceSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	android::graphics::Typeface TypefaceSpan::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	void TypefaceSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TypefaceSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TypefaceSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

