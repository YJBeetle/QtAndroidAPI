#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class ClassFormatError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassFormatError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassFormatError(QJniObject obj);
		
		// Constructors
		ClassFormatError();
		ClassFormatError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

