#pragma once

#include "../../../JObject.hpp"

class JCharArray;
namespace android::icu::text
{
	class Normalizer_QuickCheckResult;
}
class JObject;
class JString;

namespace android::icu::text
{
	class Normalizer : public JObject
	{
	public:
		// Fields
		static jint COMPARE_CODE_POINT_ORDER();
		static jint COMPARE_IGNORE_CASE();
		static jint FOLD_CASE_DEFAULT();
		static jint FOLD_CASE_EXCLUDE_SPECIAL_I();
		static jint INPUT_IS_FCD();
		static android::icu::text::Normalizer_QuickCheckResult MAYBE();
		static android::icu::text::Normalizer_QuickCheckResult NO();
		static android::icu::text::Normalizer_QuickCheckResult YES();
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint compare(JCharArray arg0, JCharArray arg1, jint arg2);
		static jint compare(jint arg0, jint arg1, jint arg2);
		static jint compare(jint arg0, JString arg1, jint arg2);
		static jint compare(JString arg0, JString arg1, jint arg2);
		static jint compare(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5, jint arg6);
		JObject clone() const;
	};
} // namespace android::icu::text

