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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecursiveAction(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		RecursiveAction(QAndroidJniObject obj);
		
		// Constructors
		RecursiveAction();
		
		// Methods
		QAndroidJniObject getRawResult();
	};
} // namespace java::util::concurrent

