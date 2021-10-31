#include "../../java/util/regex/Matcher.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./Patterns.hpp"

namespace android::util
{
	// Fields
	QAndroidJniObject Patterns::DOMAIN_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"DOMAIN_NAME",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::EMAIL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"EMAIL_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	jstring Patterns::GOOD_IRI_CHAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"GOOD_IRI_CHAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Patterns::IP_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"IP_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"PHONE",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::TOP_LEVEL_DOMAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN",
			"Ljava/util/regex/Pattern;"
		);
	}
	jstring Patterns::TOP_LEVEL_DOMAIN_STR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Patterns::TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Patterns::WEB_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"WEB_URL",
			"Ljava/util/regex/Pattern;"
		);
	}
	
	// QAndroidJniObject forward
	Patterns::Patterns(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Patterns::concatGroups(java::util::regex::Matcher arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Patterns",
			"concatGroups",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Patterns::digitsAndPlusOnly(java::util::regex::Matcher arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Patterns",
			"digitsAndPlusOnly",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace android::util
