#pragma once

#include "../RuntimeException.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JThrowable;

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
		UndeclaredThrowableException(JThrowable arg0);
		UndeclaredThrowableException(JThrowable arg0, JString arg1);
		
		// Methods
		JThrowable getUndeclaredThrowable() const;
	};
} // namespace java::lang::reflect

