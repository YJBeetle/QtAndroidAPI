#pragma once

#include "../../../JCharArray.hpp"
#include "../../content/Context.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/text/DateFormat.def.hpp"
#include "../../../java/util/Calendar.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateFormat.def.hpp"

namespace android::text::format
{
	// Fields
	
	// Constructors
	inline DateFormat::DateFormat()
		: JObject(
			"android.text.format.DateFormat",
			"()V"
		) {}
	
	// Methods
	inline JString DateFormat::format(JString arg0, java::util::Calendar arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString DateFormat::format(JString arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString DateFormat::format(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString DateFormat::getBestDateTimePattern(java::util::Locale arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getBestDateTimePattern",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::text::DateFormat DateFormat::getDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	inline JCharArray DateFormat::getDateFormatOrder(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormatOrder",
			"(Landroid/content/Context;)[C",
			arg0.object()
		);
	}
	inline java::text::DateFormat DateFormat::getLongDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getLongDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	inline java::text::DateFormat DateFormat::getMediumDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getMediumDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	inline java::text::DateFormat DateFormat::getTimeFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getTimeFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	inline jboolean DateFormat::is24HourFormat(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.format.DateFormat",
			"is24HourFormat",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
} // namespace android::text::format

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::format;
#endif
