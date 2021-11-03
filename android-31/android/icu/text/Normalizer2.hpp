#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult;
}
namespace android::icu::text
{
	class Normalizer2_Mode;
}
namespace java::io
{
	class InputStream;
}
class JString;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace android::icu::text
{
	class Normalizer2 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer2(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::Normalizer2 getInstance(java::io::InputStream arg0, JString arg1, android::icu::text::Normalizer2_Mode arg2);
		static android::icu::text::Normalizer2 getNFCInstance();
		static android::icu::text::Normalizer2 getNFDInstance();
		static android::icu::text::Normalizer2 getNFKCCasefoldInstance();
		static android::icu::text::Normalizer2 getNFKCInstance();
		static android::icu::text::Normalizer2 getNFKDInstance();
		java::lang::StringBuilder append(java::lang::StringBuilder arg0, JString arg1);
		jint composePair(jint arg0, jint arg1);
		jint getCombiningClass(jint arg0);
		JString getDecomposition(jint arg0);
		JString getRawDecomposition(jint arg0);
		jboolean hasBoundaryAfter(jint arg0);
		jboolean hasBoundaryBefore(jint arg0);
		jboolean isInert(jint arg0);
		jboolean isNormalized(JString arg0);
		JObject normalize(JString arg0, JObject arg1);
		JString normalize(JString arg0);
		java::lang::StringBuilder normalize(JString arg0, java::lang::StringBuilder arg1);
		java::lang::StringBuilder normalizeSecondAndAppend(java::lang::StringBuilder arg0, JString arg1);
		android::icu::text::Normalizer_QuickCheckResult quickCheck(JString arg0);
		jint spanQuickCheckYes(JString arg0);
	};
} // namespace android::icu::text

