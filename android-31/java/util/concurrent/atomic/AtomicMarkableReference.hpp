#pragma once

#include "../../../../JObject.hpp"

class JBooleanArray;
class JObject;

namespace java::util::concurrent::atomic
{
	class AtomicMarkableReference : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicMarkableReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicMarkableReference(QJniObject obj);
		
		// Constructors
		AtomicMarkableReference(JObject arg0, jboolean arg1);
		
		// Methods
		jboolean attemptMark(JObject arg0, jboolean arg1);
		jboolean compareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3);
		JObject get(JBooleanArray arg0);
		JObject getReference();
		jboolean isMarked();
		void set(JObject arg0, jboolean arg1);
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3);
	};
} // namespace java::util::concurrent::atomic

