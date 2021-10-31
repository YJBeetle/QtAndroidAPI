#include "./DecimalFormat.hpp"
#include "../util/ULocale.hpp"
#include "./ScientificNumberFormatter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	ScientificNumberFormatter::ScientificNumberFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScientificNumberFormatter::getMarkupInstance(android::icu::text::DecimalFormat arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/text/DecimalFormat;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getMarkupInstance(android::icu::util::ULocale arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getSuperscriptInstance(android::icu::text::DecimalFormat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/text/DecimalFormat;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object()
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getSuperscriptInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.object()
		);
	}
	jstring ScientificNumberFormatter::format(jobject arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::text
