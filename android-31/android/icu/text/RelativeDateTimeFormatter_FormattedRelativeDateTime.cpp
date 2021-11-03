#include "./ConstrainedFieldPosition.hpp"
#include "./RelativeDateTimeFormatter_FormattedRelativeDateTime.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	RelativeDateTimeFormatter_FormattedRelativeDateTime::RelativeDateTimeFormatter_FormattedRelativeDateTime(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject RelativeDateTimeFormatter_FormattedRelativeDateTime::appendTo(JObject arg0)
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	jchar RelativeDateTimeFormatter_FormattedRelativeDateTime::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint RelativeDateTimeFormatter_FormattedRelativeDateTime::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean RelativeDateTimeFormatter_FormattedRelativeDateTime::nextPosition(android::icu::text::ConstrainedFieldPosition arg0)
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	jstring RelativeDateTimeFormatter_FormattedRelativeDateTime::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	JObject RelativeDateTimeFormatter_FormattedRelativeDateTime::toCharacterIterator()
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	jstring RelativeDateTimeFormatter_FormattedRelativeDateTime::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

