#pragma once

#include "../../JObject.hpp"

class JObjectArray;
namespace android::graphics
{
	class Rect;
}
namespace android::text
{
	class PrecomputedText_Params;
}
class JString;
class JClass;
class JObject;
class JString;

namespace android::text
{
	class PrecomputedText : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrecomputedText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::PrecomputedText create(JString arg0, android::text::PrecomputedText_Params arg1);
		jchar charAt(jint arg0);
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2);
		jint getParagraphCount();
		jint getParagraphEnd(jint arg0);
		jint getParagraphStart(jint arg0);
		android::text::PrecomputedText_Params getParams();
		jint getSpanEnd(JObject arg0);
		jint getSpanFlags(JObject arg0);
		jint getSpanStart(JObject arg0);
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2);
		jfloat getWidth(jint arg0, jint arg1);
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2);
		void removeSpan(JObject arg0);
		void setSpan(JObject arg0, jint arg1, jint arg2, jint arg3);
		JString subSequence(jint arg0, jint arg1);
		JString toString();
	};
} // namespace android::text

