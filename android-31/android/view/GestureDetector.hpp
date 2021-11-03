#pragma once

#include "../../JObject.hpp"

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
	class GestureDetector : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureDetector(QJniObject obj);
		
		// Constructors
		GestureDetector(JObject arg0);
		GestureDetector(android::content::Context arg0, JObject arg1);
		GestureDetector(JObject arg0, android::os::Handler arg1);
		GestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2);
		GestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2, jboolean arg3);
		
		// Methods
		jboolean isLongpressEnabled();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setContextClickListener(JObject arg0);
		void setIsLongpressEnabled(jboolean arg0);
		void setOnDoubleTapListener(JObject arg0);
	};
} // namespace android::view

