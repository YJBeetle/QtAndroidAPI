#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace java::lang
{
	class ThreadLocal : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadLocal(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ThreadLocal(QAndroidJniObject obj);
		
		// Constructors
		ThreadLocal();
		
		// Methods
		static QAndroidJniObject withInitial(__JniBaseClass arg0);
		jobject get();
		void remove();
		void set(jobject arg0);
	};
} // namespace java::lang

