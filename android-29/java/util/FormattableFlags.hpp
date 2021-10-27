#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class FormattableFlags : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALTERNATE();
		static jint LEFT_JUSTIFY();
		static jint UPPERCASE();
		
		FormattableFlags(QAndroidJniObject obj);
		// Constructors
		FormattableFlags() = default;
		
		// Methods
	};
} // namespace java::util

