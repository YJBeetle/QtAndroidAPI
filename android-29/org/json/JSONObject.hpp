#pragma once

#ifndef ORG_JSON_JSONOBJECT
#define ORG_JSON_JSONOBJECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::org::json
{
	class JSONTokener;
}
namespace __jni_impl::org::json
{
	class JSONArray;
}
namespace __jni_impl::java::lang
{
	class Number;
}

namespace __jni_impl::org::json
{
	class JSONObject : public __JniBaseClass
	{
	public:
		// Fields
		static jobject NULL();
		
		// Constructors
		void __constructor(__jni_impl::org::json::JSONObject arg0, jarray arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::org::json::JSONTokener arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		jobject remove(jstring arg0);
		jobject get(jstring arg0);
		QAndroidJniObject put(jstring arg0, jobject arg1);
		QAndroidJniObject put(jstring arg0, jboolean arg1);
		QAndroidJniObject put(jstring arg0, jdouble arg1);
		QAndroidJniObject put(jstring arg0, jint arg1);
		QAndroidJniObject put(jstring arg0, jlong arg1);
		jint length();
		jstring toString();
		jstring toString(jint arg0);
		jboolean getBoolean(jstring arg0);
		jint getInt(jstring arg0);
		jlong getLong(jstring arg0);
		jdouble getDouble(jstring arg0);
		QAndroidJniObject keys();
		static jobject wrap(jobject arg0);
		QAndroidJniObject names();
		jboolean isNull(jstring arg0);
		jboolean has(jstring arg0);
		jstring getString(jstring arg0);
		jobject opt(jstring arg0);
		static jstring quote(jstring arg0);
		QAndroidJniObject putOpt(jstring arg0, jobject arg1);
		jboolean optBoolean(jstring arg0, jboolean arg1);
		jboolean optBoolean(jstring arg0);
		jdouble optDouble(jstring arg0, jdouble arg1);
		jdouble optDouble(jstring arg0);
		jint optInt(jstring arg0, jint arg1);
		jint optInt(jstring arg0);
		jlong optLong(jstring arg0);
		jlong optLong(jstring arg0, jlong arg1);
		jstring optString(jstring arg0);
		jstring optString(jstring arg0, jstring arg1);
		QAndroidJniObject getJSONArray(jstring arg0);
		QAndroidJniObject optJSONArray(jstring arg0);
		QAndroidJniObject getJSONObject(jstring arg0);
		QAndroidJniObject optJSONObject(jstring arg0);
		QAndroidJniObject toJSONArray(__jni_impl::org::json::JSONArray arg0);
		static jstring numberToString(__jni_impl::java::lang::Number arg0);
		QAndroidJniObject accumulate(jstring arg0, jobject arg1);
	};
} // namespace __jni_impl::org::json

#include "JSONTokener.hpp"
#include "JSONArray.hpp"
#include "../../java/lang/Number.hpp"

namespace __jni_impl::org::json
{
	// Fields
	jobject JSONObject::NULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.json.JSONObject",
			"NULL",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void JSONObject::__constructor(__jni_impl::org::json::JSONObject arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONObject;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void JSONObject::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void JSONObject::__constructor(__jni_impl::org::json::JSONTokener arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONTokener;)V",
			arg0.__jniObject().object());
	}
	void JSONObject::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object());
	}
	void JSONObject::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"()V");
	}
	
	// Methods
	jobject JSONObject::remove(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject JSONObject::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	jint JSONObject::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring JSONObject::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring JSONObject::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean JSONObject::getBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint JSONObject::getInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jlong JSONObject::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jdouble JSONObject::getDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	QAndroidJniObject JSONObject::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Iterator;"
		);
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
	QAndroidJniObject JSONObject::names()
	{
		return __thiz.callObjectMethod(
			"names",
			"()Lorg/json/JSONArray;"
		);
	}
	jboolean JSONObject::isNull(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::has(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring JSONObject::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject JSONObject::opt(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
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
	QAndroidJniObject JSONObject::putOpt(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	jboolean JSONObject::optBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean JSONObject::optBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jdouble JSONObject::optDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdouble JSONObject::optDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jint JSONObject::optInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint JSONObject::optInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jlong JSONObject::optLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong JSONObject::optLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jstring JSONObject::optString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONObject::optString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject JSONObject::getJSONArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::optJSONArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::getJSONObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::optJSONObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::toJSONArray(__jni_impl::org::json::JSONArray arg0)
	{
		return __thiz.callObjectMethod(
			"toJSONArray",
			"(Lorg/json/JSONArray;)Lorg/json/JSONArray;",
			arg0.__jniObject().object()
		);
	}
	jstring JSONObject::numberToString(__jni_impl::java::lang::Number arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"numberToString",
			"(Ljava/lang/Number;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject JSONObject::accumulate(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::org::json

namespace org::json
{
	class JSONObject : public __jni_impl::org::json::JSONObject
	{
	public:
		JSONObject(QAndroidJniObject obj) { __thiz = obj; }
		JSONObject(__jni_impl::org::json::JSONObject arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JSONObject(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JSONObject(__jni_impl::org::json::JSONTokener arg0)
		{
			__constructor(
				arg0);
		}
		JSONObject(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		JSONObject()
		{
			__constructor();
		}
	};
} // namespace org::json

#endif // ORG_JSON_JSONOBJECT

