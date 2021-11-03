#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::util::concurrent::atomic
{
	class LongAdder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LongAdder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongAdder(QAndroidJniObject obj);
		
		// Constructors
		LongAdder();
		
		// Methods
		void add(jlong arg0);
		void decrement();
		jdouble doubleValue();
		jfloat floatValue();
		void increment();
		jint intValue();
		jlong longValue();
		void reset();
		jlong sum();
		jlong sumThenReset();
		jstring toString();
	};
} // namespace java::util::concurrent::atomic

