#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
class JString;

namespace android::inputmethodservice
{
	class Keyboard : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Keyboard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Keyboard(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Keyboard(android::content::Context arg0, jint arg1);
		Keyboard(android::content::Context arg0, jint arg1, jint arg2);
		Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		Keyboard(android::content::Context arg0, jint arg1, JString arg2, jint arg3, jint arg4);
		
		// Methods
		jint getHeight() const;
		JObject getKeys() const;
		jint getMinWidth() const;
		JObject getModifierKeys() const;
		JIntArray getNearestKeys(jint arg0, jint arg1) const;
		jint getShiftKeyIndex() const;
		jboolean isShifted() const;
		jboolean setShifted(jboolean arg0) const;
	};
} // namespace android::inputmethodservice

