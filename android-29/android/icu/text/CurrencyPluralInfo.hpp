#pragma once

#ifndef ANDROID_ICU_TEXT_CURRENCYPLURALINFO
#define ANDROID_ICU_TEXT_CURRENCYPLURALINFO

#include "../../../__JniBaseClass.hpp"

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
	class PluralRules;
}

namespace __jni_impl::android::icu::text
{
	class CurrencyPluralInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getLocale();
		void setLocale(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getPluralRules();
		jstring getCurrencyPluralPattern(jstring arg0);
		void setPluralRules(jstring arg0);
		void setCurrencyPluralPattern(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "PluralRules.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CurrencyPluralInfo::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	void CurrencyPluralInfo::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void CurrencyPluralInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"()V");
	}
	
	// Methods
	jboolean CurrencyPluralInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CurrencyPluralInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject CurrencyPluralInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CurrencyPluralInfo::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"()Landroid/icu/text/CurrencyPluralInfo;"
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
	QAndroidJniObject CurrencyPluralInfo::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
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
	QAndroidJniObject CurrencyPluralInfo::getPluralRules()
	{
		return __thiz.callObjectMethod(
			"getPluralRules",
			"()Landroid/icu/text/PluralRules;"
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
	void CurrencyPluralInfo::setPluralRules(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			arg0
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
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CurrencyPluralInfo : public __jni_impl::android::icu::text::CurrencyPluralInfo
	{
	public:
		CurrencyPluralInfo(QAndroidJniObject obj) { __thiz = obj; }
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
		CurrencyPluralInfo()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_CURRENCYPLURALINFO

