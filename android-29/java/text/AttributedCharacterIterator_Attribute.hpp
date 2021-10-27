#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::text
{
	class AttributedCharacterIterator_Attribute : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject INPUT_METHOD_SEGMENT();
		static QAndroidJniObject LANGUAGE();
		static QAndroidJniObject READING();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	QAndroidJniObject AttributedCharacterIterator_Attribute::INPUT_METHOD_SEGMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"INPUT_METHOD_SEGMENT",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	QAndroidJniObject AttributedCharacterIterator_Attribute::LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"LANGUAGE",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	QAndroidJniObject AttributedCharacterIterator_Attribute::READING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"READING",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	
	// Constructors
	void AttributedCharacterIterator_Attribute::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedCharacterIterator$Attribute",
			"(V)V");
	}
	
	// Methods
	jboolean AttributedCharacterIterator_Attribute::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AttributedCharacterIterator_Attribute::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AttributedCharacterIterator_Attribute::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class AttributedCharacterIterator_Attribute : public __jni_impl::java::text::AttributedCharacterIterator_Attribute
	{
	public:
		AttributedCharacterIterator_Attribute(QAndroidJniObject obj) { __thiz = obj; }
		AttributedCharacterIterator_Attribute()
		{
			__constructor();
		}
	};
} // namespace java::text

