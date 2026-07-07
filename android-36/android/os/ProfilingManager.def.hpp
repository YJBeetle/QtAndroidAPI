#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
class JString;

namespace android::os
{
	class ProfilingManager : public JObject
	{
	public:
		// Fields
		static jint PROFILING_TYPE_HEAP_PROFILE();
		static jint PROFILING_TYPE_JAVA_HEAP_DUMP();
		static jint PROFILING_TYPE_STACK_SAMPLING();
		static jint PROFILING_TYPE_SYSTEM_TRACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProfilingManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProfilingManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addProfilingTriggers(JObject arg0) const;
		void clearProfilingTriggers() const;
		void registerForAllProfilingResults(JObject arg0, JObject arg1) const;
		void removeProfilingTriggersByType(JIntArray arg0) const;
		void requestProfiling(jint arg0, android::os::Bundle arg1, JString arg2, android::os::CancellationSignal arg3, JObject arg4, JObject arg5) const;
		void unregisterForAllProfilingResults(JObject arg0) const;
	};
} // namespace android::os

