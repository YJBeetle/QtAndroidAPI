#include "../lang/StringBuffer.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "./Format.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	Format::Format(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject Format::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Format::format(jobject arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	java::lang::StringBuffer Format::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Format::formatToCharacterIterator(jobject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	jobject Format::parseObject(jstring arg0)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Format::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
} // namespace java::text

