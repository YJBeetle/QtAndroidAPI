#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./StrikethroughSpan.hpp"

namespace android::text::style
{
	// Fields
	
	StrikethroughSpan::StrikethroughSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StrikethroughSpan::StrikethroughSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StrikethroughSpan",
			"()V"
		);
	}
	StrikethroughSpan::StrikethroughSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.StrikethroughSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint StrikethroughSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint StrikethroughSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void StrikethroughSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void StrikethroughSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

