#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class BootstrapMethodError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BootstrapMethodError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		BootstrapMethodError(QJniObject obj);
		
		// Constructors
		BootstrapMethodError();
		BootstrapMethodError(jstring arg0);
		BootstrapMethodError(jthrowable arg0);
		BootstrapMethodError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

