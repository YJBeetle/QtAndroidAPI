#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class GestureDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureDetector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureDetector(QJniObject obj);
		
		// Constructors
		GestureDetector(__JniBaseClass arg0);
		GestureDetector(android::content::Context arg0, __JniBaseClass arg1);
		GestureDetector(__JniBaseClass arg0, android::os::Handler arg1);
		GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2);
		GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2, jboolean arg3);
		
		// Methods
		jboolean isLongpressEnabled();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setContextClickListener(__JniBaseClass arg0);
		void setIsLongpressEnabled(jboolean arg0);
		void setOnDoubleTapListener(__JniBaseClass arg0);
	};
} // namespace android::view

