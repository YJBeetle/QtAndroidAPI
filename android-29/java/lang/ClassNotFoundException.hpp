#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		ClassNotFoundException(QAndroidJniObject obj);
		// Constructors
		ClassNotFoundException();
		ClassNotFoundException(jstring &arg0);
		ClassNotFoundException(const QString &arg0);
		ClassNotFoundException(jstring &arg0, jthrowable &arg1);
		ClassNotFoundException(const QString &arg0, jthrowable &arg1);
		
		// Methods
		jthrowable getException();
	};
} // namespace java::lang

