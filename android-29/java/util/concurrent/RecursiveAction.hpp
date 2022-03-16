#pragma once

#include "./ForkJoinTask.hpp"

class JObject;
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
		RecursiveAction(QAndroidJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
		
		// Constructors
		RecursiveAction();
		
		// Methods
		java::lang::Void getRawResult() const;
	};
} // namespace java::util::concurrent

