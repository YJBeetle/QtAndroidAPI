#pragma once

#ifndef ANDROID_ICU_TEXT_CASEMAP
#define ANDROID_ICU_TEXT_CASEMAP

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class CaseMap_Lower;
}
namespace __jni_impl::android::icu::text
{
	class CaseMap_Upper;
}
namespace __jni_impl::android::icu::text
{
	class CaseMap_Fold;
}
namespace __jni_impl::android::icu::text
{
	class CaseMap_Title;
}

namespace __jni_impl::android::icu::text
{
	class CaseMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject toLower();
		static QAndroidJniObject toUpper();
		static QAndroidJniObject fold();
		QAndroidJniObject omitUnchangedText();
		static QAndroidJniObject toTitle();
	};
} // namespace __jni_impl::android::icu::text

#include "CaseMap_Lower.hpp"
#include "CaseMap_Upper.hpp"
#include "CaseMap_Fold.hpp"
#include "CaseMap_Title.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CaseMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CaseMap",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaseMap::toLower()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toLower",
			"()Landroid/icu/text/CaseMap$Lower;");
	}
	QAndroidJniObject CaseMap::toUpper()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toUpper",
			"()Landroid/icu/text/CaseMap$Upper;");
	}
	QAndroidJniObject CaseMap::fold()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"fold",
			"()Landroid/icu/text/CaseMap$Fold;");
	}
	QAndroidJniObject CaseMap::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap;");
	}
	QAndroidJniObject CaseMap::toTitle()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toTitle",
			"()Landroid/icu/text/CaseMap$Title;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CaseMap : public __jni_impl::android::icu::text::CaseMap
	{
	public:
		CaseMap(QAndroidJniObject obj) { __thiz = obj; }
		CaseMap()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_CASEMAP

