#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "./CaseMap_Fold.hpp"

namespace android::icu::text
{
	// Fields
	
	CaseMap_Fold::CaseMap_Fold(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Fold::apply(jstring arg0, __JniBaseClass arg1, android::icu::text::Edits arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring CaseMap_Fold::apply(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Fold::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	QAndroidJniObject CaseMap_Fold::turkic()
	{
		return __thiz.callObjectMethod(
			"turkic",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
} // namespace android::icu::text

