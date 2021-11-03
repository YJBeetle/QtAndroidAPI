#pragma once

#include "./ReflectiveOperationException.hpp"

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

namespace java::lang
{
	class ClassNotFoundException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		ClassNotFoundException(QJniObject obj);
		
		// Constructors
		ClassNotFoundException();
		ClassNotFoundException(JString arg0);
		ClassNotFoundException(JString arg0, JThrowable arg1);
		
		// Methods
		JThrowable getException() const;
	};
} // namespace java::lang

