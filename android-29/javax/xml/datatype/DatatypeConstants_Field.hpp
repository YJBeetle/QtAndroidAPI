#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::datatype
{
	class DatatypeConstants_Field : public __JniBaseClass
	{
	public:
		// Fields
		
		DatatypeConstants_Field(QAndroidJniObject obj);
		// Constructors
		DatatypeConstants_Field() = default;
		
		// Methods
		jint getId();
		jstring toString();
	};
} // namespace javax::xml::datatype

