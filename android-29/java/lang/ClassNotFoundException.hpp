#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

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
	class ClassNotFoundException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		ClassNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		ClassNotFoundException();
		ClassNotFoundException(jstring arg0);
		ClassNotFoundException(jstring arg0, jthrowable arg1);
		
		// Methods
		jthrowable getException();
	};
} // namespace java::lang

