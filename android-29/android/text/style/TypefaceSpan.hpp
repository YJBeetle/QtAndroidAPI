#pragma once

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"

namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class TypefaceSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Typeface arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jint describeContents();
		jstring getFamily();
		jint getSpanTypeId();
		QAndroidJniObject getTypeface();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/Typeface.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TypefaceSpan::__constructor(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TypefaceSpan",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TypefaceSpan::__constructor(const QString &arg0)
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
	void TypefaceSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void TypefaceSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TypefaceSpan : public __jni_impl::android::text::style::TypefaceSpan
	{
	public:
		TypefaceSpan(QAndroidJniObject obj) { __thiz = obj; }
		TypefaceSpan(__jni_impl::android::graphics::Typeface arg0)
		{
			__constructor(
				arg0);
		}
		TypefaceSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		TypefaceSpan(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

