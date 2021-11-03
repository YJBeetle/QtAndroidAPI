#include "../../../JString.hpp"
#include "./DatatypeConstants_Field.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// QJniObject forward
	DatatypeConstants_Field::DatatypeConstants_Field(QJniObject obj) : JObject(obj) {}
	
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

