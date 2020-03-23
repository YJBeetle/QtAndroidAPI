#pragma once

#ifndef ANDROID_ICU_TEXT_SELECTFORMAT
#define ANDROID_ICU_TEXT_SELECTFORMAT

#include "../../../java/text/Format.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}

namespace __jni_impl::android::icu::text
{
	class SelectFormat : public __jni_impl::java::text::Format
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jstring arg0);
		void applyPattern(jstring arg0);
		QAndroidJniObject toPattern();
		QAndroidJniObject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void SelectFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SelectFormat",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean SelectFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SelectFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SelectFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject SelectFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject SelectFormat::format(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void SelectFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject SelectFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SelectFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class SelectFormat : public __jni_impl::android::icu::text::SelectFormat
	{
	public:
		SelectFormat(QAndroidJniObject obj) { __thiz = obj; }
		SelectFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_SELECTFORMAT

