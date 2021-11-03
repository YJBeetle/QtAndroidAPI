#pragma once

#include "../../../JObject.hpp"
#include "../Error.hpp"
#include "../LinkageError.hpp"
#include "../ClassFormatError.hpp"


namespace java::lang::reflect
{
	class GenericSignatureFormatError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GenericSignatureFormatError(const char *className, const char *sig, Ts...agv) : java::lang::ClassFormatError(className, sig, std::forward<Ts>(agv)...) {}
		GenericSignatureFormatError(QAndroidJniObject obj);
		
		// Constructors
		GenericSignatureFormatError();
		GenericSignatureFormatError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

