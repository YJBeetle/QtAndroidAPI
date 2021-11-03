#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JObjectArray;
class JString;
class JClass;
class JObject;
class JString;

namespace android::text
{
	class SpannableString : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpannableString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannableString(QAndroidJniObject obj);
		
		// Constructors
		SpannableString(JString arg0);
		
		// Methods
		static android::text::SpannableString valueOf(JString arg0);
		jchar charAt(jint arg0) const;
		jboolean equals(JObject arg0) const;
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const;
		jint getSpanEnd(JObject arg0) const;
		jint getSpanFlags(JObject arg0) const;
		jint getSpanStart(JObject arg0) const;
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2) const;
		jint hashCode() const;
		jint length() const;
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2) const;
		void removeSpan(JObject arg0) const;
		void setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		JString subSequence(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace android::text

