#pragma once

#include "./ClassFormatError.def.hpp"

class JString;

namespace java::lang
{
	class UnsupportedClassVersionError : public java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedClassVersionError(const char *className, const char *sig, Ts...agv) : java::lang::ClassFormatError(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedClassVersionError(QJniObject obj) : java::lang::ClassFormatError(obj) {}
		
		// Constructors
		UnsupportedClassVersionError();
		UnsupportedClassVersionError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

