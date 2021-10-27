#pragma once

#ifndef ANDROID_ICU_TEXT_UNICODESETSPANNER
#define ANDROID_ICU_TEXT_UNICODESETSPANNER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet_SpanCondition;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSetSpanner_CountMethod;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSetSpanner_TrimOption;
}

namespace __jni_impl::android::icu::text
{
	class UnicodeSetSpanner : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::icu::text::UnicodeSet arg0);
		
		// Methods
		jint countIn(jstring arg0);
		jint countIn(const QString &arg0);
		jint countIn(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1);
		jint countIn(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1);
		jint countIn(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
		jint countIn(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
		jstring deleteFrom(jstring arg0);
		jstring deleteFrom(const QString &arg0);
		jstring deleteFrom(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1);
		jstring deleteFrom(const QString &arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getUnicodeSet();
		jint hashCode();
		jstring replaceFrom(jstring arg0, jstring arg1);
		jstring replaceFrom(const QString &arg0, const QString &arg1);
		jstring replaceFrom(jstring arg0, jstring arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2);
		jstring replaceFrom(const QString &arg0, const QString &arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2);
		jstring replaceFrom(jstring arg0, jstring arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg3);
		jstring replaceFrom(const QString &arg0, const QString &arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg3);
		jstring trim(jstring arg0);
		jstring trim(const QString &arg0);
		jstring trim(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1);
		jstring trim(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1);
		jstring trim(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
		jstring trim(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "UnicodeSet.hpp"
#include "UnicodeSet_SpanCondition.hpp"
#include "UnicodeSetSpanner_CountMethod.hpp"
#include "UnicodeSetSpanner_TrimOption.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void UnicodeSetSpanner::__constructor(__jni_impl::android::icu::text::UnicodeSet arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetSpanner",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint UnicodeSetSpanner::countIn(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint UnicodeSetSpanner::countIn(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint UnicodeSetSpanner::countIn(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint UnicodeSetSpanner::countIn(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint UnicodeSetSpanner::countIn(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callMethod<jint>(
			"countIn",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::deleteFrom(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::deleteFrom(jstring arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::deleteFrom(const QString &arg0, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg1)
	{
		return __thiz.callObjectMethod(
			"deleteFrom",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jboolean UnicodeSetSpanner::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject UnicodeSetSpanner::getUnicodeSet()
	{
		return __thiz.callObjectMethod(
			"getUnicodeSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint UnicodeSetSpanner::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(const QString &arg0, const QString &arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(jstring arg0, jstring arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg3)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::replaceFrom(const QString &arg0, const QString &arg1, __jni_impl::android::icu::text::UnicodeSetSpanner_CountMethod arg2, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg3)
	{
		return __thiz.callObjectMethod(
			"replaceFrom",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$CountMethod;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(jstring arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring UnicodeSetSpanner::trim(const QString &arg0, __jni_impl::android::icu::text::UnicodeSetSpanner_TrimOption arg1, __jni_impl::android::icu::text::UnicodeSet_SpanCondition arg2)
	{
		return __thiz.callObjectMethod(
			"trim",
			"(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSetSpanner$TrimOption;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UnicodeSetSpanner : public __jni_impl::android::icu::text::UnicodeSetSpanner
	{
	public:
		UnicodeSetSpanner(QAndroidJniObject obj) { __thiz = obj; }
		UnicodeSetSpanner(__jni_impl::android::icu::text::UnicodeSet arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UNICODESETSPANNER

