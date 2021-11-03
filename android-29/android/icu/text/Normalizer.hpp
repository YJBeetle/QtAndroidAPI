#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult;
}

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
		Normalizer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint compare(jcharArray arg0, jcharArray arg1, jint arg2);
		static jint compare(jint arg0, jint arg1, jint arg2);
		static jint compare(jint arg0, jstring arg1, jint arg2);
		static jint compare(jstring arg0, jstring arg1, jint arg2);
		static jint compare(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5, jint arg6);
		jobject clone();
	};
} // namespace android::icu::text

