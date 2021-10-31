#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::util::concurrent::atomic
{
	class DoubleAdder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DoubleAdder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DoubleAdder(QJniObject obj);
		
		// Constructors
		DoubleAdder();
		
		// Methods
		void add(jdouble arg0);
		jdouble doubleValue();
		jfloat floatValue();
		jint intValue();
		jlong longValue();
		void reset();
		jdouble sum();
		jdouble sumThenReset();
		jstring toString();
	};
} // namespace java::util::concurrent::atomic

