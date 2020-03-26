#pragma once

#ifndef ORG_JSON_JSONARRAY
#define ORG_JSON_JSONARRAY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::org::json
{
	class JSONTokener;
}
namespace __jni_impl::org::json
{
	class JSONObject;
}

namespace __jni_impl::org::json
{
	class JSONArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::org::json::JSONTokener arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		jobject remove(jint arg0);
		jobject get(jint arg0);
		QAndroidJniObject put(jint arg0, jboolean arg1);
		QAndroidJniObject put(jint arg0, jdouble arg1);
		QAndroidJniObject put(jint arg0, jint arg1);
		QAndroidJniObject put(jint arg0, jlong arg1);
		QAndroidJniObject put(jint arg0, jobject arg1);
		QAndroidJniObject put(jboolean arg0);
		QAndroidJniObject put(jdouble arg0);
		QAndroidJniObject put(jint arg0);
		QAndroidJniObject put(jobject arg0);
		QAndroidJniObject put(jlong arg0);
		jboolean equals(jobject arg0);
		jint length();
		jstring toString();
		jstring toString(jint arg0);
		jint hashCode();
		jboolean getBoolean(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jdouble getDouble(jint arg0);
		jstring join(jstring arg0);
		jboolean isNull(jint arg0);
		jstring getString(jint arg0);
		jobject opt(jint arg0);
		jboolean optBoolean(jint arg0, jboolean arg1);
		jboolean optBoolean(jint arg0);
		jdouble optDouble(jint arg0, jdouble arg1);
		jdouble optDouble(jint arg0);
		jint optInt(jint arg0);
		jint optInt(jint arg0, jint arg1);
		jlong optLong(jint arg0, jlong arg1);
		jlong optLong(jint arg0);
		jstring optString(jint arg0);
		jstring optString(jint arg0, jstring arg1);
		QAndroidJniObject getJSONArray(jint arg0);
		QAndroidJniObject optJSONArray(jint arg0);
		QAndroidJniObject getJSONObject(jint arg0);
		QAndroidJniObject optJSONObject(jint arg0);
		QAndroidJniObject toJSONObject(__jni_impl::org::json::JSONArray arg0);
	};
} // namespace __jni_impl::org::json

#include "JSONTokener.hpp"
#include "JSONObject.hpp"

namespace __jni_impl::org::json
{
	// Fields
	
	// Constructors
	void JSONArray::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONArray",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void JSONArray::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONArray",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void JSONArray::__constructor(__jni_impl::org::json::JSONTokener arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONArray",
			"(Lorg/json/JSONTokener;)V",
			arg0.__jniObject().object());
	}
	void JSONArray::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONArray",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void JSONArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONArray",
			"()V");
	}
	
	// Methods
	jobject JSONArray::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject JSONArray::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject JSONArray::put(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IZ)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONArray::put(jint arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ID)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONArray::put(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(II)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONArray::put(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IJ)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONArray::put(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/lang/Object;)Lorg/json/JSONArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONArray::put(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Z)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::put(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(D)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::put(jint arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::put(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::put(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(J)Lorg/json/JSONArray;",
			arg0
		);
	}
	jboolean JSONArray::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint JSONArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring JSONArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring JSONArray::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint JSONArray::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean JSONArray::getBoolean(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jint JSONArray::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong JSONArray::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jdouble JSONArray::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jstring JSONArray::join(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"join",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean JSONArray::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jstring JSONArray::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject JSONArray::opt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"opt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean JSONArray::optBoolean(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JSONArray::optBoolean(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(I)Z",
			arg0
		);
	}
	jdouble JSONArray::optDouble(jint arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(ID)D",
			arg0,
			arg1
		);
	}
	jdouble JSONArray::optDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(I)D",
			arg0
		);
	}
	jint JSONArray::optInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(I)I",
			arg0
		);
	}
	jint JSONArray::optInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong JSONArray::optLong(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jlong JSONArray::optLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(I)J",
			arg0
		);
	}
	jstring JSONArray::optString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONArray::optString(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(ILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject JSONArray::getJSONArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONArray",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::optJSONArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONArray",
			"(I)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::getJSONObject(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONObject",
			"(I)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::optJSONObject(jint arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONObject",
			"(I)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONArray::toJSONObject(__jni_impl::org::json::JSONArray arg0)
	{
		return __thiz.callObjectMethod(
			"toJSONObject",
			"(Lorg/json/JSONArray;)Lorg/json/JSONObject;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::org::json

namespace org::json
{
	class JSONArray : public __jni_impl::org::json::JSONArray
	{
	public:
		JSONArray(QAndroidJniObject obj) { __thiz = obj; }
		JSONArray(jobject arg0)
		{
			__constructor(
				arg0);
		}
		JSONArray(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JSONArray(__jni_impl::org::json::JSONTokener arg0)
		{
			__constructor(
				arg0);
		}
		JSONArray(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		JSONArray()
		{
			__constructor();
		}
	};
} // namespace org::json

#endif // ORG_JSON_JSONARRAY

