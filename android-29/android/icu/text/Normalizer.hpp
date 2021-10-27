#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class Normalizer_QuickCheckResult;
}

namespace android::icu::text
{
	class Normalizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint COMPARE_CODE_POINT_ORDER();
		static jint COMPARE_IGNORE_CASE();
		static jint FOLD_CASE_DEFAULT();
		static jint FOLD_CASE_EXCLUDE_SPECIAL_I();
		static jint INPUT_IS_FCD();
		static QAndroidJniObject MAYBE();
		static QAndroidJniObject NO();
		static QAndroidJniObject YES();
		
		Normalizer(QAndroidJniObject obj);
		// Constructors
		Normalizer() = default;
		
		// Methods
		static jint compare(jcharArray arg0, jcharArray arg1, jint arg2);
		static jint compare(jint arg0, jint arg1, jint arg2);
		static jint compare(jint arg0, jstring arg1, jint arg2);
		static jint compare(jint arg0, const QString &arg1, jint arg2);
		static jint compare(jstring arg0, jstring arg1, jint arg2);
		static jint compare(const QString &arg0, const QString &arg1, jint arg2);
		static jint compare(jcharArray arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4, jint arg5, jint arg6);
		jobject clone();
	};
} // namespace android::icu::text

