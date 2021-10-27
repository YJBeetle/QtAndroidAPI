#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./SuperscriptSpan.hpp"

namespace android::text::style
{
	// Fields
	
	SuperscriptSpan::SuperscriptSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SuperscriptSpan::SuperscriptSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuperscriptSpan",
			"()V"
		);
	}
	SuperscriptSpan::SuperscriptSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuperscriptSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint SuperscriptSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuperscriptSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void SuperscriptSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void SuperscriptSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void SuperscriptSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

