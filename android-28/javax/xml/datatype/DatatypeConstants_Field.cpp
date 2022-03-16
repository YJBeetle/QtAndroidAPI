#include "../../../JString.hpp"
#include "./DatatypeConstants_Field.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// Constructors
	
	// Methods
	jint DatatypeConstants_Field::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString DatatypeConstants_Field::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

