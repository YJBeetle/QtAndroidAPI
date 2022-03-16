#pragma once

#include "./ForkJoinTask.hpp"

class JObject;

namespace java::util::concurrent
{
	class RecursiveTask : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecursiveTask(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		RecursiveTask(QAndroidJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
		
		// Constructors
		RecursiveTask();
		
		// Methods
		JObject getRawResult() const;
	};
} // namespace java::util::concurrent

