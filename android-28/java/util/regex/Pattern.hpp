#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuilder.def.hpp"
#include "./Matcher.def.hpp"
#include "./PatternSyntaxException.def.hpp"
#include "./Pattern.def.hpp"

namespace java::util::regex
{
	// Fields
	inline jint Pattern::CANON_EQ()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"CANON_EQ"
		);
	}
	inline jint Pattern::CASE_INSENSITIVE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"CASE_INSENSITIVE"
		);
	}
	inline jint Pattern::COMMENTS()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"COMMENTS"
		);
	}
	inline jint Pattern::DOTALL()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"DOTALL"
		);
	}
	inline jint Pattern::LITERAL()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"LITERAL"
		);
	}
	inline jint Pattern::MULTILINE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"MULTILINE"
		);
	}
	inline jint Pattern::UNICODE_CASE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CASE"
		);
	}
	inline jint Pattern::UNICODE_CHARACTER_CLASS()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CHARACTER_CLASS"
		);
	}
	inline jint Pattern::UNIX_LINES()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNIX_LINES"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::regex::Pattern Pattern::compile(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;)Ljava/util/regex/Pattern;",
			arg0.object<jstring>()
		);
	}
	inline java::util::regex::Pattern Pattern::compile(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;I)Ljava/util/regex/Pattern;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean Pattern::matches(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.regex.Pattern",
			"matches",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString Pattern::quote(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Pattern::asMatchPredicate() const
	{
		return callObjectMethod(
			"asMatchPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	inline JObject Pattern::asPredicate() const
	{
		return callObjectMethod(
			"asPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	inline jint Pattern::flags() const
	{
		return callMethod<jint>(
			"flags",
			"()I"
		);
	}
	inline java::util::regex::Matcher Pattern::matcher(JString arg0) const
	{
		return callObjectMethod(
			"matcher",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0.object<jstring>()
		);
	}
	inline JString Pattern::pattern() const
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/lang/String;"
		);
	}
	inline JArray Pattern::split(JString arg0) const
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JArray Pattern::split(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;I)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject Pattern::splitAsStream(JString arg0) const
	{
		return callObjectMethod(
			"splitAsStream",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	inline JString Pattern::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::regex

// Base class headers

