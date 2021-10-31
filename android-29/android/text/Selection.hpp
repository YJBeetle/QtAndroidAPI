#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class Layout;
}

namespace android::text
{
	class Selection : public __JniBaseClass
	{
	public:
		// Fields
		static jobject SELECTION_END();
		static jobject SELECTION_START();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Selection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Selection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean extendDown(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean extendLeft(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean extendRight(__JniBaseClass arg0, android::text::Layout arg1);
		static void extendSelection(__JniBaseClass arg0, jint arg1);
		static jboolean extendToLeftEdge(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean extendToRightEdge(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean extendUp(__JniBaseClass arg0, android::text::Layout arg1);
		static jint getSelectionEnd(jstring arg0);
		static jint getSelectionStart(jstring arg0);
		static jboolean moveDown(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean moveLeft(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean moveRight(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean moveToLeftEdge(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean moveToRightEdge(__JniBaseClass arg0, android::text::Layout arg1);
		static jboolean moveUp(__JniBaseClass arg0, android::text::Layout arg1);
		static void removeSelection(__JniBaseClass arg0);
		static void selectAll(__JniBaseClass arg0);
		static void setSelection(__JniBaseClass arg0, jint arg1);
		static void setSelection(__JniBaseClass arg0, jint arg1, jint arg2);
	};
} // namespace android::text

