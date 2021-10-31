#include "./StringTokenizer.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	StringTokenizer::StringTokenizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StringTokenizer::StringTokenizer(jstring arg0)
		: __JniBaseClass(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	StringTokenizer::StringTokenizer(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	StringTokenizer::StringTokenizer(jstring arg0, jstring arg1, jboolean arg2)
		: __JniBaseClass(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint StringTokenizer::countTokens()
	{
		return callMethod<jint>(
			"countTokens",
			"()I"
		);
	}
	jboolean StringTokenizer::hasMoreElements()
	{
		return callMethod<jboolean>(
			"hasMoreElements",
			"()Z"
		);
	}
	jboolean StringTokenizer::hasMoreTokens()
	{
		return callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
	jobject StringTokenizer::nextElement()
	{
		return callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring StringTokenizer::nextToken()
	{
		return callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StringTokenizer::nextToken(jstring arg0)
	{
		return callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace java::util

