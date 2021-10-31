#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyRep_Type;
}

namespace java::security
{
	class KeyRep : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyRep(QAndroidJniObject obj);
		// Constructors
		KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3);
		KeyRep() = default;
		
		// Methods
	};
} // namespace java::security

