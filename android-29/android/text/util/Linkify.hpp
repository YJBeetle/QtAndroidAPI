#pragma once

#ifndef ANDROID_TEXT_UTIL_LINKIFY
#define ANDROID_TEXT_UTIL_LINKIFY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::android::widget
{
	class TextView;
}

namespace __jni_impl::android::text::util
{
	class Linkify : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL();
		static jint EMAIL_ADDRESSES();
		static jint MAP_ADDRESSES();
		static jint PHONE_NUMBERS();
		static jint WEB_URLS();
		static QAndroidJniObject sPhoneNumberMatchFilter();
		static QAndroidJniObject sPhoneNumberTransformFilter();
		static QAndroidJniObject sUrlMatchFilter();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2);
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5);
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6);
		static void addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5);
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static jboolean addLinks(__jni_impl::android::widget::TextView arg0, jint arg1);
		static void addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2);
		static void addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		static jboolean addLinks(__jni_impl::__JniBaseClass arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::util

#include "../../../java/util/regex/Pattern.hpp"
#include "../../widget/TextView.hpp"

namespace __jni_impl::android::text::util
{
	// Fields
	jint Linkify::ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.util.Linkify",
			"ALL");
	}
	jint Linkify::EMAIL_ADDRESSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.util.Linkify",
			"EMAIL_ADDRESSES");
	}
	jint Linkify::MAP_ADDRESSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.util.Linkify",
			"MAP_ADDRESSES");
	}
	jint Linkify::PHONE_NUMBERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.util.Linkify",
			"PHONE_NUMBERS");
	}
	jint Linkify::WEB_URLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.util.Linkify",
			"WEB_URLS");
	}
	QAndroidJniObject Linkify::sPhoneNumberMatchFilter()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;");
	}
	QAndroidJniObject Linkify::sPhoneNumberTransformFilter()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberTransformFilter",
			"Landroid/text/util/Linkify$TransformFilter;");
	}
	QAndroidJniObject Linkify::sUrlMatchFilter()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.util.Linkify",
			"sUrlMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;");
	}
	
	// Constructors
	void Linkify::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.util.Linkify",
			"()V");
	}
	
	// Methods
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;Ljava/util/function/Function;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void Linkify::addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;ILjava/util/function/Function;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jboolean Linkify::addLinks(__jni_impl::android::widget::TextView arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;I)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	void Linkify::addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Linkify::addLinks(__jni_impl::android::widget::TextView arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	jboolean Linkify::addLinks(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;I)Z",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::text::util

namespace android::text::util
{
	class Linkify : public __jni_impl::android::text::util::Linkify
	{
	public:
		Linkify(QAndroidJniObject obj) { __thiz = obj; }
		Linkify()
		{
			__constructor();
		}
	};
} // namespace android::text::util

#endif // ANDROID_TEXT_UTIL_LINKIFY

