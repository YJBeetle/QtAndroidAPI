#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class MenuInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		MenuInflater(QAndroidJniObject obj);
		// Constructors
		MenuInflater(android::content::Context &arg0);
		MenuInflater() = default;
		
		// Methods
		void inflate(jint arg0, __JniBaseClass arg1);
	};
} // namespace android::view

