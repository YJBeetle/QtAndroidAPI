#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class TimerTask : public __JniBaseClass
	{
	public:
		// Fields
		
		TimerTask(QAndroidJniObject obj);
		// Constructors
		TimerTask() = default;
		
		// Methods
		jboolean cancel();
		void run();
		jlong scheduledExecutionTime();
	};
} // namespace java::util

