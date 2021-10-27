#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class StringTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1, jboolean arg2);
		void __constructor(const QString &arg0, const QString &arg1, jboolean arg2);
		
		// Methods
		jint countTokens();
		jboolean hasMoreElements();
		jboolean hasMoreTokens();
		jobject nextElement();
		jstring nextToken();
		jstring nextToken(jstring arg0);
		jstring nextToken(const QString &arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void StringTokenizer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringTokenizer::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void StringTokenizer::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void StringTokenizer::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void StringTokenizer::__constructor(jstring arg0, jstring arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringTokenizer::__constructor(const QString &arg0, const QString &arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint StringTokenizer::countTokens()
	{
		return __thiz.callMethod<jint>(
			"countTokens",
			"()I"
		);
	}
	jboolean StringTokenizer::hasMoreElements()
	{
		return __thiz.callMethod<jboolean>(
			"hasMoreElements",
			"()Z"
		);
	}
	jboolean StringTokenizer::hasMoreTokens()
	{
		return __thiz.callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
	jobject StringTokenizer::nextElement()
	{
		return __thiz.callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring StringTokenizer::nextToken()
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StringTokenizer::nextToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring StringTokenizer::nextToken(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class StringTokenizer : public __jni_impl::java::util::StringTokenizer
	{
	public:
		StringTokenizer(QAndroidJniObject obj) { __thiz = obj; }
		StringTokenizer(jstring arg0)
		{
			__constructor(
				arg0);
		}
		StringTokenizer(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StringTokenizer(jstring arg0, jstring arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util

