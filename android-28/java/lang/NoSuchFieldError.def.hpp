#pragma once

#include "./IncompatibleClassChangeError.def.hpp"

class JString;

namespace java::lang
{
	class NoSuchFieldError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchFieldError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFieldError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
		
		// Constructors
		NoSuchFieldError();
		NoSuchFieldError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

