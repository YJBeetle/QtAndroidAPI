#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./StyleSpan.hpp"

namespace android::text::style
{
	// Fields
	
	StyleSpan::StyleSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StyleSpan::StyleSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StyleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	StyleSpan::StyleSpan(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StyleSpan",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint StyleSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint StyleSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jint StyleSpan::getStyle()
	{
		return __thiz.callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	void StyleSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void StyleSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void StyleSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

