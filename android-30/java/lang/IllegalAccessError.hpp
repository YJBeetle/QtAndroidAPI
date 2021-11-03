#pragma once

#include "./IncompatibleClassChangeError.hpp"

class JString;

namespace java::lang
{
	class IllegalAccessError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalAccessError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		IllegalAccessError(QJniObject obj);
		
		// Constructors
		IllegalAccessError();
		IllegalAccessError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

