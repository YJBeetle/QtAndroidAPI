#include "./DatatypeConstants_Field.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	DatatypeConstants_Field::DatatypeConstants_Field(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DatatypeConstants_Field::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring DatatypeConstants_Field::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

