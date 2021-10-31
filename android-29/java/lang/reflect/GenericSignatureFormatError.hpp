#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Error.hpp"
#include "../LinkageError.hpp"
#include "../ClassFormatError.hpp"


namespace java::lang::reflect
{
	class GenericSignatureFormatError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		GenericSignatureFormatError(QAndroidJniObject obj);
		// Constructors
		GenericSignatureFormatError();
		GenericSignatureFormatError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

