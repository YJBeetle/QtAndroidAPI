#include "./DatatypeConstants_Field.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// QAndroidJniObject forward
	DatatypeConstants_Field::DatatypeConstants_Field(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint DatatypeConstants_Field::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring DatatypeConstants_Field::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::datatype

