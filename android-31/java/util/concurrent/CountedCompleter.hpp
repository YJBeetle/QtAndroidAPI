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
		
		// QJniObject forward
		template<typename ...Ts> explicit CountedCompleter(const char *className, const char *sig, Ts...agv) : java::util::concurrent::ForkJoinTask(className, sig, std::forward<Ts>(agv)...) {}
		CountedCompleter(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addToPendingCount(jint arg0) const;
		jboolean compareAndSetPendingCount(jint arg0, jint arg1) const;
		void complete(JObject arg0) const;
		void compute() const;
		jint decrementPendingCountUnlessZero() const;
		java::util::concurrent::CountedCompleter firstComplete() const;
		java::util::concurrent::CountedCompleter getCompleter() const;
		jint getPendingCount() const;
		JObject getRawResult() const;
		java::util::concurrent::CountedCompleter getRoot() const;
		void helpComplete(jint arg0) const;
		java::util::concurrent::CountedCompleter nextComplete() const;
		void onCompletion(java::util::concurrent::CountedCompleter arg0) const;
		jboolean onExceptionalCompletion(JThrowable arg0, java::util::concurrent::CountedCompleter arg1) const;
		void propagateCompletion() const;
		void quietlyCompleteRoot() const;
		void setPendingCount(jint arg0) const;
		void tryComplete() const;
	};
} // namespace java::util::concurrent

