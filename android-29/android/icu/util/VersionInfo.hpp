#pragma once

#ifndef ANDROID_ICU_UTIL_VERSIONINFO
#define ANDROID_ICU_UTIL_VERSIONINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
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
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::icu::util::VersionInfo arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject getInstance(jint arg0, jint arg1);
		static QAndroidJniObject getInstance(jint arg0);
		static QAndroidJniObject getInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		jint getMajor();
		jint getMinor();
		jint getMilli();
		jint getMicro();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject VersionInfo::ICU_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"ICU_VERSION",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UCOL_BUILDER_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UCOL_BUILDER_VERSION",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UCOL_RUNTIME_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UCOL_RUNTIME_VERSION",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_10_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_10_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_11_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_11_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_1_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_1_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_1_0_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_1_0_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_1_1_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_1_1_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_1_1_5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_1_1_5",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_2_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_2_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_2_1_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_2_1_2",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_2_1_5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_2_1_5",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_2_1_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_2_1_8",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_2_1_9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_2_1_9",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_3_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_3_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_3_0_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_3_0_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_3_1_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_3_1_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_3_1_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_3_1_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_3_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_3_2",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_4_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_4_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_4_0_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_4_0_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_4_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_4_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_5_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_5_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_5_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_5_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_5_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_5_2",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_6_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_6_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_6_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_6_1",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_6_2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_6_2",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_6_3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_6_3",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_7_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_7_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_8_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_8_0",
			"Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject VersionInfo::UNICODE_9_0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.VersionInfo",
			"UNICODE_9_0",
			"Landroid/icu/util/VersionInfo;");
	}
	
	// Constructors
	void VersionInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.VersionInfo",
			"(V)V");
	}
	
	// Methods
	jboolean VersionInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject VersionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint VersionInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint VersionInfo::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint VersionInfo::compareTo(__jni_impl::android::icu::util::VersionInfo arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/VersionInfo;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject VersionInfo::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.VersionInfo",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/util/VersionInfo;",
			arg0);
	}
	QAndroidJniObject VersionInfo::getInstance(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.VersionInfo",
			"getInstance",
			"(III)Landroid/icu/util/VersionInfo;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject VersionInfo::getInstance(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.VersionInfo",
			"getInstance",
			"(II)Landroid/icu/util/VersionInfo;",
			arg0,
			arg1);
	}
	QAndroidJniObject VersionInfo::getInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.VersionInfo",
			"getInstance",
			"(I)Landroid/icu/util/VersionInfo;",
			arg0);
	}
	QAndroidJniObject VersionInfo::getInstance(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.VersionInfo",
			"getInstance",
			"(IIII)Landroid/icu/util/VersionInfo;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint VersionInfo::getMajor()
	{
		return __thiz.callMethod<jint>(
			"getMajor",
			"()I");
	}
	jint VersionInfo::getMinor()
	{
		return __thiz.callMethod<jint>(
			"getMinor",
			"()I");
	}
	jint VersionInfo::getMilli()
	{
		return __thiz.callMethod<jint>(
			"getMilli",
			"()I");
	}
	jint VersionInfo::getMicro()
	{
		return __thiz.callMethod<jint>(
			"getMicro",
			"()I");
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class VersionInfo : public __jni_impl::android::icu::util::VersionInfo
	{
	public:
		VersionInfo(QAndroidJniObject obj) { __thiz = obj; }
		VersionInfo()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_VERSIONINFO

