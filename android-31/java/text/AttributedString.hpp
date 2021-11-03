#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JArray;
class JObject;
class JString;
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
		AttributedString(JString arg0);
		AttributedString(JObject arg0);
		AttributedString(JString arg0, JObject arg1);
		AttributedString(JObject arg0, jint arg1, jint arg2);
		AttributedString(JObject arg0, jint arg1, jint arg2, JArray arg3);
		
		// Methods
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1);
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1, jint arg2, jint arg3);
		void addAttributes(JObject arg0, jint arg1, jint arg2);
		JObject getIterator();
		JObject getIterator(JArray arg0);
		JObject getIterator(JArray arg0, jint arg1, jint arg2);
	};
} // namespace java::text

