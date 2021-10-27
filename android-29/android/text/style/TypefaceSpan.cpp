#include "../../graphics/Typeface.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./TypefaceSpan.hpp"

namespace android::text::style
{
	// Fields
	
	TypefaceSpan::TypefaceSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TypefaceSpan::TypefaceSpan(android::graphics::Typeface &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	TypefaceSpan::TypefaceSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	TypefaceSpan::TypefaceSpan(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TypefaceSpan::TypefaceSpan(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint TypefaceSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TypefaceSpan::getFamily()
	{
		return __thiz.callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TypefaceSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	QAndroidJniObject TypefaceSpan::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	void TypefaceSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

