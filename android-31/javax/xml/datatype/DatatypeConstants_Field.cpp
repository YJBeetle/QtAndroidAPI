#include "../../../JString.hpp"
#include "./DatatypeConstants_Field.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// QAndroidJniObject forward
	DatatypeConstants_Field::DatatypeConstants_Field(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DatatypeConstants_Field::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString DatatypeConstants_Field::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

