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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyRep(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyRep(QAndroidJniObject obj);
		
		// Constructors
		KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3);
		
		// Methods
	};
} // namespace java::security

