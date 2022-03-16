#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace java::util::concurrent
{
	class Executors : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Executors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Executors(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject callable(JObject arg0);
		static JObject callable(JObject arg0, JObject arg1);
		static JObject defaultThreadFactory();
		static JObject newCachedThreadPool();
		static JObject newCachedThreadPool(JObject arg0);
		static JObject newFixedThreadPool(jint arg0);
		static JObject newFixedThreadPool(jint arg0, JObject arg1);
		static JObject newScheduledThreadPool(jint arg0);
		static JObject newScheduledThreadPool(jint arg0, JObject arg1);
		static JObject newSingleThreadExecutor();
		static JObject newSingleThreadExecutor(JObject arg0);
		static JObject newSingleThreadScheduledExecutor();
		static JObject newSingleThreadScheduledExecutor(JObject arg0);
		static JObject newWorkStealingPool();
		static JObject newWorkStealingPool(jint arg0);
		static JObject privilegedCallable(JObject arg0);
		static JObject privilegedCallableUsingCurrentClassLoader(JObject arg0);
		static JObject privilegedThreadFactory();
		static JObject unconfigurableExecutorService(JObject arg0);
		static JObject unconfigurableScheduledExecutorService(JObject arg0);
	};
} // namespace java::util::concurrent

