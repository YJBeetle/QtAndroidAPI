#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ForkJoinTask.hpp"


namespace java::util::concurrent
{
	class RecursiveTask : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecursiveTask(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		RecursiveTask(QJniObject obj);
		
		// Constructors
		RecursiveTask();
		
		// Methods
		jobject getRawResult();
	};
} // namespace java::util::concurrent

