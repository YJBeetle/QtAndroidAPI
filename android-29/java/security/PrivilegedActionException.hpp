#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"

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
	class Exception;
}

namespace java::security
{
	class PrivilegedActionException : public java::lang::Exception
	{
	public:
		// Fields
		
		PrivilegedActionException(QAndroidJniObject obj);
		// Constructors
		PrivilegedActionException(java::lang::Exception &arg0);
		PrivilegedActionException() = default;
		
		// Methods
		QAndroidJniObject getException();
		jstring toString();
	};
} // namespace java::security

