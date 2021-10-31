#include "./StringTokenizer.hpp"

namespace java::util
{
	// Fields
	
	StringTokenizer::StringTokenizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringTokenizer::StringTokenizer(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StringTokenizer::StringTokenizer(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	StringTokenizer::StringTokenizer(jstring arg0, jstring arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint StringTokenizer::countTokens()
	{
		return __thiz.callMethod<jint>(
			"countTokens",
			"()I"
		);
	}
	jboolean StringTokenizer::hasMoreElements()
	{
		return __thiz.callMethod<jboolean>(
			"hasMoreElements",
			"()Z"
		);
	}
	jboolean StringTokenizer::hasMoreTokens()
	{
		return __thiz.callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
	jobject StringTokenizer::nextElement()
	{
		return __thiz.callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring StringTokenizer::nextToken()
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StringTokenizer::nextToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace java::util

