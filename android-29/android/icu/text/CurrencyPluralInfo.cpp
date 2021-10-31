#include "./PluralRules.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CurrencyPluralInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CurrencyPluralInfo::CurrencyPluralInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CurrencyPluralInfo::CurrencyPluralInfo()
		: __JniBaseClass(
			"android.icu.text.CurrencyPluralInfo",
			"()V"
		) {}
	CurrencyPluralInfo::CurrencyPluralInfo(android::icu::util::ULocale arg0)
		: __JniBaseClass(
			"android.icu.text.CurrencyPluralInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	CurrencyPluralInfo::CurrencyPluralInfo(java::util::Locale arg0)
		: __JniBaseClass(
			"android.icu.text.CurrencyPluralInfo",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
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
			arg0.object()
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CurrencyPluralInfo",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/CurrencyPluralInfo;",
			arg0.object()
		);
	}
	jobject CurrencyPluralInfo::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean CurrencyPluralInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CurrencyPluralInfo::getCurrencyPluralPattern(jstring arg0)
	{
		return callObjectMethod(
			"getCurrencyPluralPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject CurrencyPluralInfo::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject CurrencyPluralInfo::getPluralRules()
	{
		return callObjectMethod(
			"getPluralRules",
			"()Landroid/icu/text/PluralRules;"
		);
	}
	jint CurrencyPluralInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CurrencyPluralInfo::setCurrencyPluralPattern(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setCurrencyPluralPattern",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void CurrencyPluralInfo::setLocale(android::icu::util::ULocale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		);
	}
	void CurrencyPluralInfo::setPluralRules(jstring arg0)
	{
		callMethod<void>(
			"setPluralRules",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::icu::text

