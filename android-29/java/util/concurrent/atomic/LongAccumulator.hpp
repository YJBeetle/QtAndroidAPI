#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::util::concurrent::atomic
{
	class LongAccumulator : public __JniBaseClass
	{
	public:
		// Fields
		
		LongAccumulator(QAndroidJniObject obj);
		// Constructors
		LongAccumulator(__JniBaseClass arg0, jlong arg1);
		LongAccumulator() = default;
		
		// Methods
		void accumulate(jlong arg0);
		jdouble doubleValue();
		jfloat floatValue();
		jlong get();
		jlong getThenReset();
		jint intValue();
		jlong longValue();
		void reset();
		jstring toString();
	};
} // namespace java::util::concurrent::atomic

