#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Upper.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CaseMap_Upper::CaseMap_Upper(QAndroidJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	JObject CaseMap_Upper::apply(java::util::Locale arg0, JString arg1, JObject arg2, android::icu::text::Edits arg3) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	JString CaseMap_Upper::apply(java::util::Locale arg0, JString arg1) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::icu::text::CaseMap_Upper CaseMap_Upper::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Upper;"
		);
	}
} // namespace android::icu::text

