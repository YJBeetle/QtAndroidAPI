#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class VersionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ICU_VERSION();
		static QAndroidJniObject UCOL_BUILDER_VERSION();
		static QAndroidJniObject UCOL_RUNTIME_VERSION();
		static QAndroidJniObject UNICODE_10_0();
		static QAndroidJniObject UNICODE_11_0();
		static QAndroidJniObject UNICODE_1_0();
		static QAndroidJniObject UNICODE_1_0_1();
		static QAndroidJniObject UNICODE_1_1_0();
		static QAndroidJniObject UNICODE_1_1_5();
		static QAndroidJniObject UNICODE_2_0();
		static QAndroidJniObject UNICODE_2_1_2();
		static QAndroidJniObject UNICODE_2_1_5();
		static QAndroidJniObject UNICODE_2_1_8();
		static QAndroidJniObject UNICODE_2_1_9();
		static QAndroidJniObject UNICODE_3_0();
		static QAndroidJniObject UNICODE_3_0_1();
		static QAndroidJniObject UNICODE_3_1_0();
		static QAndroidJniObject UNICODE_3_1_1();
		static QAndroidJniObject UNICODE_3_2();
		static QAndroidJniObject UNICODE_4_0();
		static QAndroidJniObject UNICODE_4_0_1();
		static QAndroidJniObject UNICODE_4_1();
		static QAndroidJniObject UNICODE_5_0();
		static QAndroidJniObject UNICODE_5_1();
		static QAndroidJniObject UNICODE_5_2();
		static QAndroidJniObject UNICODE_6_0();
		static QAndroidJniObject UNICODE_6_1();
		static QAndroidJniObject UNICODE_6_2();
		static QAndroidJniObject UNICODE_6_3();
		static QAndroidJniObject UNICODE_7_0();
		static QAndroidJniObject UNICODE_8_0();
		static QAndroidJniObject UNICODE_9_0();
		
		VersionInfo(QAndroidJniObject obj);
		// Constructors
		VersionInfo() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jint arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jint arg0, jint arg1);
		static QAndroidJniObject getInstance(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject getInstance(jint arg0, jint arg1, jint arg2, jint arg3);
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

