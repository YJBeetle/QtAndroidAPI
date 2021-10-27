#include "./PluralRules.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CurrencyPluralInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	CurrencyPluralInfo::CurrencyPluralInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CurrencyPluralInfo::CurrencyPluralInfo()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"()V"
		);
	}
	CurrencyPluralInfo::CurrencyPluralInfo(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	CurrencyPluralInfo::CurrencyPluralInfo(java::util::Locale &arg0)
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
	QAndroidJniObject CurrencyPluralInfo::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getInstance(java::util::Locale arg0)
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
	void CurrencyPluralInfo::setLocale(android::icu::util::ULocale arg0)
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
} // namespace android::icu::text

