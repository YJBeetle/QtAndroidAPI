#pragma once

#include "../../../JObject.hpp"

namespace java::lang::ref
{
	class ReferenceQueue;
}

namespace java::lang::ref
{
	class Reference : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Reference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reference(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void reachabilityFence(jobject arg0);
		void clear();
		jboolean enqueue();
		jobject get();
		jboolean isEnqueued();
		jboolean refersTo(jobject arg0);
	};
} // namespace java::lang::ref

