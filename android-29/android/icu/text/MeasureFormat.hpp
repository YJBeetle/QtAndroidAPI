#pragma once

#include "../../../JArray.hpp"
#include "./MeasureFormat_FormatWidth.def.hpp"
#include "./NumberFormat.def.hpp"
#include "../util/Measure.def.hpp"
#include "../util/MeasureUnit.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/lang/StringBuilder.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./MeasureFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat()
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"()Landroid/icu/text/MeasureFormat;"
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Ljava/util/Locale;)Landroid/icu/text/MeasureFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::icu::text::MeasureFormat MeasureFormat::getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean MeasureFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuffer MeasureFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuilder MeasureFormat::formatMeasurePerUnit(android::icu::util::Measure arg0, android::icu::util::MeasureUnit arg1, java::lang::StringBuilder arg2, java::text::FieldPosition arg3) const
	{
		return callObjectMethod(
			"formatMeasurePerUnit",
			"(Landroid/icu/util/Measure;Landroid/icu/util/MeasureUnit;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString MeasureFormat::formatMeasures(JArray arg0) const
	{
		return callObjectMethod(
			"formatMeasures",
			"([Landroid/icu/util/Measure;)Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	inline java::lang::StringBuilder MeasureFormat::formatMeasures(java::lang::StringBuilder arg0, java::text::FieldPosition arg1, JArray arg2) const
	{
		return callObjectMethod(
			"formatMeasures",
			"(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline android::icu::util::ULocale MeasureFormat::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::text::NumberFormat MeasureFormat::getNumberFormat() const
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	inline JString MeasureFormat::getUnitDisplayName(android::icu::util::MeasureUnit arg0) const
	{
		return callObjectMethod(
			"getUnitDisplayName",
			"(Landroid/icu/util/MeasureUnit;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::icu::text::MeasureFormat_FormatWidth MeasureFormat::getWidth() const
	{
		return callObjectMethod(
			"getWidth",
			"()Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	inline jint MeasureFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::icu::util::Measure MeasureFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/Measure;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

