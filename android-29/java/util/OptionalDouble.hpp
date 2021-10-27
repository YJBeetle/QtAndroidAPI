#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class OptionalDouble : public __JniBaseClass
	{
	public:
		// Fields
		
		OptionalDouble(QAndroidJniObject obj);
		// Constructors
		OptionalDouble() = default;
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jdouble arg0);
		jboolean equals(jobject arg0);
		jdouble getAsDouble();
		jint hashCode();
		void ifPresent(__JniBaseClass arg0);
		void ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jdouble orElse(jdouble arg0);
		jdouble orElseGet(__JniBaseClass arg0);
		jdouble orElseThrow();
		jdouble orElseThrow(__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace java::util

