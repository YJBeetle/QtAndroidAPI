#pragma once

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"
#include "MetricAffectingSpan.hpp"

namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text::style
{
	class LocaleSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::LocaleList arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getLocale();
		QAndroidJniObject getLocales();
		jint getSpanTypeId();
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void LocaleSpan::__constructor(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LocaleSpan",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint LocaleSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject LocaleSpan::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject LocaleSpan::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint LocaleSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LocaleSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void LocaleSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class LocaleSpan : public __jni_impl::android::text::style::LocaleSpan
	{
	public:
		LocaleSpan(QAndroidJniObject obj) { __thiz = obj; }
		LocaleSpan(__jni_impl::android::os::LocaleList arg0)
		{
			__constructor(
				arg0);
		}
		LocaleSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		LocaleSpan(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

