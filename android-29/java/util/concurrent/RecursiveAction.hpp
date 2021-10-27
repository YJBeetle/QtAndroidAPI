#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ForkJoinTask.hpp"

namespace java::lang
{
	class Void;
}

namespace java::util::concurrent
{
	class RecursiveAction : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		RecursiveAction(QAndroidJniObject obj);
		// Constructors
		RecursiveAction();
		
		// Methods
		QAndroidJniObject getRawResult();
	};
} // namespace java::util::concurrent

