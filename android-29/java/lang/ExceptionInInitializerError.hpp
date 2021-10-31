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
		
		ExceptionInInitializerError(QAndroidJniObject obj);
		// Constructors
		ExceptionInInitializerError();
		ExceptionInInitializerError(jstring arg0);
		ExceptionInInitializerError(jthrowable arg0);
		
		// Methods
		jthrowable getException();
	};
} // namespace java::lang

