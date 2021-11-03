#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::util::regex
{
	class Matcher;
}
namespace java::util::regex
{
	class PatternSyntaxException;
}

namespace java::util::regex
{
	class Pattern : public JObject
	{
	public:
		// Fields
		static jint CANON_EQ();
		static jint CASE_INSENSITIVE();
		static jint COMMENTS();
		static jint DOTALL();
		static jint LITERAL();
		static jint MULTILINE();
		static jint UNICODE_CASE();
		static jint UNICODE_CHARACTER_CLASS();
		static jint UNIX_LINES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Pattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Pattern(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::regex::Pattern compile(JString arg0);
		static java::util::regex::Pattern compile(JString arg0, jint arg1);
		static jboolean matches(JString arg0, JString arg1);
		static JString quote(JString arg0);
		JObject asMatchPredicate() const;
		JObject asPredicate() const;
		jint flags() const;
		java::util::regex::Matcher matcher(JString arg0) const;
		JString pattern() const;
		JArray split(JString arg0) const;
		JArray split(JString arg0, jint arg1) const;
		JObject splitAsStream(JString arg0) const;
		JString toString() const;
	};
} // namespace java::util::regex

