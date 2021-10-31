#include "../../java/lang/Number.hpp"
#include "./JSONArray.hpp"
#include "./JSONTokener.hpp"
#include "./JSONObject.hpp"

namespace org::json
{
	// Fields
	jobject JSONObject::_NULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.json.JSONObject",
			"NULL",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QAndroidJniObject forward
	JSONObject::JSONObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	JSONObject::JSONObject()
		: __JniBaseClass(
			"org.json.JSONObject",
			"()V"
		) {}
	JSONObject::JSONObject(jstring arg0)
		: __JniBaseClass(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	JSONObject::JSONObject(__JniBaseClass arg0)
		: __JniBaseClass(
			"org.json.JSONObject",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	JSONObject::JSONObject(org::json::JSONTokener arg0)
		: __JniBaseClass(
			"org.json.JSONObject",
			"(Lorg/json/JSONTokener;)V",
			arg0.object()
		) {}
	JSONObject::JSONObject(org::json::JSONObject &arg0, jarray arg1)
		: __JniBaseClass(
			"org.json.JSONObject",
			"(Lorg/json/JSONObject;[Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jstring JSONObject::numberToString(java::lang::Number arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"numberToString",
			"(Ljava/lang/Number;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring JSONObject::quote(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject JSONObject::wrap(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"wrap",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	org::json::JSONObject JSONObject::accumulate(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	jobject JSONObject::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean JSONObject::getBoolean(jstring arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jdouble JSONObject::getDouble(jstring arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jint JSONObject::getInt(jstring arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	org::json::JSONArray JSONObject::getJSONArray(jstring arg0)
	{
		return callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONObject JSONObject::getJSONObject(jstring arg0)
	{
		return callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	jlong JSONObject::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jstring JSONObject::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean JSONObject::has(jstring arg0)
	{
		return callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::isNull(jstring arg0)
	{
		return callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass JSONObject::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Iterator;"
		);
	}
	jint JSONObject::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	org::json::JSONArray JSONObject::names()
	{
		return callObjectMethod(
			"names",
			"()Lorg/json/JSONArray;"
		);
	}
	jobject JSONObject::opt(jstring arg0)
	{
		return callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean JSONObject::optBoolean(jstring arg0)
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::optBoolean(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jdouble JSONObject::optDouble(jstring arg0)
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble JSONObject::optDouble(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jint JSONObject::optInt(jstring arg0)
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint JSONObject::optInt(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	org::json::JSONArray JSONObject::optJSONArray(jstring arg0)
	{
		return callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	org::json::JSONObject JSONObject::optJSONObject(jstring arg0)
	{
		return callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	jlong JSONObject::optLong(jstring arg0)
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong JSONObject::optLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jstring JSONObject::optString(jstring arg0)
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONObject::optString(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	org::json::JSONObject JSONObject::put(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(jstring arg0, jdouble arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	org::json::JSONObject JSONObject::put(jstring arg0, jlong arg1)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	org::json::JSONObject JSONObject::putOpt(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	jobject JSONObject::remove(jstring arg0)
	{
		return callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	org::json::JSONArray JSONObject::toJSONArray(org::json::JSONArray arg0)
	{
		return callObjectMethod(
			"toJSONArray",
			"(Lorg/json/JSONArray;)Lorg/json/JSONArray;",
			arg0.object()
		);
	}
	jstring JSONObject::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring JSONObject::toString(jint arg0)
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace org::json

