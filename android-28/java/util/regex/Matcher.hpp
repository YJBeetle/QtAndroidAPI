#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuffer.def.hpp"
#include "../../lang/StringBuilder.def.hpp"
#include "./Pattern.def.hpp"
#include "./Matcher.def.hpp"

namespace java::util::regex
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString Matcher::quoteReplacement(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Matcher",
			"quoteReplacement",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::util::regex::Matcher Matcher::appendReplacement(java::lang::StringBuffer arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::util::regex::Matcher Matcher::appendReplacement(java::lang::StringBuilder arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::lang::StringBuffer Matcher::appendTail(java::lang::StringBuffer arg0) const
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.object()
		);
	}
	inline java::lang::StringBuilder Matcher::appendTail(java::lang::StringBuilder arg0) const
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.object()
		);
	}
	inline jint Matcher::end() const
	{
		return callMethod<jint>(
			"end",
			"()I"
		);
	}
	inline jint Matcher::end(jint arg0) const
	{
		return callMethod<jint>(
			"end",
			"(I)I",
			arg0
		);
	}
	inline jint Matcher::end(JString arg0) const
	{
		return callMethod<jint>(
			"end",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jboolean Matcher::find() const
	{
		return callMethod<jboolean>(
			"find",
			"()Z"
		);
	}
	inline jboolean Matcher::find(jint arg0) const
	{
		return callMethod<jboolean>(
			"find",
			"(I)Z",
			arg0
		);
	}
	inline JString Matcher::group() const
	{
		return callObjectMethod(
			"group",
			"()Ljava/lang/String;"
		);
	}
	inline JString Matcher::group(jint arg0) const
	{
		return callObjectMethod(
			"group",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Matcher::group(JString arg0) const
	{
		return callObjectMethod(
			"group",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint Matcher::groupCount() const
	{
		return callMethod<jint>(
			"groupCount",
			"()I"
		);
	}
	inline jboolean Matcher::hasAnchoringBounds() const
	{
		return callMethod<jboolean>(
			"hasAnchoringBounds",
			"()Z"
		);
	}
	inline jboolean Matcher::hasTransparentBounds() const
	{
		return callMethod<jboolean>(
			"hasTransparentBounds",
			"()Z"
		);
	}
	inline jboolean Matcher::hitEnd() const
	{
		return callMethod<jboolean>(
			"hitEnd",
			"()Z"
		);
	}
	inline jboolean Matcher::lookingAt() const
	{
		return callMethod<jboolean>(
			"lookingAt",
			"()Z"
		);
	}
	inline jboolean Matcher::matches() const
	{
		return callMethod<jboolean>(
			"matches",
			"()Z"
		);
	}
	inline java::util::regex::Pattern Matcher::pattern() const
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/util/regex/Pattern;"
		);
	}
	inline java::util::regex::Matcher Matcher::region(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"region",
			"(II)Ljava/util/regex/Matcher;",
			arg0,
			arg1
		);
	}
	inline jint Matcher::regionEnd() const
	{
		return callMethod<jint>(
			"regionEnd",
			"()I"
		);
	}
	inline jint Matcher::regionStart() const
	{
		return callMethod<jint>(
			"regionStart",
			"()I"
		);
	}
	inline JString Matcher::replaceAll(JString arg0) const
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Matcher::replaceAll(JObject arg0) const
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Matcher::replaceFirst(JString arg0) const
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Matcher::replaceFirst(JObject arg0) const
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean Matcher::requireEnd() const
	{
		return callMethod<jboolean>(
			"requireEnd",
			"()Z"
		);
	}
	inline java::util::regex::Matcher Matcher::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/regex/Matcher;"
		);
	}
	inline java::util::regex::Matcher Matcher::reset(JString arg0) const
	{
		return callObjectMethod(
			"reset",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0.object<jstring>()
		);
	}
	inline JObject Matcher::results() const
	{
		return callObjectMethod(
			"results",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline jint Matcher::start() const
	{
		return callMethod<jint>(
			"start",
			"()I"
		);
	}
	inline jint Matcher::start(jint arg0) const
	{
		return callMethod<jint>(
			"start",
			"(I)I",
			arg0
		);
	}
	inline jint Matcher::start(JString arg0) const
	{
		return callMethod<jint>(
			"start",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JObject Matcher::toMatchResult() const
	{
		return callObjectMethod(
			"toMatchResult",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	inline JString Matcher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::regex::Matcher Matcher::useAnchoringBounds(jboolean arg0) const
	{
		return callObjectMethod(
			"useAnchoringBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	inline java::util::regex::Matcher Matcher::usePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"usePattern",
			"(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;",
			arg0.object()
		);
	}
	inline java::util::regex::Matcher Matcher::useTransparentBounds(jboolean arg0) const
	{
		return callObjectMethod(
			"useTransparentBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
} // namespace java::util::regex

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::regex;
#endif
