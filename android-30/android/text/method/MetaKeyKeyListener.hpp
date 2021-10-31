#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class MetaKeyKeyListener : public __JniBaseClass
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
		template<typename ...Ts> explicit MetaKeyKeyListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MetaKeyKeyListener(QAndroidJniObject obj);
		
		// Constructors
		MetaKeyKeyListener();
		
		// Methods
		static jlong adjustMetaAfterKeypress(jlong arg0);
		static void adjustMetaAfterKeypress(__JniBaseClass arg0);
		static void clearMetaKeyState(__JniBaseClass arg0, jint arg1);
		static jint getMetaState(jstring arg0);
		static jint getMetaState(jlong arg0);
		static jint getMetaState(jstring arg0, android::view::KeyEvent arg1);
		static jint getMetaState(jstring arg0, jint arg1);
		static jint getMetaState(jlong arg0, jint arg1);
		static jint getMetaState(jstring arg0, jint arg1, android::view::KeyEvent arg2);
		static jlong handleKeyDown(jlong arg0, jint arg1, android::view::KeyEvent arg2);
		static jlong handleKeyUp(jlong arg0, jint arg1, android::view::KeyEvent arg2);
		static jboolean isMetaTracker(jstring arg0, jobject arg1);
		static jboolean isSelectingMetaTracker(jstring arg0, jobject arg1);
		static jlong resetLockedMeta(jlong arg0);
		static void resetMetaState(__JniBaseClass arg0);
		jlong clearMetaKeyState(jlong arg0, jint arg1);
		void clearMetaKeyState(android::view::View arg0, __JniBaseClass arg1, jint arg2);
		jboolean onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyUp(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
	};
} // namespace android::text::method

