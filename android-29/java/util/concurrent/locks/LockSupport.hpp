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
		
		LockSupport(QAndroidJniObject obj);
		// Constructors
		LockSupport() = default;
		
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

