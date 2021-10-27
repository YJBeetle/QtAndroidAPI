#include "./BreakIterator.hpp"
#include "./RuleBasedCollator.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./StringSearch.hpp"

namespace android::icu::text
{
	// Fields
	
	StringSearch::StringSearch(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringSearch::StringSearch(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	StringSearch::StringSearch(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	StringSearch::StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::util::ULocale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::util::ULocale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(jstring &arg0, __JniBaseClass &arg1, java::util::Locale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(const QString &arg0, __JniBaseClass &arg1, java::util::Locale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StringSearch::StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2, android::icu::text::BreakIterator &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	StringSearch::StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2, android::icu::text::BreakIterator &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject StringSearch::getCollator()
	{
		return __thiz.callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jint StringSearch::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring StringSearch::getPattern()
	{
		return __thiz.callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean StringSearch::isCanonical()
	{
		return __thiz.callMethod<jboolean>(
			"isCanonical",
			"()Z"
		);
	}
	void StringSearch::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void StringSearch::setCanonical(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanonical",
			"(Z)V",
			arg0
		);
	}
	void StringSearch::setCollator(android::icu::text::RuleBasedCollator arg0)
	{
		__thiz.callMethod<void>(
			"setCollator",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.__jniObject().object()
		);
	}
	void StringSearch::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void StringSearch::setPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringSearch::setPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void StringSearch::setTarget(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

