#pragma once

#include "../../../JString.hpp"
#include "./DatatypeConstants_Field.def.hpp"

namespace javax::xml::datatype
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint DatatypeConstants_Field::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString DatatypeConstants_Field::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::datatype

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::datatype;
#endif
