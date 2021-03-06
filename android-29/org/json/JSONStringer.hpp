#pragma once

#ifndef ORG_JSON_JSONSTRINGER
#define ORG_JSON_JSONSTRINGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::org::json
{
	class JSONStringer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject value(jobject arg0);
		QAndroidJniObject value(jboolean arg0);
		QAndroidJniObject value(jdouble arg0);
		QAndroidJniObject value(jlong arg0);
		jstring toString();
		QAndroidJniObject array();
		QAndroidJniObject key(jstring arg0);
		QAndroidJniObject object();
		QAndroidJniObject endArray();
		QAndroidJniObject endObject();
	};
} // namespace __jni_impl::org::json


namespace __jni_impl::org::json
{
	// Fields
	
	// Constructors
	void JSONStringer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONStringer",
			"()V");
	}
	
	// Methods
	QAndroidJniObject JSONStringer::value(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/Object;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Z)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(D)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::value(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(J)Lorg/json/JSONStringer;",
			arg0
		);
	}
	jstring JSONStringer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JSONStringer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::key(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"key",
			"(Ljava/lang/String;)Lorg/json/JSONStringer;",
			arg0
		);
	}
	QAndroidJniObject JSONStringer::object()
	{
		return __thiz.callObjectMethod(
			"object",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endArray()
	{
		return __thiz.callObjectMethod(
			"endArray",
			"()Lorg/json/JSONStringer;"
		);
	}
	QAndroidJniObject JSONStringer::endObject()
	{
		return __thiz.callObjectMethod(
			"endObject",
			"()Lorg/json/JSONStringer;"
		);
	}
} // namespace __jni_impl::org::json

namespace org::json
{
	class JSONStringer : public __jni_impl::org::json::JSONStringer
	{
	public:
		JSONStringer(QAndroidJniObject obj) { __thiz = obj; }
		JSONStringer()
		{
			__constructor();
		}
	};
} // namespace org::json

#endif // ORG_JSON_JSONSTRINGER

