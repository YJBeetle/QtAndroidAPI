#include "./Locale.hpp"
#include "./Locale_Builder.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Locale_Builder::Locale_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Locale_Builder::Locale_Builder()
		: __JniBaseClass(
			"java.util.Locale$Builder",
			"()V"
		) {}
	
	// Methods
	java::util::Locale_Builder Locale_Builder::addUnicodeLocaleAttribute(jstring arg0)
	{
		return callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale Locale_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Ljava/util/Locale;"
		);
	}
	java::util::Locale_Builder Locale_Builder::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/util/Locale$Builder;"
		);
	}
	java::util::Locale_Builder Locale_Builder::clearExtensions()
	{
		return callObjectMethod(
			"clearExtensions",
			"()Ljava/util/Locale$Builder;"
		);
	}
	java::util::Locale_Builder Locale_Builder::removeUnicodeLocaleAttribute(jstring arg0)
	{
		return callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale_Builder Locale_Builder::setExtension(jchar arg0, jstring arg1)
	{
		return callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			arg1
		);
	}
	java::util::Locale_Builder Locale_Builder::setLanguage(jstring arg0)
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale_Builder Locale_Builder::setLanguageTag(jstring arg0)
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale_Builder Locale_Builder::setLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Ljava/util/Locale$Builder;",
			arg0.object()
		);
	}
	java::util::Locale_Builder Locale_Builder::setRegion(jstring arg0)
	{
		return callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale_Builder Locale_Builder::setScript(jstring arg0)
	{
		return callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
	java::util::Locale_Builder Locale_Builder::setUnicodeLocaleKeyword(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			arg1
		);
	}
	java::util::Locale_Builder Locale_Builder::setVariant(jstring arg0)
	{
		return callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0
		);
	}
} // namespace java::util

