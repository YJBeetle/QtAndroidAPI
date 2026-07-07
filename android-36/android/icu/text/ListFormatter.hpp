#pragma once

#include "../../../JObjectArray.hpp"
#include "./ListFormatter_FormattedList.def.hpp"
#include "./ListFormatter_Type.def.hpp"
#include "./ListFormatter_Width.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./ListFormatter.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::ListFormatter ListFormatter::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"()Landroid/icu/text/ListFormatter;"
		);
	}
	inline android::icu::text::ListFormatter ListFormatter::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ListFormatter;",
			arg0.object()
		);
	}
	inline android::icu::text::ListFormatter ListFormatter::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;",
			arg0.object()
		);
	}
	inline android::icu::text::ListFormatter ListFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::ListFormatter_Type arg1, android::icu::text::ListFormatter_Width arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/ListFormatter$Type;Landroid/icu/text/ListFormatter$Width;)Landroid/icu/text/ListFormatter;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::icu::text::ListFormatter ListFormatter::getInstance(java::util::Locale arg0, android::icu::text::ListFormatter_Type arg1, android::icu::text::ListFormatter_Width arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/ListFormatter$Type;Landroid/icu/text/ListFormatter$Width;)Landroid/icu/text/ListFormatter;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString ListFormatter::format(JObjectArray arg0) const
	{
		return callObjectMethod(
			"format",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString ListFormatter::format(JObject arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Collection;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::icu::text::ListFormatter_FormattedList ListFormatter::formatToValue(JObjectArray arg0) const
	{
		return callObjectMethod(
			"formatToValue",
			"([Ljava/lang/Object;)Landroid/icu/text/ListFormatter$FormattedList;",
			arg0.object<jobjectArray>()
		);
	}
	inline android::icu::text::ListFormatter_FormattedList ListFormatter::formatToValue(JObject arg0) const
	{
		return callObjectMethod(
			"formatToValue",
			"(Ljava/util/Collection;)Landroid/icu/text/ListFormatter$FormattedList;",
			arg0.object()
		);
	}
	inline JString ListFormatter::getPatternForNumItems(jint arg0) const
	{
		return callObjectMethod(
			"getPatternForNumItems",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
