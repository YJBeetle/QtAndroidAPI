#pragma once

#include "../../../../JObject.hpp"

class JBooleanArray;
class JObject;
namespace java::lang::invoke
{
	class VarHandle;
}

namespace java::util::concurrent::atomic
{
	class AtomicMarkableReference : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicMarkableReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicMarkableReference(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AtomicMarkableReference(JObject arg0, jboolean arg1);
		
		// Methods
		jboolean attemptMark(JObject arg0, jboolean arg1) const;
		jboolean compareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const;
		JObject get(JBooleanArray arg0) const;
		JObject getReference() const;
		jboolean isMarked() const;
		void set(JObject arg0, jboolean arg1) const;
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const;
	};
} // namespace java::util::concurrent::atomic

