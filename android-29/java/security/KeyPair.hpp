#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyPair(QAndroidJniObject obj);
		// Constructors
		KeyPair(__JniBaseClass arg0, __JniBaseClass arg1);
		KeyPair() = default;
		
		// Methods
		QAndroidJniObject getPrivate();
		QAndroidJniObject getPublic();
	};
} // namespace java::security

