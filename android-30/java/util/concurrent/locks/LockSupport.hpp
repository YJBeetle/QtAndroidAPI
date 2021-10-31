#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::util::concurrent::locks
{
	class LockSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LockSupport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LockSupport(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jobject getBlocker(java::lang::Thread arg0);
		static void park();
		static void park(jobject arg0);
		static void parkNanos(jlong arg0);
		static void parkNanos(jobject arg0, jlong arg1);
		static void parkUntil(jlong arg0);
		static void parkUntil(jobject arg0, jlong arg1);
		static void setCurrentBlocker(jobject arg0);
		static void unpark(java::lang::Thread arg0);
	};
} // namespace java::util::concurrent::locks

