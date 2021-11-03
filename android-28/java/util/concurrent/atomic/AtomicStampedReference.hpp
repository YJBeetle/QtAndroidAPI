#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JObject;

namespace java::util::concurrent::atomic
{
	class AtomicStampedReference : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicStampedReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicStampedReference(QJniObject obj);
		
		// Constructors
		AtomicStampedReference(JObject arg0, jint arg1);
		
		// Methods
		jboolean attemptStamp(JObject arg0, jint arg1);
		jboolean compareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3);
		JObject get(JIntArray arg0);
		JObject getReference();
		jint getStamp();
		void set(JObject arg0, jint arg1);
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3);
	};
} // namespace java::util::concurrent::atomic

