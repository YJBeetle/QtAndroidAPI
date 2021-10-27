#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ForkJoinTask.hpp"


namespace java::util::concurrent
{
	class CountedCompleter : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		CountedCompleter(QAndroidJniObject obj);
		// Constructors
		CountedCompleter() = default;
		
		// Methods
		void addToPendingCount(jint arg0);
		jboolean compareAndSetPendingCount(jint arg0, jint arg1);
		void complete(jobject arg0);
		void compute();
		jint decrementPendingCountUnlessZero();
		QAndroidJniObject firstComplete();
		QAndroidJniObject getCompleter();
		jint getPendingCount();
		jobject getRawResult();
		QAndroidJniObject getRoot();
		void helpComplete(jint arg0);
		QAndroidJniObject nextComplete();
		void onCompletion(java::util::concurrent::CountedCompleter arg0);
		jboolean onExceptionalCompletion(jthrowable arg0, java::util::concurrent::CountedCompleter arg1);
		void propagateCompletion();
		void quietlyCompleteRoot();
		void setPendingCount(jint arg0);
		void tryComplete();
	};
} // namespace java::util::concurrent

