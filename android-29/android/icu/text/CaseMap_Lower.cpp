#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Lower.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CaseMap_Lower::CaseMap_Lower(QAndroidJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Lower::apply(java::util::Locale arg0, jstring arg1, __JniBaseClass arg2, android::icu::text::Edits arg3)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	jstring CaseMap_Lower::apply(java::util::Locale arg0, jstring arg1)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Lower::omitUnchangedText()
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
} // namespace android::icu::text

