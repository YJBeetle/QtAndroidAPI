#pragma once

#include "../../JObject.hpp"

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
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}

namespace java::text
{
	class Format : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Format(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Format(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject clone();
		JString format(JObject arg0);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(JObject arg0);
		JObject parseObject(JString arg0);
		JObject parseObject(JString arg0, java::text::ParsePosition arg1);
	};
} // namespace java::text

