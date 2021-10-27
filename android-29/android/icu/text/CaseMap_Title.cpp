#include "./BreakIterator.hpp"
#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Title.hpp"

namespace android::icu::text
{
	// Fields
	
	CaseMap_Title::CaseMap_Title(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Title::adjustToCased()
	{
		return __thiz.callObjectMethod(
			"adjustToCased",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2, __JniBaseClass arg3, android::icu::text::Edits arg4)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, const QString &arg2, __JniBaseClass arg3, android::icu::text::Edits arg4)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jstring CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Title::noBreakAdjustment()
	{
		return __thiz.callObjectMethod(
			"noBreakAdjustment",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::noLowercase()
	{
		return __thiz.callObjectMethod(
			"noLowercase",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::sentences()
	{
		return __thiz.callObjectMethod(
			"sentences",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::wholeString()
	{
		return __thiz.callObjectMethod(
			"wholeString",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
} // namespace android::icu::text

