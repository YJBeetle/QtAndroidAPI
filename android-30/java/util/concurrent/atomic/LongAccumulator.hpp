#pragma once


namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class LongAccumulator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LongAccumulator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongAccumulator(QAndroidJniObject obj);
		
		// Constructors
		LongAccumulator(JObject arg0, jlong arg1);
		
		// Methods
		void accumulate(jlong arg0) const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		jlong get() const;
		jlong getThenReset() const;
		jint intValue() const;
		jlong longValue() const;
		void reset() const;
		JString toString() const;
	};
} // namespace java::util::concurrent::atomic

