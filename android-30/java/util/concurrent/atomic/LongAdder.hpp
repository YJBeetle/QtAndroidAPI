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
		void add(jlong arg0) const;
		void decrement() const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		void increment() const;
		jint intValue() const;
		jlong longValue() const;
		void reset() const;
		jlong sum() const;
		jlong sumThenReset() const;
		JString toString() const;
	};
} // namespace java::util::concurrent::atomic

