#pragma once

#ifndef JAVA_UTIL_REGEX_PATTERN
#define JAVA_UTIL_REGEX_PATTERN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Matcher;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::util::regex
{
	class PatternSyntaxException;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::util::regex
{
	class Pattern : public __JniBaseClass
	{
	public:
		// Fields
		static jint UNIX_LINES();
		static jint CASE_INSENSITIVE();
		static jint COMMENTS();
		static jint MULTILINE();
		static jint LITERAL();
		static jint DOTALL();
		static jint UNICODE_CASE();
		static jint CANON_EQ();
		static jint UNICODE_CHARACTER_CLASS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint flags();
		static jboolean matches(jstring arg0, jstring arg1);
		static jboolean matches(const QString &arg0, const QString &arg1);
		static QAndroidJniObject compile(jstring arg0);
		static QAndroidJniObject compile(const QString &arg0);
		static QAndroidJniObject compile(jstring arg0, jint arg1);
		static QAndroidJniObject compile(const QString &arg0, jint arg1);
		QAndroidJniObject matcher(jstring arg0);
		QAndroidJniObject matcher(const QString &arg0);
		jarray split(jstring arg0);
		jarray split(const QString &arg0);
		jarray split(jstring arg0, jint arg1);
		jarray split(const QString &arg0, jint arg1);
		jstring pattern();
		static jstring quote(jstring arg0);
		static jstring quote(const QString &arg0);
		QAndroidJniObject asPredicate();
		QAndroidJniObject asMatchPredicate();
		QAndroidJniObject splitAsStream(jstring arg0);
		QAndroidJniObject splitAsStream(const QString &arg0);
	};
} // namespace __jni_impl::java::util::regex

#include "Matcher.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "PatternSyntaxException.hpp"
#include "../../lang/StringBuilder.hpp"

namespace __jni_impl::java::util::regex
{
	// Fields
	jint Pattern::UNIX_LINES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNIX_LINES"
		);
	}
	jint Pattern::CASE_INSENSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"CASE_INSENSITIVE"
		);
	}
	jint Pattern::COMMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"COMMENTS"
		);
	}
	jint Pattern::MULTILINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"MULTILINE"
		);
	}
	jint Pattern::LITERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"LITERAL"
		);
	}
	jint Pattern::DOTALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"DOTALL"
		);
	}
	jint Pattern::UNICODE_CASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CASE"
		);
	}
	jint Pattern::CANON_EQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"CANON_EQ"
		);
	}
	jint Pattern::UNICODE_CHARACTER_CLASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.regex.Pattern",
			"UNICODE_CHARACTER_CLASS"
		);
	}
	
	// Constructors
	void Pattern::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.Pattern",
			"(V)V");
	}
	
	// Methods
	jstring Pattern::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Pattern::flags()
	{
		return __thiz.callMethod<jint>(
			"flags",
			"()I"
		);
	}
	jboolean Pattern::matches(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.regex.Pattern",
			"matches",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Z",
			arg0,
			arg1
		);
	}
	jboolean Pattern::matches(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.regex.Pattern",
			"matches",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Pattern::compile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;)Ljava/util/regex/Pattern;",
			arg0
		);
	}
	QAndroidJniObject Pattern::compile(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;)Ljava/util/regex/Pattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Pattern::compile(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;I)Ljava/util/regex/Pattern;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Pattern::compile(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"compile",
			"(Ljava/lang/String;I)Ljava/util/regex/Pattern;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Pattern::matcher(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"matcher",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			arg0
		);
	}
	QAndroidJniObject Pattern::matcher(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"matcher",
			"(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Pattern::split(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Pattern::split(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jarray Pattern::split(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;I)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray Pattern::split(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"split",
			"(Ljava/lang/CharSequence;I)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jarray>();
	}
	jstring Pattern::pattern()
	{
		return __thiz.callObjectMethod(
			"pattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Pattern::quote(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Pattern::quote(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.regex.Pattern",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Pattern::asPredicate()
	{
		return __thiz.callObjectMethod(
			"asPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	QAndroidJniObject Pattern::asMatchPredicate()
	{
		return __thiz.callObjectMethod(
			"asMatchPredicate",
			"()Ljava/util/function/Predicate;"
		);
	}
	QAndroidJniObject Pattern::splitAsStream(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"splitAsStream",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;",
			arg0
		);
	}
	QAndroidJniObject Pattern::splitAsStream(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"splitAsStream",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Stream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::util::regex

namespace java::util::regex
{
	class Pattern : public __jni_impl::java::util::regex::Pattern
	{
	public:
		Pattern(QAndroidJniObject obj) { __thiz = obj; }
		Pattern()
		{
			__constructor();
		}
	};
} // namespace java::util::regex

#endif // JAVA_UTIL_REGEX_PATTERN

