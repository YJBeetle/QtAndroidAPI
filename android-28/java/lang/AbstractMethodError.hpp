#pragma once

#include "./IncompatibleClassChangeError.hpp"

class JString;

namespace java::lang
{
	class AbstractMethodError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractMethodError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMethodError(QJniObject obj);
		
		// Constructors
		AbstractMethodError();
		AbstractMethodError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

