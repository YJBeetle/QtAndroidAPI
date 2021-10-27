#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class StandardConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint SNI_HOST_NAME();
		
		StandardConstants(QAndroidJniObject obj);
		// Constructors
		StandardConstants() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

