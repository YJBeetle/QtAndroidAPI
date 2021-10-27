#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace android::view::inputmethod
{
	class InputMethodSubtype_InputMethodSubtypeBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		InputMethodSubtype_InputMethodSubtypeBuilder(QAndroidJniObject obj);
		// Constructors
		InputMethodSubtype_InputMethodSubtypeBuilder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIsAsciiCapable(jboolean arg0);
		QAndroidJniObject setIsAuxiliary(jboolean arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLanguageTag(const QString &arg0);
		QAndroidJniObject setOverridesImplicitlyEnabledSubtype(jboolean arg0);
		QAndroidJniObject setSubtypeExtraValue(jstring arg0);
		QAndroidJniObject setSubtypeExtraValue(const QString &arg0);
		QAndroidJniObject setSubtypeIconResId(jint arg0);
		QAndroidJniObject setSubtypeId(jint arg0);
		QAndroidJniObject setSubtypeLocale(jstring arg0);
		QAndroidJniObject setSubtypeLocale(const QString &arg0);
		QAndroidJniObject setSubtypeMode(jstring arg0);
		QAndroidJniObject setSubtypeMode(const QString &arg0);
		QAndroidJniObject setSubtypeNameResId(jint arg0);
	};
} // namespace android::view::inputmethod

