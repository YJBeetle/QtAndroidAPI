#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONStringer.def.hpp"

namespace org::json
{
	// Fields
	
	// Constructors
	inline JSONStringer::JSONStringer()
		: JObject(
			"org.json.JSONStringer",
			"()V"
		) {}
	
	// Methods
	inline org::json::JSONStringer JSONStringer::array() const
	{
		return callObjectMethod(
			"array",
			"()Lorg/json/JSONStringer;"
		);
	}
	inline org::json::JSONStringer JSONStringer::endArray() const
	{
		return callObjectMethod(
			"endArray",
			"()Lorg/json/JSONStringer;"
		);
	}
	inline org::json::JSONStringer JSONStringer::endObject() const
	{
		return callObjectMethod(
			"endObject",
			"()Lorg/json/JSONStringer;"
		);
	}
	inline org::json::JSONStringer JSONStringer::key(JString arg0) const
	{
		return callObjectMethod(
			"key",
			"(Ljava/lang/String;)Lorg/json/JSONStringer;",
			arg0.object<jstring>()
		);
	}
	inline org::json::JSONStringer JSONStringer::object() const
	{
		return callObjectMethod(
			"object",
			"()Lorg/json/JSONStringer;"
		);
	}
	inline JString JSONStringer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline org::json::JSONStringer JSONStringer::value(jboolean arg0) const
	{
		return callObjectMethod(
			"value",
			"(Z)Lorg/json/JSONStringer;",
			arg0
		);
	}
	inline org::json::JSONStringer JSONStringer::value(jdouble arg0) const
	{
		return callObjectMethod(
			"value",
			"(D)Lorg/json/JSONStringer;",
			arg0
		);
	}
	inline org::json::JSONStringer JSONStringer::value(JObject arg0) const
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Object;)Lorg/json/JSONStringer;",
			arg0.object<jobject>()
		);
	}
	inline org::json::JSONStringer JSONStringer::value(jlong arg0) const
	{
		return callObjectMethod(
			"value",
			"(J)Lorg/json/JSONStringer;",
			arg0
		);
	}
} // namespace org::json

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::json;
#endif
