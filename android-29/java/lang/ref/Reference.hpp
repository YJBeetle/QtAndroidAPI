#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class Reference : public __JniBaseClass
	{
	public:
		// Fields
		
		Reference(QAndroidJniObject obj);
		// Constructors
		Reference() = default;
		
		// Methods
		static void reachabilityFence(jobject arg0);
		void clear();
		jboolean enqueue();
		jobject get();
		jboolean isEnqueued();
		jboolean refersTo(jobject arg0);
	};
} // namespace java::lang::ref

