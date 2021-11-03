#pragma once


namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class DoubleAccumulator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DoubleAccumulator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DoubleAccumulator(QJniObject obj);
		
		// Constructors
		DoubleAccumulator(JObject arg0, jdouble arg1);
		
		// Methods
		void accumulate(jdouble arg0);
		jdouble doubleValue();
		jfloat floatValue();
		jdouble get();
		jdouble getThenReset();
		jint intValue();
		jlong longValue();
		void reset();
		JString toString();
	};
} // namespace java::util::concurrent::atomic

