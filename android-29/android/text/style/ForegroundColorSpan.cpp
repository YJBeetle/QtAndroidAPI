#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./ForegroundColorSpan.hpp"

namespace android::text::style
{
	// Fields
	
	ForegroundColorSpan::ForegroundColorSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ForegroundColorSpan::ForegroundColorSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ForegroundColorSpan::ForegroundColorSpan(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ForegroundColorSpan",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint ForegroundColorSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ForegroundColorSpan::getForegroundColor()
	{
		return __thiz.callMethod<jint>(
			"getForegroundColor",
			"()I"
		);
	}
	jint ForegroundColorSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void ForegroundColorSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void ForegroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

