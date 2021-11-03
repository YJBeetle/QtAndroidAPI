#pragma once

#include "./IncompatibleClassChangeError.hpp"

class JString;

namespace java::lang
{
	class NoSuchFieldError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchFieldError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFieldError(QJniObject obj);
		
		// Constructors
		NoSuchFieldError();
		NoSuchFieldError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

