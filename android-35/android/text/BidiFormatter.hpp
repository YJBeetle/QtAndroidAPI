#pragma once

#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./BidiFormatter.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::text::BidiFormatter BidiFormatter::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
		);
	}
	inline android::text::BidiFormatter BidiFormatter::getInstance(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Z)Landroid/text/BidiFormatter;",
			arg0
		);
	}
	inline android::text::BidiFormatter BidiFormatter::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.object()
		);
	}
	inline jboolean BidiFormatter::getStereoReset() const
	{
		return callMethod<jboolean>(
			"getStereoReset",
			"()Z"
		);
	}
	inline jboolean BidiFormatter::isRtl(JString arg0) const
	{
		return callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean BidiFormatter::isRtlContext() const
	{
		return callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	inline JString BidiFormatter::unicodeWrap(JString arg0) const
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline JString BidiFormatter::unicodeWrap(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString BidiFormatter::unicodeWrap(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString BidiFormatter::unicodeWrap(JString arg0, JObject arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
