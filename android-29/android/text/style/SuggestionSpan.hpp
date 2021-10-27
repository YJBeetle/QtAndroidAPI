#pragma once

#ifndef ANDROID_TEXT_STYLE_SUGGESTIONSPAN
#define ANDROID_TEXT_STYLE_SUGGESTIONSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"

namespace __jni_impl::android::content
{
	class Context;
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
	class SuggestionSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		static jstring ACTION_SUGGESTION_PICKED();
		static QAndroidJniObject CREATOR();
		static jint FLAG_AUTO_CORRECTION();
		static jint FLAG_EASY_CORRECT();
		static jint FLAG_MISSPELLED();
		static jint SUGGESTIONS_MAX_SIZE();
		static jstring SUGGESTION_SPAN_PICKED_AFTER();
		static jstring SUGGESTION_SPAN_PICKED_BEFORE();
		static jstring SUGGESTION_SPAN_PICKED_HASHCODE();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jarray arg1, jint arg2);
		void __constructor(__jni_impl::java::util::Locale arg0, jarray arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1, jarray arg2, jint arg3, jclass arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		jstring getLocale();
		QAndroidJniObject getLocaleObject();
		jint getSpanTypeId();
		jarray getSuggestions();
		jint getUnderlineColor();
		jint hashCode();
		void setFlags(jint arg0);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../content/Context.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	jstring SuggestionSpan::ACTION_SUGGESTION_PICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"ACTION_SUGGESTION_PICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SuggestionSpan::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SuggestionSpan::FLAG_AUTO_CORRECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_AUTO_CORRECTION"
		);
	}
	jint SuggestionSpan::FLAG_EASY_CORRECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_EASY_CORRECT"
		);
	}
	jint SuggestionSpan::FLAG_MISSPELLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"FLAG_MISSPELLED"
		);
	}
	jint SuggestionSpan::SUGGESTIONS_MAX_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.SuggestionSpan",
			"SUGGESTIONS_MAX_SIZE"
		);
	}
	jstring SuggestionSpan::SUGGESTION_SPAN_PICKED_AFTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_AFTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SuggestionSpan::SUGGESTION_SPAN_PICKED_BEFORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_BEFORE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SuggestionSpan::SUGGESTION_SPAN_PICKED_HASHCODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.style.SuggestionSpan",
			"SUGGESTION_SPAN_PICKED_HASHCODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SuggestionSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuggestionSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void SuggestionSpan::__constructor(__jni_impl::android::content::Context arg0, jarray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuggestionSpan",
			"(Landroid/content/Context;[Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SuggestionSpan::__constructor(__jni_impl::java::util::Locale arg0, jarray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuggestionSpan",
			"(Ljava/util/Locale;[Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SuggestionSpan::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1, jarray arg2, jint arg3, jclass arg4)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.SuggestionSpan",
			"(Landroid/content/Context;Ljava/util/Locale;[Ljava/lang/String;ILjava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint SuggestionSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SuggestionSpan::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SuggestionSpan::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jstring SuggestionSpan::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SuggestionSpan::getLocaleObject()
	{
		return __thiz.callObjectMethod(
			"getLocaleObject",
			"()Ljava/util/Locale;"
		);
	}
	jint SuggestionSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jarray SuggestionSpan::getSuggestions()
	{
		return __thiz.callObjectMethod(
			"getSuggestions",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint SuggestionSpan::getUnderlineColor()
	{
		return __thiz.callMethod<jint>(
			"getUnderlineColor",
			"()I"
		);
	}
	jint SuggestionSpan::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SuggestionSpan::setFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void SuggestionSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void SuggestionSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class SuggestionSpan : public __jni_impl::android::text::style::SuggestionSpan
	{
	public:
		SuggestionSpan(QAndroidJniObject obj) { __thiz = obj; }
		SuggestionSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		SuggestionSpan(__jni_impl::android::content::Context arg0, jarray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SuggestionSpan(__jni_impl::java::util::Locale arg0, jarray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SuggestionSpan(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1, jarray arg2, jint arg3, jclass arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_SUGGESTIONSPAN

