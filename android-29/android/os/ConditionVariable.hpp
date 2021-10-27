#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class ConditionVariable : public __JniBaseClass
	{
	public:
		// Fields
		
		ConditionVariable(QAndroidJniObject obj);
		// Constructors
		ConditionVariable();
		ConditionVariable(jboolean &arg0);
		
		// Methods
		jboolean block(jlong arg0);
		void block();
		void close();
		void open();
	};
} // namespace android::os

