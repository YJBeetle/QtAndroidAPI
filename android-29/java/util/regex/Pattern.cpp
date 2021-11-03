#include "../../io/ObjectInputStream.hpp"
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
	
	// QAndroidJniObject forward
	Pattern::Pattern(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::regex::Pattern Pattern::compile(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;)Ljava/util/regex/Pattern;",
			arg0
		);
	}
	java::util::regex::Pattern Pattern::compile(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;I)Ljava/util/regex/Pattern;",
			arg0,
			arg1
		);
	}
	jboolean Pattern::matches(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"java.util.regex.Pattern",
			"matches",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Z",
			arg0,
			arg1
		);
	}
	jstring Pattern::quote(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.regex.Pattern",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject Pattern::asMatchPredicate()
	{
		return callObjectMethod(
			"asMatchPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	JObject Pattern::asPredicate()
	{
		return callObjectMethod(
			"asPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	jint Pattern::flags()
	{
		return callMethod<jint>(
			"flags",
			"()I"
		);
	}
	java::util::regex::Matcher Pattern::matcher(jstring arg0)
	{
		return callObjectMethod(
			"matcher",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	jstring Pattern::pattern()
	{
		return callObjectMethod(
			"pattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Pattern::split(jstring arg0)
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Pattern::split(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;I)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	JObject Pattern::splitAsStream(jstring arg0)
	{
		return callObjectMethod(
			"splitAsStream",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	jstring Pattern::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::regex

