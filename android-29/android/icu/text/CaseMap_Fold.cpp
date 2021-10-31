#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "./CaseMap_Fold.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CaseMap_Fold::CaseMap_Fold(QAndroidJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Fold::apply(jstring arg0, __JniBaseClass arg1, android::icu::text::Edits arg2)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jstring CaseMap_Fold::apply(jstring arg0)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Fold::omitUnchangedText()
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	QAndroidJniObject CaseMap_Fold::turkic()
	{
		return callObjectMethod(
			"turkic",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
} // namespace android::icu::text
