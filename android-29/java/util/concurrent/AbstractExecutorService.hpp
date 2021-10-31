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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractExecutorService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AbstractExecutorService(QJniObject obj);
		
		// Constructors
		AbstractExecutorService();
		
		// Methods
		__JniBaseClass invokeAll(__JniBaseClass arg0);
		__JniBaseClass invokeAll(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		jobject invokeAny(__JniBaseClass arg0);
		jobject invokeAny(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		__JniBaseClass submit(__JniBaseClass arg0);
		__JniBaseClass submit(__JniBaseClass arg0, jobject arg1);
	};
} // namespace java::util::concurrent

