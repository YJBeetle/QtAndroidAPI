#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::util::concurrent::atomic
{
	class DoubleAccumulator : public __JniBaseClass
	{
	public:
		// Fields
		
		DoubleAccumulator(QAndroidJniObject obj);
		// Constructors
		DoubleAccumulator(__JniBaseClass arg0, jdouble arg1);
		DoubleAccumulator() = default;
		
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

