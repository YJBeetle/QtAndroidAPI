#pragma once

#include "../lang/Exception.def.hpp"

class JArray;
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
class JString;

namespace java::security
{
	class PrivilegedActionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrivilegedActionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		PrivilegedActionException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		PrivilegedActionException(java::lang::Exception arg0);
		
		// Methods
		java::lang::Exception getException() const;
		JString toString() const;
	};
} // namespace java::security

