#pragma once

#ifndef ANDROID_ICU_UTIL_LOCALEDATA
#define ANDROID_ICU_UTIL_LOCALEDATA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::util
{
	class LocaleData_MeasurementSystem;
}
namespace __jni_impl::android::icu::util
{
	class LocaleData_PaperSize;
}
namespace __jni_impl::android::icu::util
{
	class VersionInfo;
}

namespace __jni_impl::android::icu::util
{
	class LocaleData : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALT_QUOTATION_END();
		static jint ALT_QUOTATION_START();
		static jint QUOTATION_END();
		static jint QUOTATION_START();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		void setNoSubstitute(jboolean arg0);
		jboolean getNoSubstitute();
		jstring getDelimiter(jint arg0);
		static QAndroidJniObject getMeasurementSystem(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getPaperSize(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getCLDRVersion();
	};
} // namespace __jni_impl::android::icu::util

#include "ULocale.hpp"
#include "LocaleData_MeasurementSystem.hpp"
#include "LocaleData_PaperSize.hpp"
#include "VersionInfo.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint LocaleData::ALT_QUOTATION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_END"
		);
	}
	jint LocaleData::ALT_QUOTATION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"ALT_QUOTATION_START"
		);
	}
	jint LocaleData::QUOTATION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_END"
		);
	}
	jint LocaleData::QUOTATION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.LocaleData",
			"QUOTATION_START"
		);
	}
	
	// Constructors
	void LocaleData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.LocaleData",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LocaleData::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"()Landroid/icu/util/LocaleData;"
		);
	}
	QAndroidJniObject LocaleData::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData;",
			arg0.__jniObject().object()
		);
	}
	void LocaleData::setNoSubstitute(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNoSubstitute",
			"(Z)V",
			arg0
		);
	}
	jboolean LocaleData::getNoSubstitute()
	{
		return __thiz.callMethod<jboolean>(
			"getNoSubstitute",
			"()Z"
		);
	}
	jstring LocaleData::getDelimiter(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDelimiter",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject LocaleData::getMeasurementSystem(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getMeasurementSystem",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$MeasurementSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocaleData::getPaperSize(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getPaperSize",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$PaperSize;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocaleData::getCLDRVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.LocaleData",
			"getCLDRVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class LocaleData : public __jni_impl::android::icu::util::LocaleData
	{
	public:
		LocaleData(QAndroidJniObject obj) { __thiz = obj; }
		LocaleData()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_LOCALEDATA

