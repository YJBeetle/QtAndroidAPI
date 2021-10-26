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
		void __constructor(const QString &arg0);
		
		// Methods
		jstring toString();
		jchar next();
		jchar next(jchar arg0);
		jstring next(jint arg0);
		jboolean more();
		void back();
		jstring nextString(jchar arg0);
		QAndroidJniObject syntaxError(jstring arg0);
		QAndroidJniObject syntaxError(const QString &arg0);
		jchar nextClean();
		jstring nextTo(jchar arg0);
		jstring nextTo(jstring arg0);
		jstring nextTo(const QString &arg0);
		void skipPast(jstring arg0);
		void skipPast(const QString &arg0);
		jchar skipTo(jchar arg0);
		static jint dehexchar(jchar arg0);
		jobject nextValue();
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
			arg0
		);
	}
	void JSONTokener::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONTokener",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring JSONTokener::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar JSONTokener::next()
	{
		return __thiz.callMethod<jchar>(
			"next",
			"()C"
		);
	}
	jchar JSONTokener::next(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"next",
			"(C)C",
			arg0
		);
	}
	jstring JSONTokener::next(jint arg0)
	{
		return __thiz.callObjectMethod(
			"next",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean JSONTokener::more()
	{
		return __thiz.callMethod<jboolean>(
			"more",
			"()Z"
		);
	}
	void JSONTokener::back()
	{
		__thiz.callMethod<void>(
			"back",
			"()V"
		);
	}
	jstring JSONTokener::nextString(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextString",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject JSONTokener::syntaxError(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			arg0
		);
	}
	QAndroidJniObject JSONTokener::syntaxError(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"syntaxError",
			"(Ljava/lang/String;)Lorg/json/JSONException;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar JSONTokener::nextClean()
	{
		return __thiz.callMethod<jchar>(
			"nextClean",
			"()C"
		);
	}
	jstring JSONTokener::nextTo(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONTokener::nextTo(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"nextTo",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	void JSONTokener::skipPast(jstring arg0)
	{
		__thiz.callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JSONTokener::skipPast(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"skipPast",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar JSONTokener::skipTo(jchar arg0)
	{
		return __thiz.callMethod<jchar>(
			"skipTo",
			"(C)C",
			arg0
		);
	}
	jint JSONTokener::dehexchar(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.json.JSONTokener",
			"dehexchar",
			"(C)I",
			arg0
		);
	}
	jobject JSONTokener::nextValue()
	{
		return __thiz.callObjectMethod(
			"nextValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
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

