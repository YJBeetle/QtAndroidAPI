#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class Layout;
}
class JString;
class JObject;

namespace android::text
{
	class Selection : public JObject
	{
	public:
		// Fields
		static JObject SELECTION_END();
		static JObject SELECTION_START();
		
		// QJniObject forward
		template<typename ...Ts> explicit Selection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Selection(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean extendDown(JObject arg0, android::text::Layout arg1);
		static jboolean extendLeft(JObject arg0, android::text::Layout arg1);
		static jboolean extendRight(JObject arg0, android::text::Layout arg1);
		static void extendSelection(JObject arg0, jint arg1);
		static jboolean extendToLeftEdge(JObject arg0, android::text::Layout arg1);
		static jboolean extendToRightEdge(JObject arg0, android::text::Layout arg1);
		static jboolean extendUp(JObject arg0, android::text::Layout arg1);
		static jint getSelectionEnd(JString arg0);
		static jint getSelectionStart(JString arg0);
		static jboolean moveDown(JObject arg0, android::text::Layout arg1);
		static jboolean moveLeft(JObject arg0, android::text::Layout arg1);
		static jboolean moveRight(JObject arg0, android::text::Layout arg1);
		static jboolean moveToLeftEdge(JObject arg0, android::text::Layout arg1);
		static jboolean moveToRightEdge(JObject arg0, android::text::Layout arg1);
		static jboolean moveUp(JObject arg0, android::text::Layout arg1);
		static void removeSelection(JObject arg0);
		static void selectAll(JObject arg0);
		static void setSelection(JObject arg0, jint arg1);
		static void setSelection(JObject arg0, jint arg1, jint arg2);
	};
} // namespace android::text

