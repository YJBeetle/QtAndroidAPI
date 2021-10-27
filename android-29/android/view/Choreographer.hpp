#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Looper;
}

namespace android::view
{
	class Choreographer : public __JniBaseClass
	{
	public:
		// Fields
		
		Choreographer(QAndroidJniObject obj);
		// Constructors
		Choreographer() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		void postFrameCallback(__JniBaseClass arg0);
		void postFrameCallbackDelayed(__JniBaseClass arg0, jlong arg1);
		void removeFrameCallback(__JniBaseClass arg0);
	};
} // namespace android::view

