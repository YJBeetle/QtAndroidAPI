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
		
		// QJniObject forward
		template<typename ...Ts> explicit UndeclaredThrowableException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		UndeclaredThrowableException(QJniObject obj);
		
		// Constructors
		UndeclaredThrowableException(jthrowable arg0);
		UndeclaredThrowableException(jthrowable arg0, jstring arg1);
		
		// Methods
		jthrowable getUndeclaredThrowable();
	};
} // namespace java::lang::reflect

