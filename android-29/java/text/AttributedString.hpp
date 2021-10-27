#pragma once

#ifndef JAVA_TEXT_ATTRIBUTEDSTRING
#define JAVA_TEXT_ATTRIBUTEDSTRING

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class AttributedCharacterIterator_Attribute;
}

namespace __jni_impl::java::text
{
	class AttributedString : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jarray arg3);
		
		// Methods
		void addAttribute(__jni_impl::java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1);
		void addAttribute(__jni_impl::java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1, jint arg2, jint arg3);
		void addAttributes(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		QAndroidJniObject getIterator();
		QAndroidJniObject getIterator(jarray arg0);
		QAndroidJniObject getIterator(jarray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "AttributedCharacterIterator_Attribute.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void AttributedString::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AttributedString::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AttributedString::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	void AttributedString::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AttributedString::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void AttributedString::__constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AttributedString::__constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jarray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void AttributedString::addAttribute(__jni_impl::java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AttributedString::addAttribute(__jni_impl::java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void AttributedString::addAttributes(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addAttributes",
			"(Ljava/util/Map;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject AttributedString::getIterator()
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	QAndroidJniObject AttributedString::getIterator(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject AttributedString::getIterator(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;II)Ljava/text/AttributedCharacterIterator;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class AttributedString : public __jni_impl::java::text::AttributedString
	{
	public:
		AttributedString(QAndroidJniObject obj) { __thiz = obj; }
		AttributedString(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AttributedString(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		AttributedString(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AttributedString(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AttributedString(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jarray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_ATTRIBUTEDSTRING

