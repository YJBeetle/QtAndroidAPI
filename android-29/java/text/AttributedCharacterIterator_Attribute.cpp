#include "./AttributedCharacterIterator_Attribute.hpp"

namespace java::text
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
	
	AttributedCharacterIterator_Attribute::AttributedCharacterIterator_Attribute(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace java::text

