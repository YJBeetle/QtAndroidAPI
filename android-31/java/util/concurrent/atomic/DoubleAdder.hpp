#pragma once


namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class DoubleAdder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DoubleAdder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DoubleAdder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DoubleAdder();
		
		// Methods
		void add(jdouble arg0) const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		jint intValue() const;
		jlong longValue() const;
		void reset() const;
		jdouble sum() const;
		jdouble sumThenReset() const;
		JString toString() const;
	};
} // namespace java::util::concurrent::atomic

