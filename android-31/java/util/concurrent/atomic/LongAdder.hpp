#pragma once


namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class LongAdder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LongAdder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongAdder(QJniObject obj);
		
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
		JString toString();
	};
} // namespace java::util::concurrent::atomic

