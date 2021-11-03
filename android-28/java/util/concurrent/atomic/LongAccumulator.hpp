#pragma once

#include "../../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}

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

