#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./RelativeSizeSpan.hpp"

namespace android::text::style
{
	// Fields
	
	RelativeSizeSpan::RelativeSizeSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RelativeSizeSpan::RelativeSizeSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.RelativeSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	RelativeSizeSpan::RelativeSizeSpan(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.RelativeSizeSpan",
			"(F)V",
			arg0
		);
	}
	
	// Methods
	jint RelativeSizeSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat RelativeSizeSpan::getSizeChange()
	{
		return __thiz.callMethod<jfloat>(
			"getSizeChange",
			"()F"
		);
	}
	jint RelativeSizeSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void RelativeSizeSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void RelativeSizeSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void RelativeSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

