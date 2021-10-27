#pragma once

#ifndef ANDROID_ICU_TEXT_DATEINTERVALINFO
#define ANDROID_ICU_TEXT_DATEINTERVALINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class DateIntervalInfo_PatternInfo;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::text
{
	class DateIntervalInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		jboolean getDefaultOrder();
		jstring getFallbackIntervalPattern();
		QAndroidJniObject getIntervalPattern(jstring arg0, jint arg1);
		QAndroidJniObject getIntervalPattern(const QString &arg0, jint arg1);
		jint hashCode();
		jboolean isFrozen();
		void setFallbackIntervalPattern(jstring arg0);
		void setFallbackIntervalPattern(const QString &arg0);
		void setIntervalPattern(jstring arg0, jint arg1, jstring arg2);
		void setIntervalPattern(const QString &arg0, jint arg1, const QString &arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "DateIntervalInfo_PatternInfo.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void DateIntervalInfo::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void DateIntervalInfo::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jobject DateIntervalInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateIntervalInfo::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DateIntervalInfo::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::getDefaultOrder()
	{
		return __thiz.callMethod<jboolean>(
			"getDefaultOrder",
			"()Z"
		);
	}
	jstring DateIntervalInfo::getFallbackIntervalPattern()
	{
		return __thiz.callObjectMethod(
			"getFallbackIntervalPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DateIntervalInfo::getIntervalPattern(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getIntervalPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateIntervalInfo::getIntervalPattern(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getIntervalPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint DateIntervalInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateIntervalInfo::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	void DateIntervalInfo::setFallbackIntervalPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFallbackIntervalPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateIntervalInfo::setFallbackIntervalPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFallbackIntervalPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DateIntervalInfo::setIntervalPattern(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setIntervalPattern",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DateIntervalInfo::setIntervalPattern(const QString &arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setIntervalPattern",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateIntervalInfo : public __jni_impl::android::icu::text::DateIntervalInfo
	{
	public:
		DateIntervalInfo(QAndroidJniObject obj) { __thiz = obj; }
		DateIntervalInfo(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		DateIntervalInfo(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEINTERVALINFO

