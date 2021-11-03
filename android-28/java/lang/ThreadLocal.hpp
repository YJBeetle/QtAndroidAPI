#pragma once

#include "../../JObject.hpp"

class JObject;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ThreadLocal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThreadLocal(QJniObject obj);
		
		// Constructors
		ThreadLocal();
		
		// Methods
		static java::lang::ThreadLocal withInitial(JObject arg0);
		JObject get();
		void remove();
		void set(JObject arg0);
	};
} // namespace java::lang

