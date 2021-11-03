#pragma once

#include "./LinkageError.hpp"

class JString;

namespace java::lang
{
	class ClassFormatError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassFormatError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassFormatError(QAndroidJniObject obj);
		
		// Constructors
		ClassFormatError();
		ClassFormatError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

