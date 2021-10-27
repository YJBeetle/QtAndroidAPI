#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::util
{
	class Locale_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject addUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject addUnicodeLocaleAttribute(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject clear();
		QAndroidJniObject clearExtensions();
		QAndroidJniObject removeUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject removeUnicodeLocaleAttribute(const QString &arg0);
		QAndroidJniObject setExtension(jchar arg0, jstring arg1);
		QAndroidJniObject setExtension(jchar arg0, const QString &arg1);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setLanguage(const QString &arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLanguageTag(const QString &arg0);
		QAndroidJniObject setLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject setRegion(jstring arg0);
		QAndroidJniObject setRegion(const QString &arg0);
		QAndroidJniObject setScript(jstring arg0);
		QAndroidJniObject setScript(const QString &arg0);
		QAndroidJniObject setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		QAndroidJniObject setUnicodeLocaleKeyword(const QString &arg0, const QString &arg1);
		QAndroidJniObject setVariant(jstring arg0);
		QAndroidJniObject setVariant(const QString &arg0);
	};
} // namespace __jni_impl::java::util

#include "./Locale.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Locale_Builder::__constructor()
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
	QAndroidJniObject Locale_Builder::addUnicodeLocaleAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Locale_Builder::removeUnicodeLocaleAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setExtension(jchar arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setLanguage(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setLanguageTag(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Locale_Builder::setLocale(__jni_impl::java::util::Locale arg0)
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
	QAndroidJniObject Locale_Builder::setRegion(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setScript(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setUnicodeLocaleKeyword(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	QAndroidJniObject Locale_Builder::setVariant(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Locale_Builder : public __jni_impl::java::util::Locale_Builder
	{
	public:
		Locale_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Locale_Builder()
		{
			__constructor();
		}
	};
} // namespace java::util

