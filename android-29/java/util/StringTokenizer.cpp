#include "../../JIntArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringTokenizer.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	StringTokenizer::StringTokenizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringTokenizer::StringTokenizer(JString arg0)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	StringTokenizer::StringTokenizer(JString arg0, JString arg1)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	StringTokenizer::StringTokenizer(JString arg0, JString arg1, jboolean arg2)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
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
	JObject StringTokenizer::nextElement()
	{
		return callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		);
	}
	JString StringTokenizer::nextToken()
	{
		return callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		);
	}
	JString StringTokenizer::nextToken(JString arg0)
	{
		return callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

