#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CaseMap_Fold.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CaseMap_Fold::CaseMap_Fold(QAndroidJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	JObject CaseMap_Fold::apply(JString arg0, JObject arg1, android::icu::text::Edits arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	JString CaseMap_Fold::apply(JString arg0) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::CaseMap_Fold CaseMap_Fold::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	android::icu::text::CaseMap_Fold CaseMap_Fold::turkic() const
	{
		return callObjectMethod(
			"turkic",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
} // namespace android::icu::text

