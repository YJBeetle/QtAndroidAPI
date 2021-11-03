#pragma once

#include "./ForkJoinTask.hpp"

class JObject;
class JThrowable;

namespace java::util::concurrent
{
	class CountedCompleter : public java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CountedCompleter(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		CountedCompleter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addToPendingCount(jint arg0);
		jboolean compareAndSetPendingCount(jint arg0, jint arg1);
		void complete(JObject arg0);
		void compute();
		jint decrementPendingCountUnlessZero();
		java::util::concurrent::CountedCompleter firstComplete();
		java::util::concurrent::CountedCompleter getCompleter();
		jint getPendingCount();
		JObject getRawResult();
		java::util::concurrent::CountedCompleter getRoot();
		void helpComplete(jint arg0);
		java::util::concurrent::CountedCompleter nextComplete();
		void onCompletion(java::util::concurrent::CountedCompleter arg0);
		jboolean onExceptionalCompletion(JThrowable arg0, java::util::concurrent::CountedCompleter arg1);
		void propagateCompletion();
		void quietlyCompleteRoot();
		void setPendingCount(jint arg0);
		void tryComplete();
	};
} // namespace java::util::concurrent

