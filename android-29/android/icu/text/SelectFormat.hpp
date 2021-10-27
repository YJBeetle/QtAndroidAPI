#pragma once

#include "../../../__JniBaseClass.hpp"
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
		void __constructor(const QString &arg0);
		
		// Methods
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring format(jstring arg0);
		jstring format(const QString &arg0);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jint hashCode();
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jstring toPattern();
		jstring toString();
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
			arg0
		);
	}
	void SelectFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SelectFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void SelectFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SelectFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean SelectFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SelectFormat::format(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring SelectFormat::format(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject SelectFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint SelectFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject SelectFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject SelectFormat::parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jstring SelectFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SelectFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

