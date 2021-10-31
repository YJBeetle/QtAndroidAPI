#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class ECGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		ECGenParameterSpec(QAndroidJniObject obj);
		// Constructors
		ECGenParameterSpec(jstring arg0);
		ECGenParameterSpec() = default;
		
		// Methods
	};
} // namespace java::security::spec

