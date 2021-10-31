#include "./BreakIterator.hpp"
#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Title.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CaseMap_Title::CaseMap_Title(QAndroidJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Title::adjustToCased()
	{
		return callObjectMethod(
			"adjustToCased",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2, __JniBaseClass arg3, android::icu::text::Edits arg4)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	jstring CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Title::noBreakAdjustment()
	{
		return callObjectMethod(
			"noBreakAdjustment",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::noLowercase()
	{
		return callObjectMethod(
			"noLowercase",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::omitUnchangedText()
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::sentences()
	{
		return callObjectMethod(
			"sentences",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::wholeString()
	{
		return callObjectMethod(
			"wholeString",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
} // namespace android::icu::text

