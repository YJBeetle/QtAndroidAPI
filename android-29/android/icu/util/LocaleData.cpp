#include "./LocaleData_MeasurementSystem.hpp"
#include "./LocaleData_PaperSize.hpp"
#include "./ULocale.hpp"
#include "./VersionInfo.hpp"
#include "./LocaleData.hpp"

namespace android::icu::util
{
	// Fields
	jint LocaleData::ALT_QUOTATION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_END"
		);
	}
	jint LocaleData::ALT_QUOTATION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_START"
		);
	}
	jint LocaleData::QUOTATION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_END"
		);
	}
	jint LocaleData::QUOTATION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_START"
		);
	}
	
	LocaleData::LocaleData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LocaleData::getCLDRVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getCLDRVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	QAndroidJniObject LocaleData::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"()Landroid/icu/util/LocaleData;"
		);
	}
	QAndroidJniObject LocaleData::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocaleData::getMeasurementSystem(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getMeasurementSystem",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$MeasurementSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocaleData::getPaperSize(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getPaperSize",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$PaperSize;",
			arg0.__jniObject().object()
		);
	}
	jstring LocaleData::getDelimiter(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDelimiter",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean LocaleData::getNoSubstitute()
	{
		return __thiz.callMethod<jboolean>(
			"getNoSubstitute",
			"()Z"
		);
	}
	void LocaleData::setNoSubstitute(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNoSubstitute",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::util

