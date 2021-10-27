#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./ClickableSpan.hpp"

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
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		jstring getURL();
		void onClick(__jni_impl::android::view::View arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/Parcel.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void URLSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void URLSpan::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void URLSpan::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint URLSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint URLSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring URLSpan::getURL()
	{
		return __thiz.callObjectMethod(
			"getURL",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void URLSpan::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void URLSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class URLSpan : public __jni_impl::android::text::style::URLSpan
	{
	public:
		URLSpan(QAndroidJniObject obj) { __thiz = obj; }
		URLSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		URLSpan(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

