#include "./ConstrainedFieldPosition.hpp"
#include "./DateIntervalFormat_FormattedDateInterval.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	DateIntervalFormat_FormattedDateInterval::DateIntervalFormat_FormattedDateInterval(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass DateIntervalFormat_FormattedDateInterval::appendTo(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	jchar DateIntervalFormat_FormattedDateInterval::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint DateIntervalFormat_FormattedDateInterval::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean DateIntervalFormat_FormattedDateInterval::nextPosition(android::icu::text::ConstrainedFieldPosition arg0)
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	jstring DateIntervalFormat_FormattedDateInterval::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	__JniBaseClass DateIntervalFormat_FormattedDateInterval::toCharacterIterator()
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	jstring DateIntervalFormat_FormattedDateInterval::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

