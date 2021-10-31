#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::lang
{
	class ExceptionInInitializerError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExceptionInInitializerError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ExceptionInInitializerError(QJniObject obj);
		
		// Constructors
		ExceptionInInitializerError();
		ExceptionInInitializerError(jstring arg0);
		ExceptionInInitializerError(jthrowable arg0);
		
		// Methods
		jthrowable getException();
	};
} // namespace java::lang

