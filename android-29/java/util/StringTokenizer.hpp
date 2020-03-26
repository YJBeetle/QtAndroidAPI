#pragma once

#ifndef JAVA_UTIL_STRINGTOKENIZER
#define JAVA_UTIL_STRINGTOKENIZER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class StringTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0, jstring arg1, jboolean arg2);
		void __constructor(jstring arg0);
		
		// Methods
		jint countTokens();
		jboolean hasMoreElements();
		jstring nextToken(jstring arg0);
		jstring nextToken();
		jobject nextElement();
		jboolean hasMoreTokens();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void StringTokenizer::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void StringTokenizer::__constructor(jstring arg0, jstring arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2);
	}
	void StringTokenizer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.StringTokenizer",
			"(Ljava/lang/String;)V",
			arg0);
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
	jstring StringTokenizer::nextToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring StringTokenizer::nextToken()
	{
		return __thiz.callObjectMethod(
			"nextToken",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject StringTokenizer::nextElement()
	{
		return __thiz.callObjectMethod(
			"nextElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean StringTokenizer::hasMoreTokens()
	{
		return __thiz.callMethod<jboolean>(
			"hasMoreTokens",
			"()Z"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class StringTokenizer : public __jni_impl::java::util::StringTokenizer
	{
	public:
		StringTokenizer(QAndroidJniObject obj) { __thiz = obj; }
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
		StringTokenizer(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_STRINGTOKENIZER

