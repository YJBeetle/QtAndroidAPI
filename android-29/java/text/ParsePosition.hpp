#pragma once

#ifndef JAVA_TEXT_PARSEPOSITION
#define JAVA_TEXT_PARSEPOSITION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::text
{
	class ParsePosition : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getErrorIndex();
		jint getIndex();
		jint hashCode();
		void setErrorIndex(jint arg0);
		void setIndex(jint arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void ParsePosition::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.ParsePosition",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jboolean ParsePosition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ParsePosition::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	jint ParsePosition::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint ParsePosition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ParsePosition::setErrorIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setErrorIndex",
			"(I)V",
			arg0
		);
	}
	void ParsePosition::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	jstring ParsePosition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class ParsePosition : public __jni_impl::java::text::ParsePosition
	{
	public:
		ParsePosition(QAndroidJniObject obj) { __thiz = obj; }
		ParsePosition(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_PARSEPOSITION

