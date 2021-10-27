#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./UnderlineSpan.hpp"

namespace android::text::style
{
	// Fields
	
	UnderlineSpan::UnderlineSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnderlineSpan::UnderlineSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.UnderlineSpan",
			"()V"
		);
	}
	UnderlineSpan::UnderlineSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.UnderlineSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint UnderlineSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UnderlineSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void UnderlineSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void UnderlineSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

