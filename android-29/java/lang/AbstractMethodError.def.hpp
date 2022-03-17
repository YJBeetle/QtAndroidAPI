#pragma once

#include "./IncompatibleClassChangeError.def.hpp"

class JString;

namespace java::lang
{
	class AbstractMethodError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractMethodError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMethodError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
		
		// Constructors
		AbstractMethodError();
		AbstractMethodError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

