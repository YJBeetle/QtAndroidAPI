#pragma once

#include "./IncompatibleClassChangeError.hpp"

class JString;

namespace java::lang
{
	class NoSuchMethodError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchMethodError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchMethodError(QAndroidJniObject obj);
		
		// Constructors
		NoSuchMethodError();
		NoSuchMethodError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

