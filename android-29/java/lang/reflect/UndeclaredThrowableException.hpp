#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::lang::reflect
{
	class UndeclaredThrowableException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		UndeclaredThrowableException(QAndroidJniObject obj);
		// Constructors
		UndeclaredThrowableException(jthrowable &arg0);
		UndeclaredThrowableException(jthrowable &arg0, jstring &arg1);
		UndeclaredThrowableException(jthrowable &arg0, const QString &arg1);
		UndeclaredThrowableException() = default;
		
		// Methods
		jthrowable getUndeclaredThrowable();
	};
} // namespace java::lang::reflect

