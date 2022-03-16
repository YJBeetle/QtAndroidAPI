#pragma once

#include "./IncompatibleClassChangeError.hpp"

class JString;

namespace java::lang
{
	class InstantiationError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InstantiationError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		InstantiationError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
		
		// Constructors
		InstantiationError();
		InstantiationError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

