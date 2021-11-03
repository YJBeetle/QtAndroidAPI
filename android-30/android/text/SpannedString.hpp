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
	class SpannedString : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpannedString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpannedString(QAndroidJniObject obj);
		
		// Constructors
		SpannedString(JString arg0);
		
		// Methods
		static android::text::SpannedString valueOf(JString arg0);
		jchar charAt(jint arg0);
		jboolean equals(JObject arg0);
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3);
		jint getSpanEnd(JObject arg0);
		jint getSpanFlags(JObject arg0);
		jint getSpanStart(JObject arg0);
		JObjectArray getSpans(jint arg0, jint arg1, JClass arg2);
		jint hashCode();
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, JClass arg2);
		JString subSequence(jint arg0, jint arg1);
		JString toString();
	};
} // namespace android::text

