#include "./Locale.hpp"
#include "./Locale_Builder.hpp"

namespace java::util
{
	// Fields
	
	Locale_Builder::Locale_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Locale_Builder::Locale_Builder()
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Locale_Builder::addUnicodeLocaleAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale_Builder::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/util/Locale$Builder;"
		);
	}
	QAndroidJniObject Locale_Builder::clearExtensions()
	{
		return __thiz.callObjectMethod(
			"clearExtensions",
			"()Ljava/util/Locale$Builder;"
		);
	}
	QAndroidJniObject Locale_Builder::removeUnicodeLocaleAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::setExtension(jchar arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Locale_Builder::setLanguage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::setLanguageTag(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::setLocale(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Locale$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Locale_Builder::setRegion(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::setScript(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	QAndroidJniObject Locale_Builder::setUnicodeLocaleKeyword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Locale_Builder::setVariant(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
} // namespace java::util

