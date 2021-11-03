#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuffer.hpp"
#include "../../lang/StringBuilder.hpp"
#include "./Pattern.hpp"
#include "./Matcher.hpp"

namespace java::util::regex
{
	// Fields
	
	// QJniObject forward
	Matcher::Matcher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Matcher::quoteReplacement(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Matcher",
			"quoteReplacement",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::util::regex::Matcher Matcher::appendReplacement(java::lang::StringBuffer arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::util::regex::Matcher Matcher::appendReplacement(java::lang::StringBuilder arg0, JString arg1) const
	{
		return callObjectMethod(
			"appendReplacement",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/util/regex/Matcher;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::lang::StringBuffer Matcher::appendTail(java::lang::StringBuffer arg0) const
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;",
			arg0.object()
		);
	}
	java::lang::StringBuilder Matcher::appendTail(java::lang::StringBuilder arg0) const
	{
		return callObjectMethod(
			"appendTail",
			"(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.object()
		);
	}
	jint Matcher::end() const
	{
		return callMethod<jint>(
			"end",
			"()I"
		);
	}
	jint Matcher::end(jint arg0) const
	{
		return callMethod<jint>(
			"end",
			"(I)I",
			arg0
		);
	}
	jint Matcher::end(JString arg0) const
	{
		return callMethod<jint>(
			"end",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jboolean Matcher::find() const
	{
		return callMethod<jboolean>(
			"find",
			"()Z"
		);
	}
	jboolean Matcher::find(jint arg0) const
	{
		return callMethod<jboolean>(
			"find",
			"(I)Z",
			arg0
		);
	}
	JString Matcher::group() const
	{
		return callObjectMethod(
			"group",
			"()Ljava/lang/String;"
		);
	}
	JString Matcher::group(jint arg0) const
	{
		return callObjectMethod(
			"group",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Matcher::group(JString arg0) const
	{
		return callObjectMethod(
			"group",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jint Matcher::groupCount() const
	{
		return callMethod<jint>(
			"groupCount",
			"()I"
		);
	}
	jboolean Matcher::hasAnchoringBounds() const
	{
		return callMethod<jboolean>(
			"hasAnchoringBounds",
			"()Z"
		);
	}
	jboolean Matcher::hasTransparentBounds() const
	{
		return callMethod<jboolean>(
			"hasTransparentBounds",
			"()Z"
		);
	}
	jboolean Matcher::hitEnd() const
	{
		return callMethod<jboolean>(
			"hitEnd",
			"()Z"
		);
	}
	jboolean Matcher::lookingAt() const
	{
		return callMethod<jboolean>(
			"lookingAt",
			"()Z"
		);
	}
	jboolean Matcher::matches() const
	{
		return callMethod<jboolean>(
			"matches",
			"()Z"
		);
	}
	java::util::regex::Pattern Matcher::pattern() const
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/util/regex/Pattern;"
		);
	}
	java::util::regex::Matcher Matcher::region(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"region",
			"(II)Ljava/util/regex/Matcher;",
			arg0,
			arg1
		);
	}
	jint Matcher::regionEnd() const
	{
		return callMethod<jint>(
			"regionEnd",
			"()I"
		);
	}
	jint Matcher::regionStart() const
	{
		return callMethod<jint>(
			"regionStart",
			"()I"
		);
	}
	JString Matcher::replaceAll(JString arg0) const
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Matcher::replaceAll(JObject arg0) const
	{
		return callObjectMethod(
			"replaceAll",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Matcher::replaceFirst(JString arg0) const
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Matcher::replaceFirst(JObject arg0) const
	{
		return callObjectMethod(
			"replaceFirst",
			"(Ljava/util/function/Function;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jboolean Matcher::requireEnd() const
	{
		return callMethod<jboolean>(
			"requireEnd",
			"()Z"
		);
	}
	java::util::regex::Matcher Matcher::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/util/regex/Matcher;"
		);
	}
	java::util::regex::Matcher Matcher::reset(JString arg0) const
	{
		return callObjectMethod(
			"reset",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0.object<jstring>()
		);
	}
	JObject Matcher::results() const
	{
		return callObjectMethod(
			"results",
			"()Ljava/util/stream/Stream;"
		);
	}
	jint Matcher::start() const
	{
		return callMethod<jint>(
			"start",
			"()I"
		);
	}
	jint Matcher::start(jint arg0) const
	{
		return callMethod<jint>(
			"start",
			"(I)I",
			arg0
		);
	}
	jint Matcher::start(JString arg0) const
	{
		return callMethod<jint>(
			"start",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JObject Matcher::toMatchResult() const
	{
		return callObjectMethod(
			"toMatchResult",
			"()Ljava/util/regex/MatchResult;"
		);
	}
	JString Matcher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::util::regex::Matcher Matcher::useAnchoringBounds(jboolean arg0) const
	{
		return callObjectMethod(
			"useAnchoringBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	java::util::regex::Matcher Matcher::usePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"usePattern",
			"(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;",
			arg0.object()
		);
	}
	java::util::regex::Matcher Matcher::useTransparentBounds(jboolean arg0) const
	{
		return callObjectMethod(
			"useTransparentBounds",
			"(Z)Ljava/util/regex/Matcher;",
			arg0
		);
	}
} // namespace java::util::regex

