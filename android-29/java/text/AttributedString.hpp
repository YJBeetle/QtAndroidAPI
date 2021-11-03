#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class AttributedCharacterIterator_Attribute;
}

namespace java::text
{
	class AttributedString : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributedString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributedString(QAndroidJniObject obj);
		
		// Constructors
		AttributedString(jstring arg0);
		AttributedString(JObject arg0);
		AttributedString(jstring arg0, JObject arg1);
		AttributedString(JObject arg0, jint arg1, jint arg2);
		AttributedString(JObject arg0, jint arg1, jint arg2, jarray arg3);
		
		// Methods
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1);
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1, jint arg2, jint arg3);
		void addAttributes(JObject arg0, jint arg1, jint arg2);
		JObject getIterator();
		JObject getIterator(jarray arg0);
		JObject getIterator(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::text

