#pragma once

#ifndef ANDROID_ICU_TEXT_CURRENCYPLURALINFO
#define ANDROID_ICU_TEXT_CURRENCYPLURALINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class PluralRules;
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
	class CurrencyPluralInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getCurrencyPluralPattern(jstring arg0);
		jstring getCurrencyPluralPattern(const QString &arg0);
		QAndroidJniObject getLocale();
		QAndroidJniObject getPluralRules();
		jint hashCode();
		void setCurrencyPluralPattern(jstring arg0, jstring arg1);
		void setCurrencyPluralPattern(const QString &arg0, const QString &arg1);
		void setLocale(__jni_impl::android::icu::util::ULocale arg0);
		void setPluralRules(jstring arg0);
		void setPluralRules(const QString &arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "PluralRules.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CurrencyPluralInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"()V"
		);
	}
	void CurrencyPluralInfo::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void CurrencyPluralInfo::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CurrencyPluralInfo::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.__jniObject().object()
		);
	}
	jobject CurrencyPluralInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean CurrencyPluralInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CurrencyPluralInfo::getCurrencyPluralPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCurrencyPluralPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring CurrencyPluralInfo::getCurrencyPluralPattern(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCurrencyPluralPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject CurrencyPluralInfo::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getPluralRules()
	{
		return __thiz.callObjectMethod(
			"getPluralRules",
			"()Landroid/icu/text/PluralRules;"
		);
	}
	jint CurrencyPluralInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CurrencyPluralInfo::setCurrencyPluralPattern(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setCurrencyPluralPattern",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void CurrencyPluralInfo::setCurrencyPluralPattern(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setCurrencyPluralPattern",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void CurrencyPluralInfo::setLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void CurrencyPluralInfo::setPluralRules(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CurrencyPluralInfo::setPluralRules(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CurrencyPluralInfo : public __jni_impl::android::icu::text::CurrencyPluralInfo
	{
	public:
		CurrencyPluralInfo(QAndroidJniObject obj) { __thiz = obj; }
		CurrencyPluralInfo()
		{
			__constructor();
		}
		CurrencyPluralInfo(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		CurrencyPluralInfo(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_CURRENCYPLURALINFO

