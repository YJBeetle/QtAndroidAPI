#include "../../JString.hpp"
#include "./Locale.hpp"
#include "./Locale_Builder.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Locale_Builder::Locale_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Locale_Builder::Locale_Builder()
		: JObject(
			"java.util.Locale$Builder",
			"()V"
		) {}
	
	// Methods
	java::util::Locale_Builder Locale_Builder::addUnicodeLocaleAttribute(JString arg0)
	{
		return callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
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
	java::util::Locale_Builder Locale_Builder::removeUnicodeLocaleAttribute(JString arg0)
	{
		return callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setExtension(jchar arg0, JString arg1)
	{
		return callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Ljava/util/Locale$Builder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setLanguage(JString arg0)
	{
		return callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setLanguageTag(JString arg0)
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
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
	java::util::Locale_Builder Locale_Builder::setRegion(JString arg0)
	{
		return callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setScript(JString arg0)
	{
		return callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setUnicodeLocaleKeyword(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::util::Locale_Builder Locale_Builder::setVariant(JString arg0)
	{
		return callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Ljava/util/Locale$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

