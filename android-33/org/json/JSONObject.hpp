#pragma once

#include "../../JArray.hpp"
#include "../../java/lang/Number.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JSONArray.def.hpp"
#include "./JSONTokener.def.hpp"
#include "./JSONObject.def.hpp"

namespace org::json
{
	// Fields
	inline JObject JSONObject::NULL_()
	{
		return getStaticObjectField(
			"org.json.JSONObject",
			"NULL",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline JSONObject::JSONObject()
		: JObject(
			"org.json.JSONObject",
			"()V"
		) {}
	inline JSONObject::JSONObject(JString arg0)
		: JObject(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline JSONObject::JSONObject(JObject arg0)
		: JObject(
			"org.json.JSONObject",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	inline JSONObject::JSONObject(org::json::JSONTokener arg0)
		: JObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONTokener;)V",
			arg0.object()
		) {}
	inline JSONObject::JSONObject(org::json::JSONObject &arg0, JArray arg1)
		: JObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONObject;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline JString JSONObject::numberToString(java::lang::Number arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"numberToString",
			"(Ljava/lang/Number;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString JSONObject::quote(JString arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject JSONObject::wrap(JObject arg0)
	{
		return callStaticObjectMethod(
			"org.json.JSONObject",
			"wrap",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline org::json::JSONObject JSONObject::accumulate(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline org::json::JSONObject JSONObject::append(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline JObject JSONObject::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jboolean JSONObject::getBoolean(JString arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jdouble JSONObject::getDouble(JString arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline jint JSONObject::getInt(JString arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline org::json::JSONArray JSONObject::getJSONArray(JString arg0) const
	{
		return callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0.object<jstring>()
		);
	}
	inline org::json::JSONObject JSONObject::getJSONObject(JString arg0) const
	{
		return callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0.object<jstring>()
		);
	}
	inline jlong JSONObject::getLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline JString JSONObject::getString(JString arg0) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean JSONObject::has(JString arg0) const
	{
		return callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean JSONObject::isNull(JString arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject JSONObject::keys() const
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint JSONObject::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline org::json::JSONArray JSONObject::names() const
	{
		return callObjectMethod(
			"names",
			"()Lorg/json/JSONArray;"
		);
	}
	inline JObject JSONObject::opt(JString arg0) const
	{
		return callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jboolean JSONObject::optBoolean(JString arg0) const
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean JSONObject::optBoolean(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jdouble JSONObject::optDouble(JString arg0) const
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline jdouble JSONObject::optDouble(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint JSONObject::optInt(JString arg0) const
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint JSONObject::optInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline org::json::JSONArray JSONObject::optJSONArray(JString arg0) const
	{
		return callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0.object<jstring>()
		);
	}
	inline org::json::JSONObject JSONObject::optJSONObject(JString arg0) const
	{
		return callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0.object<jstring>()
		);
	}
	inline jlong JSONObject::optLong(JString arg0) const
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong JSONObject::optLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString JSONObject::optString(JString arg0) const
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString JSONObject::optString(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline org::json::JSONObject JSONObject::put(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline org::json::JSONObject JSONObject::put(JString arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline org::json::JSONObject JSONObject::put(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline org::json::JSONObject JSONObject::put(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline org::json::JSONObject JSONObject::put(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline org::json::JSONObject JSONObject::putOpt(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline JObject JSONObject::remove(JString arg0) const
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline org::json::JSONArray JSONObject::toJSONArray(org::json::JSONArray arg0) const
	{
		return callObjectMethod(
			"toJSONArray",
			"(Lorg/json/JSONArray;)Lorg/json/JSONArray;",
			arg0.object()
		);
	}
	inline JString JSONObject::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JString JSONObject::toString(jint arg0) const
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace org::json

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::json;
#endif
