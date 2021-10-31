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
		
		// QJniObject forward
		template<typename ...Ts> explicit LongAccumulator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LongAccumulator(QJniObject obj);
		
		// Constructors
		LongAccumulator(__JniBaseClass arg0, jlong arg1);
		
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

