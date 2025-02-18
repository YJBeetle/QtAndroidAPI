#pragma once

#include "../../JIntArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StringTokenizer.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline StringTokenizer::StringTokenizer(JString arg0)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline StringTokenizer::StringTokenizer(JString arg0, JString arg1)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline StringTokenizer::StringTokenizer(JString arg0, JString arg1, jboolean arg2)
		: JObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jint StringTokenizer::countTokens() const
	{
		return callMethod<jint>(
			"countTokens",
			"()I"
		);
	}
	inline jboolean StringTokenizer::hasMoreElements() const
	{
		return callMethod<jboolean>(
			"hasMoreElements",
			"()Z"
		);
	}
	inline jboolean StringTokenizer::hasMoreTokens() const
	{
		return callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
	inline JObject StringTokenizer::nextElement() const
	{
		return callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		);
	}
	inline JString StringTokenizer::nextToken() const
	{
		return callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		);
	}
	inline JString StringTokenizer::nextToken(JString arg0) const
	{
		return callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
