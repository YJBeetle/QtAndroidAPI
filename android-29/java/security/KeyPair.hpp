#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPair(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyPair(QAndroidJniObject obj);
		
		// Constructors
		KeyPair(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getPrivate();
		QAndroidJniObject getPublic();
	};
} // namespace java::security

