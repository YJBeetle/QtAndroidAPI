#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Void : public __JniBaseClass
	{
	public:
		// Fields
		static jclass TYPE();
		
		Void(QAndroidJniObject obj);
		// Constructors
		Void() = default;
		
		// Methods
	};
} // namespace java::lang

