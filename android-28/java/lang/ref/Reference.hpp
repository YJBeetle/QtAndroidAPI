#pragma once

#include "../../../JObject.hpp"

class JObject;
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
		static void reachabilityFence(JObject arg0);
		void clear();
		jboolean enqueue();
		JObject get();
		jboolean isEnqueued();
		jboolean refersTo(JObject arg0);
	};
} // namespace java::lang::ref

