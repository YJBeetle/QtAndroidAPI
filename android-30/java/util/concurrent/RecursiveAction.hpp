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
		
		// QJniObject forward
		template<typename ...Ts> explicit RecursiveAction(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		RecursiveAction(QJniObject obj);
		
		// Constructors
		RecursiveAction();
		
		// Methods
		java::lang::Void getRawResult();
	};
} // namespace java::util::concurrent

