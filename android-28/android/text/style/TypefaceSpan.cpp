#include "../../graphics/Typeface.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../JString.hpp"
#include "./TypefaceSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TypefaceSpan::TypefaceSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
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
	jint TypefaceSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TypefaceSpan::getFamily()
	{
		return callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		);
	}
	jint TypefaceSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	android::graphics::Typeface TypefaceSpan::getTypeface()
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	void TypefaceSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TypefaceSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TypefaceSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

