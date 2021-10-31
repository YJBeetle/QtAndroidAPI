#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Upper.hpp"

namespace android::icu::text
{
	// Fields
	
	CaseMap_Upper::CaseMap_Upper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CaseMap_Upper::apply(java::util::Locale arg0, jstring arg1, __JniBaseClass arg2, android::icu::text::Edits arg3)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring CaseMap_Upper::apply(java::util::Locale arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Upper::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Upper;"
		);
	}
} // namespace android::icu::text

