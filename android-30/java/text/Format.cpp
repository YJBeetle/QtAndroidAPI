#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "./Format.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	Format::Format(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Format::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JString Format::format(JObject arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer Format::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject Format::formatToCharacterIterator(JObject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	JObject Format::parseObject(JString arg0)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JObject Format::parseObject(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::text

