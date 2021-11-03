#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Lower.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	CaseMap_Lower::CaseMap_Lower(QJniObject obj) : android::icu::text::CaseMap(obj) {}
	
	// Constructors
	
	// Methods
	JObject CaseMap_Lower::apply(java::util::Locale arg0, JString arg1, JObject arg2, android::icu::text::Edits arg3)
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
	JString CaseMap_Lower::apply(java::util::Locale arg0, JString arg1)
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::icu::text::CaseMap_Lower CaseMap_Lower::omitUnchangedText()
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
} // namespace android::icu::text

