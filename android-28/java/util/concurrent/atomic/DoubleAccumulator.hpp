#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::util::concurrent::atomic
{
	class DoubleAccumulator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DoubleAccumulator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DoubleAccumulator(QAndroidJniObject obj);
		
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
		jstring toString();
	};
} // namespace java::util::concurrent::atomic

