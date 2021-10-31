#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}

namespace java::time::temporal
{
	class ValueRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ValueRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ValueRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1);
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1, jlong arg2);
		static java::time::temporal::ValueRange of(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		jint checkValidIntValue(jlong arg0, __JniBaseClass arg1);
		jlong checkValidValue(jlong arg0, __JniBaseClass arg1);
		jboolean equals(jobject arg0);
		jlong getLargestMinimum();
		jlong getMaximum();
		jlong getMinimum();
		jlong getSmallestMaximum();
		jint hashCode();
		jboolean isFixed();
		jboolean isIntValue();
		jboolean isValidIntValue(jlong arg0);
		jboolean isValidValue(jlong arg0);
		jstring toString();
	};
} // namespace java::time::temporal

