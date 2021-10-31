#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class TimerTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimerTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimerTask(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean cancel();
		void run();
		jlong scheduledExecutionTime();
	};
} // namespace java::util

