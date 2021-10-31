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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrivilegedActionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		PrivilegedActionException(QAndroidJniObject obj);
		
		// Constructors
		PrivilegedActionException(java::lang::Exception arg0);
		
		// Methods
		QAndroidJniObject getException();
		jstring toString();
	};
} // namespace java::security

