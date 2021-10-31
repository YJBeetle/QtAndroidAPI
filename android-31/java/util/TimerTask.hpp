#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class TimerTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimerTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimerTask(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean cancel();
		void run();
		jlong scheduledExecutionTime();
	};
} // namespace java::util

