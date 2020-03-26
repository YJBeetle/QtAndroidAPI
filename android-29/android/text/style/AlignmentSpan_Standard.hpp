#pragma once

#ifndef ANDROID_TEXT_STYLE_ALIGNMENTSPAN_STANDARD
#define ANDROID_TEXT_STYLE_ALIGNMENTSPAN_STANDARD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class Layout_Alignment;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::text::style
{
	class AlignmentSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::text::Layout_Alignment arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject getAlignment();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSpanTypeId();
	};
} // namespace __jni_impl::android::text::style

#include "../Layout_Alignment.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void AlignmentSpan_Standard::__constructor(__jni_impl::android::text::Layout_Alignment arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/text/Layout$Alignment;)V",
			arg0.__jniObject().object());
	}
	void AlignmentSpan_Standard::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AlignmentSpan_Standard::getAlignment()
	{
		return __thiz.callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	jint AlignmentSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AlignmentSpan_Standard::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AlignmentSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class AlignmentSpan_Standard : public __jni_impl::android::text::style::AlignmentSpan_Standard
	{
	public:
		AlignmentSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
		AlignmentSpan_Standard(__jni_impl::android::text::Layout_Alignment arg0)
		{
			__constructor(
				arg0);
		}
		AlignmentSpan_Standard(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_ALIGNMENTSPAN_STANDARD

