#pragma once

#ifndef JAVA_TEXT_FORMAT
#define JAVA_TEXT_FORMAT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::text
{
	class AttributedCharacterIterator_Attribute;
}

namespace __jni_impl::java::text
{
	class Format : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jstring format(jobject arg0);
		jobject parseObject(jstring arg0);
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "ParsePosition.hpp"
#include "AttributedCharacterIterator_Attribute.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void Format::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.Format",
			"(V)V");
	}
	
	// Methods
	jobject Format::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject Format::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring Format::format(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject Format::parseObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Format::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Format::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class Format : public __jni_impl::java::text::Format
	{
	public:
		Format(QAndroidJniObject obj) { __thiz = obj; }
		Format()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_FORMAT

