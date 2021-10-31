#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class VersionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static android::icu::util::VersionInfo ICU_VERSION();
		static android::icu::util::VersionInfo UCOL_BUILDER_VERSION();
		static android::icu::util::VersionInfo UCOL_RUNTIME_VERSION();
		static android::icu::util::VersionInfo UNICODE_10_0();
		static android::icu::util::VersionInfo UNICODE_1_0();
		static android::icu::util::VersionInfo UNICODE_1_0_1();
		static android::icu::util::VersionInfo UNICODE_1_1_0();
		static android::icu::util::VersionInfo UNICODE_1_1_5();
		static android::icu::util::VersionInfo UNICODE_2_0();
		static android::icu::util::VersionInfo UNICODE_2_1_2();
		static android::icu::util::VersionInfo UNICODE_2_1_5();
		static android::icu::util::VersionInfo UNICODE_2_1_8();
		static android::icu::util::VersionInfo UNICODE_2_1_9();
		static android::icu::util::VersionInfo UNICODE_3_0();
		static android::icu::util::VersionInfo UNICODE_3_0_1();
		static android::icu::util::VersionInfo UNICODE_3_1_0();
		static android::icu::util::VersionInfo UNICODE_3_1_1();
		static android::icu::util::VersionInfo UNICODE_3_2();
		static android::icu::util::VersionInfo UNICODE_4_0();
		static android::icu::util::VersionInfo UNICODE_4_0_1();
		static android::icu::util::VersionInfo UNICODE_4_1();
		static android::icu::util::VersionInfo UNICODE_5_0();
		static android::icu::util::VersionInfo UNICODE_5_1();
		static android::icu::util::VersionInfo UNICODE_5_2();
		static android::icu::util::VersionInfo UNICODE_6_0();
		static android::icu::util::VersionInfo UNICODE_6_1();
		static android::icu::util::VersionInfo UNICODE_6_2();
		static android::icu::util::VersionInfo UNICODE_6_3();
		static android::icu::util::VersionInfo UNICODE_7_0();
		static android::icu::util::VersionInfo UNICODE_8_0();
		static android::icu::util::VersionInfo UNICODE_9_0();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VersionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VersionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::util::VersionInfo getInstance(jint arg0);
		static android::icu::util::VersionInfo getInstance(jstring arg0);
		static android::icu::util::VersionInfo getInstance(jint arg0, jint arg1);
		static android::icu::util::VersionInfo getInstance(jint arg0, jint arg1, jint arg2);
		static android::icu::util::VersionInfo getInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		jint compareTo(android::icu::util::VersionInfo arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jint getMajor();
		jint getMicro();
		jint getMilli();
		jint getMinor();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

