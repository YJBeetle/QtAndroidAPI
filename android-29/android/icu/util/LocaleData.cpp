#include "./LocaleData_MeasurementSystem.hpp"
#include "./LocaleData_PaperSize.hpp"
#include "./ULocale.hpp"
#include "./VersionInfo.hpp"
#include "../../../JString.hpp"
#include "./LocaleData.hpp"

namespace android::icu::util
{
	// Fields
	jint LocaleData::ALT_QUOTATION_END()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_END"
		);
	}
	jint LocaleData::ALT_QUOTATION_START()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_START"
		);
	}
	jint LocaleData::QUOTATION_END()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_END"
		);
	}
	jint LocaleData::QUOTATION_START()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_START"
		);
	}
	
	// QAndroidJniObject forward
	LocaleData::LocaleData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::util::VersionInfo LocaleData::getCLDRVersion()
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getCLDRVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	android::icu::util::LocaleData LocaleData::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"()Landroid/icu/util/LocaleData;"
		);
	}
	android::icu::util::LocaleData LocaleData::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData;",
			arg0.object()
		);
	}
	android::icu::util::LocaleData_MeasurementSystem LocaleData::getMeasurementSystem(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getMeasurementSystem",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$MeasurementSystem;",
			arg0.object()
		);
	}
	android::icu::util::LocaleData_PaperSize LocaleData::getPaperSize(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getPaperSize",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$PaperSize;",
			arg0.object()
		);
	}
	JString LocaleData::getDelimiter(jint arg0)
	{
		return callObjectMethod(
			"getDelimiter",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean LocaleData::getNoSubstitute()
	{
		return callMethod<jboolean>(
			"getNoSubstitute",
			"()Z"
		);
	}
	void LocaleData::setNoSubstitute(jboolean arg0)
	{
		callMethod<void>(
			"setNoSubstitute",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::util

