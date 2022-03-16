#pragma once

#include "../../../JObject.hpp"

namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
class JString;
class JObject;

namespace android::text::method
{
	class MetaKeyKeyListener : public JObject
	{
	public:
		// Fields
		static jint META_ALT_LOCKED();
		static jint META_ALT_ON();
		static jint META_CAP_LOCKED();
		static jint META_SHIFT_ON();
		static jint META_SYM_LOCKED();
		static jint META_SYM_ON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MetaKeyKeyListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MetaKeyKeyListener(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MetaKeyKeyListener();
		
		// Methods
		static jlong adjustMetaAfterKeypress(jlong arg0);
		static void adjustMetaAfterKeypress(JObject arg0);
		static void clearMetaKeyState(JObject arg0, jint arg1);
		static jint getMetaState(JString arg0);
		static jint getMetaState(jlong arg0);
		static jint getMetaState(JString arg0, android::view::KeyEvent arg1);
		static jint getMetaState(JString arg0, jint arg1);
		static jint getMetaState(jlong arg0, jint arg1);
		static jint getMetaState(JString arg0, jint arg1, android::view::KeyEvent arg2);
		static jlong handleKeyDown(jlong arg0, jint arg1, android::view::KeyEvent arg2);
		static jlong handleKeyUp(jlong arg0, jint arg1, android::view::KeyEvent arg2);
		static jboolean isMetaTracker(JString arg0, JObject arg1);
		static jboolean isSelectingMetaTracker(JString arg0, JObject arg1);
		static jlong resetLockedMeta(jlong arg0);
		static void resetMetaState(JObject arg0);
		jlong clearMetaKeyState(jlong arg0, jint arg1) const;
		void clearMetaKeyState(android::view::View arg0, JObject arg1, jint arg2) const;
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
		jboolean onKeyUp(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
	};
} // namespace android::text::method

