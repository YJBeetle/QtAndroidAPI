#pragma once

#include "./IncompatibleClassChangeError.def.hpp"

class JString;

namespace java::lang
{
	class IllegalAccessError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalAccessError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		IllegalAccessError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
		
		// Constructors
		IllegalAccessError();
		IllegalAccessError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

