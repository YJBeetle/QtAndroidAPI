#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LayoutDirection : public __JniBaseClass
	{
	public:
		// Fields
		static jint INHERIT();
		static jint LOCALE();
		static jint LTR();
		static jint RTL();
		
		LayoutDirection(QAndroidJniObject obj);
		// Constructors
		LayoutDirection() = default;
		
		// Methods
	};
} // namespace android::util

