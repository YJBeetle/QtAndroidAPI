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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicStampedReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicStampedReference(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AtomicStampedReference(JObject arg0, jint arg1);
		
		// Methods
		jboolean attemptStamp(JObject arg0, jint arg1) const;
		jboolean compareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3) const;
		JObject get(JIntArray arg0) const;
		JObject getReference() const;
		jint getStamp() const;
		void set(JObject arg0, jint arg1) const;
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3) const;
	};
} // namespace java::util::concurrent::atomic

