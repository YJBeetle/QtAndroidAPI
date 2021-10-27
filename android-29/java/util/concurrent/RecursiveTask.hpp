#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ForkJoinTask.hpp"


namespace java::util::concurrent
{
	class RecursiveTask : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		RecursiveTask(QAndroidJniObject obj);
		// Constructors
		RecursiveTask();
		
		// Methods
		jobject getRawResult();
	};
} // namespace java::util::concurrent

