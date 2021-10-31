#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
	class Pattern : public __JniBaseClass
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
		template<typename ...Ts> explicit Pattern(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Pattern(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject compile(jstring arg0);
		static QAndroidJniObject compile(jstring arg0, jint arg1);
		static jboolean matches(jstring arg0, jstring arg1);
		static jstring quote(jstring arg0);
		QAndroidJniObject asMatchPredicate();
		QAndroidJniObject asPredicate();
		jint flags();
		QAndroidJniObject matcher(jstring arg0);
		jstring pattern();
		jarray split(jstring arg0);
		jarray split(jstring arg0, jint arg1);
		QAndroidJniObject splitAsStream(jstring arg0);
		jstring toString();
	};
} // namespace java::util::regex

