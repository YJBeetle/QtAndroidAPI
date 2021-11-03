#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuilder.hpp"
#include "./Matcher.hpp"
#include "./PatternSyntaxException.hpp"
#include "./Pattern.hpp"

namespace java::util::regex
{
	// Fields
	jint Pattern::CANON_EQ()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"CANON_EQ"
		);
	}
	jint Pattern::CASE_INSENSITIVE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"CASE_INSENSITIVE"
		);
	}
	jint Pattern::COMMENTS()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"COMMENTS"
		);
	}
	jint Pattern::DOTALL()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"DOTALL"
		);
	}
	jint Pattern::LITERAL()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"LITERAL"
		);
	}
	jint Pattern::MULTILINE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"MULTILINE"
		);
	}
	jint Pattern::UNICODE_CASE()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CASE"
		);
	}
	jint Pattern::UNICODE_CHARACTER_CLASS()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CHARACTER_CLASS"
		);
	}
	jint Pattern::UNIX_LINES()
	{
		return getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNIX_LINES"
		);
	}
	
	// QJniObject forward
	Pattern::Pattern(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::regex::Pattern Pattern::compile(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;)Ljava/util/regex/Pattern;",
			arg0.object<jstring>()
		);
	}
	java::util::regex::Pattern Pattern::compile(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;I)Ljava/util/regex/Pattern;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean Pattern::matches(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.regex.Pattern",
			"matches",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString Pattern::quote(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Pattern::asMatchPredicate() const
	{
		return callObjectMethod(
			"asMatchPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	JObject Pattern::asPredicate() const
	{
		return callObjectMethod(
			"asPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	jint Pattern::flags() const
	{
		return callMethod<jint>(
			"flags",
			"()I"
		);
	}
	java::util::regex::Matcher Pattern::matcher(JString arg0) const
	{
		return callObjectMethod(
			"matcher",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0.object<jstring>()
		);
	}
	JString Pattern::pattern() const
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/lang/String;"
		);
	}
	JArray Pattern::split(JString arg0) const
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JArray Pattern::split(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;I)[Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject Pattern::splitAsStream(JString arg0) const
	{
		return callObjectMethod(
			"splitAsStream",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;",
			arg0.object<jstring>()
		);
	}
	JString Pattern::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::regex

