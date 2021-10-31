#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class AbstractExecutorService : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractExecutorService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractExecutorService(QAndroidJniObject obj);
		
		// Constructors
		AbstractExecutorService();
		
		// Methods
		QAndroidJniObject invokeAll(__JniBaseClass arg0);
		QAndroidJniObject invokeAll(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jobject invokeAny(__JniBaseClass arg0);
		jobject invokeAny(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject submit(__JniBaseClass arg0);
		QAndroidJniObject submit(__JniBaseClass arg0, jobject arg1);
	};
} // namespace java::util::concurrent

