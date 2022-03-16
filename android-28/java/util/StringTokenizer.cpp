#include "../../JIntArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringTokenizer.hpp"

namespace java::util
{
	// Fields
	
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
	jint StringTokenizer::countTokens() const
	{
		return callMethod<jint>(
			"countTokens",
			"()I"
		);
	}
	jboolean StringTokenizer::hasMoreElements() const
	{
		return callMethod<jboolean>(
			"hasMoreElements",
			"()Z"
		);
	}
	jboolean StringTokenizer::hasMoreTokens() const
	{
		return callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
	JObject StringTokenizer::nextElement() const
	{
		return callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		);
	}
	JString StringTokenizer::nextToken() const
	{
		return callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		);
	}
	JString StringTokenizer::nextToken(JString arg0) const
	{
		return callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

