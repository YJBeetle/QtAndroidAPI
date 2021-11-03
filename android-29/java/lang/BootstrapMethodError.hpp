#pragma once

#include "./LinkageError.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class BootstrapMethodError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BootstrapMethodError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		BootstrapMethodError(QAndroidJniObject obj);
		
		// Constructors
		BootstrapMethodError();
		BootstrapMethodError(JString arg0);
		BootstrapMethodError(JThrowable arg0);
		BootstrapMethodError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

