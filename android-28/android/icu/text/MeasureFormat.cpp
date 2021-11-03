#include "../../../JArray.hpp"
#include "./MeasureFormat_FormatWidth.hpp"
#include "./NumberFormat.hpp"
#include "../util/Measure.hpp"
#include "../util/MeasureUnit.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./MeasureFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	MeasureFormat::MeasureFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat()
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"()Landroid/icu/text/MeasureFormat;"
		);
	}
	android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat;",
			arg0.object()
		);
	}
	android::icu::text::MeasureFormat MeasureFormat::getCurrencyFormat(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Ljava/util/Locale;)Landroid/icu/text/MeasureFormat;",
			arg0.object()
		);
	}
	android::icu::text::MeasureFormat MeasureFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::MeasureFormat MeasureFormat::getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::MeasureFormat MeasureFormat::getInstance(android::icu::util::ULocale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2)
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
	android::icu::text::MeasureFormat MeasureFormat::getInstance(java::util::Locale arg0, android::icu::text::MeasureFormat_FormatWidth arg1, android::icu::text::NumberFormat arg2)
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
	jboolean MeasureFormat::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer MeasureFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuilder MeasureFormat::formatMeasurePerUnit(android::icu::util::Measure arg0, android::icu::util::MeasureUnit arg1, java::lang::StringBuilder arg2, java::text::FieldPosition arg3)
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
	JString MeasureFormat::formatMeasures(JArray arg0)
	{
		return callObjectMethod(
			"formatMeasures",
			"([Landroid/icu/util/Measure;)Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	java::lang::StringBuilder MeasureFormat::formatMeasures(java::lang::StringBuilder arg0, java::text::FieldPosition arg1, JArray arg2)
	{
		return callObjectMethod(
			"formatMeasures",
			"(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	android::icu::util::ULocale MeasureFormat::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	android::icu::text::NumberFormat MeasureFormat::getNumberFormat()
	{
		return callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	JString MeasureFormat::getUnitDisplayName(android::icu::util::MeasureUnit arg0)
	{
		return callObjectMethod(
			"getUnitDisplayName",
			"(Landroid/icu/util/MeasureUnit;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::icu::text::MeasureFormat_FormatWidth MeasureFormat::getWidth()
	{
		return callObjectMethod(
			"getWidth",
			"()Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
	jint MeasureFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::icu::util::Measure MeasureFormat::parseObject(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/Measure;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::icu::text

