#pragma once

#include "../../JObject.hpp"

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
	class ThreadLocal : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadLocal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadLocal(QAndroidJniObject obj);
		
		// Constructors
		ThreadLocal();
		
		// Methods
		static java::lang::ThreadLocal withInitial(JObject arg0);
		jobject get();
		void remove();
		void set(jobject arg0);
	};
} // namespace java::lang

