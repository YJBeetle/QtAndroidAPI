#pragma once

#ifndef ORG_JSON_JSONTOKENER
#define ORG_JSON_JSONTOKENER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::org::json
{
	class JSONException;
}

namespace __jni_impl::org::json
{
	class JSONTokener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject toString();
		jchar next();
		jchar next(jchar arg0);
		QAndroidJniObject next(jint arg0);
		jboolean more();
		void back();
		QAndroidJniObject syntaxError(jstring arg0);
		jchar nextClean();
		QAndroidJniObject nextTo(jchar arg0);
		QAndroidJniObject nextTo(jstring arg0);
		void skipPast(jstring arg0);
		jchar skipTo(jchar arg0);
		static jint dehexchar(jchar arg0);
		QAndroidJniObject nextString(jchar arg0);
		QAndroidJniObject nextValue();
	};
} // namespace __jni_impl::org::json

#include "JSONException.hpp"

namespace __jni_impl::org::json
{
	// Fields
	
	// Constructors
	void JSONTokener::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject JSONTokener::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jchar JSONTokener::next()
	{
		return __thiz.callMethod<jchar>(
			"next",
			"()C");
	}
	jchar JSONTokener::next(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"next",
			"(C)C",
			arg0);
	}
	QAndroidJniObject JSONTokener::next(jint arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jboolean JSONTokener::more()
	{
		return __thiz.callMethod<jboolean>(
			"more",
			"()Z");
	}
	void JSONTokener::back()
	{
		__thiz.callMethod<void>(
			"back",
			"()V");
	}
	QAndroidJniObject JSONTokener::syntaxError(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0);
	}
	jchar JSONTokener::nextClean()
	{
		return __thiz.callMethod<jchar>(
			"nextClean",
			"()C");
	}
	QAndroidJniObject JSONTokener::nextTo(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject JSONTokener::nextTo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void JSONTokener::skipPast(jstring arg0)
	{
		__thiz.callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jchar JSONTokener::skipTo(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0);
	}
	jint JSONTokener::dehexchar(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.json.JSONTokener",
			"dehexchar",
			"(C)I",
			arg0);
	}
	QAndroidJniObject JSONTokener::nextString(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject JSONTokener::nextValue()
	{
		return __thiz.callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::org::json

namespace org::json
{
	class JSONTokener : public __jni_impl::org::json::JSONTokener
	{
	public:
		JSONTokener(QAndroidJniObject obj) { __thiz = obj; }
		JSONTokener(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::json

#endif // ORG_JSON_JSONTOKENER

