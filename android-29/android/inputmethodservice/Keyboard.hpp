#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources;
}
namespace android::inputmethodservice
{
	class Keyboard_Key;
}
namespace android::inputmethodservice
{
	class Keyboard_Row;
}

namespace android::inputmethodservice
{
	class Keyboard : public __JniBaseClass
	{
	public:
		// Fields
		static jint EDGE_BOTTOM();
		static jint EDGE_LEFT();
		static jint EDGE_RIGHT();
		static jint EDGE_TOP();
		static jint KEYCODE_ALT();
		static jint KEYCODE_CANCEL();
		static jint KEYCODE_DELETE();
		static jint KEYCODE_DONE();
		static jint KEYCODE_MODE_CHANGE();
		static jint KEYCODE_SHIFT();
		
		Keyboard(QAndroidJniObject obj);
		// Constructors
		Keyboard(android::content::Context arg0, jint arg1);
		Keyboard(android::content::Context arg0, jint arg1, jint arg2);
		Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		Keyboard(android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		Keyboard() = default;
		
		// Methods
		jint getHeight();
		QAndroidJniObject getKeys();
		jint getMinWidth();
		QAndroidJniObject getModifierKeys();
		jintArray getNearestKeys(jint arg0, jint arg1);
		jint getShiftKeyIndex();
		jboolean isShifted();
		jboolean setShifted(jboolean arg0);
	};
} // namespace android::inputmethodservice

