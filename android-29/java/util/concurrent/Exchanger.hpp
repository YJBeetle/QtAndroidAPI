#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class Exchanger : public __JniBaseClass
	{
	public:
		// Fields
		
		Exchanger(QAndroidJniObject obj);
		// Constructors
		Exchanger();
		
		// Methods
		jobject exchange(jobject arg0);
		jobject exchange(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
	};
} // namespace java::util::concurrent

