#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPair(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyPair(QJniObject obj);
		
		// Constructors
		KeyPair(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		__JniBaseClass getPrivate();
		__JniBaseClass getPublic();
	};
} // namespace java::security

