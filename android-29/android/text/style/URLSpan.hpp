#pragma once

#ifndef ANDROID_TEXT_STYLE_URLSPAN
#define ANDROID_TEXT_STYLE_URLSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "ClickableSpan.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::text::style
{
	class URLSpan : public __jni_impl::android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject getURL();
		jint getSpanTypeId();
		void onClick(__jni_impl::android::view::View arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void URLSpan::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void URLSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject URLSpan::getURL()
	{
		return __thiz.callObjectMethod(
			"getURL",
			"()Ljava/lang/String;");
	}
	jint URLSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I");
	}
	void URLSpan::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jint URLSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void URLSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class URLSpan : public __jni_impl::android::text::style::URLSpan
	{
	public:
		URLSpan(QAndroidJniObject obj) { __thiz = obj; }
		URLSpan(jstring arg0)
		{
			__constructor(
				arg0);
		}
		URLSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_URLSPAN

