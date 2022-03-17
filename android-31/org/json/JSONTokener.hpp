#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONException.def.hpp"
#include "./JSONTokener.def.hpp"

namespace org::json
{
	// Fields
	
	// Constructors
	inline JSONTokener::JSONTokener(JString arg0)
		: JObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint JSONTokener::dehexchar(jchar arg0)
	{
		return callStaticMethod<jint>(
			"org.json.JSONTokener",
			"dehexchar",
			"(C)I",
			arg0
		);
	}
	inline void JSONTokener::back() const
	{
		callMethod<void>(
			"back",
			"()V"
		);
	}
	inline jboolean JSONTokener::more() const
	{
		return callMethod<jboolean>(
			"more",
			"()Z"
		);
	}
	inline jchar JSONTokener::next() const
	{
		return callMethod<jchar>(
			"next",
			"()C"
		);
	}
	inline jchar JSONTokener::next(jchar arg0) const
	{
		return callMethod<jchar>(
			"next",
			"(C)C",
			arg0
		);
	}
	inline JString JSONTokener::next(jint arg0) const
	{
		return callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jchar JSONTokener::nextClean() const
	{
		return callMethod<jchar>(
			"nextClean",
			"()C"
		);
	}
	inline JString JSONTokener::nextString(jchar arg0) const
	{
		return callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JString JSONTokener::nextTo(jchar arg0) const
	{
		return callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JString JSONTokener::nextTo(JString arg0) const
	{
		return callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject JSONTokener::nextValue() const
	{
		return callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;"
		);
	}
	inline void JSONTokener::skipPast(JString arg0) const
	{
		callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jchar JSONTokener::skipTo(jchar arg0) const
	{
		return callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0
		);
	}
	inline org::json::JSONException JSONTokener::syntaxError(JString arg0) const
	{
		return callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0.object<jstring>()
		);
	}
	inline JString JSONTokener::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::json

// Base class headers

