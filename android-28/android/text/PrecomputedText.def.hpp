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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrecomputedText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::text::PrecomputedText create(JString arg0, android::text::PrecomputedText_Params arg1);
		jchar charAt(jint arg0) const;
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2) const;
		jint getParagraphCount() const;
		jint getParagraphEnd(jint arg0) const;
		jint getParagraphStart(jint arg0) const;
		android::text::PrecomputedText_Params getParams() const;
		jint getSpanEnd(JObject arg0) const;
		jint getSpanFlags(JObject arg0) const;
		jint getSpanStart(JObject arg0) const;
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2) const;
		jfloat getWidth(jint arg0, jint arg1) const;
		jint length() const;
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2) const;
		void removeSpan(JObject arg0) const;
		void setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		JString subSequence(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace android::text

