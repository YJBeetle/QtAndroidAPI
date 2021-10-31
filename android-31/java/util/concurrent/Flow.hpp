#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::concurrent
{
	class Flow : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Flow(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Flow(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint defaultBufferSize();
	};
} // namespace java::util::concurrent

