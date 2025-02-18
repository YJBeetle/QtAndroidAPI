#pragma once

#include "./LocaleData_MeasurementSystem.def.hpp"
#include "./LocaleData_PaperSize.def.hpp"
#include "./ULocale.def.hpp"
#include "./VersionInfo.def.hpp"
#include "../../../JString.hpp"
#include "./LocaleData.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint LocaleData::ALT_QUOTATION_END()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_END"
		);
	}
	inline jint LocaleData::ALT_QUOTATION_START()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_START"
		);
	}
	inline jint LocaleData::QUOTATION_END()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_END"
		);
	}
	inline jint LocaleData::QUOTATION_START()
	{
		return getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_START"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::VersionInfo LocaleData::getCLDRVersion()
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getCLDRVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	inline android::icu::util::LocaleData LocaleData::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"()Landroid/icu/util/LocaleData;"
		);
	}
	inline android::icu::util::LocaleData LocaleData::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData;",
			arg0.object()
		);
	}
	inline android::icu::util::LocaleData_MeasurementSystem LocaleData::getMeasurementSystem(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getMeasurementSystem",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$MeasurementSystem;",
			arg0.object()
		);
	}
	inline android::icu::util::LocaleData_PaperSize LocaleData::getPaperSize(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getPaperSize",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$PaperSize;",
			arg0.object()
		);
	}
	inline JString LocaleData::getDelimiter(jint arg0) const
	{
		return callObjectMethod(
			"getDelimiter",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean LocaleData::getNoSubstitute() const
	{
		return callMethod<jboolean>(
			"getNoSubstitute",
			"()Z"
		);
	}
	inline void LocaleData::setNoSubstitute(jboolean arg0) const
	{
		callMethod<void>(
			"setNoSubstitute",
			"(Z)V",
			arg0
		);
	}
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
