#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ListFormatter.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	ListFormatter::ListFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ListFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"()Landroid/icu/text/ListFormatter;"
		);
	}
	QAndroidJniObject ListFormatter::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ListFormatter;",
			arg0.object()
		);
	}
	QAndroidJniObject ListFormatter::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;",
			arg0.object()
		);
	}
	jstring ListFormatter::format(jobjectArray arg0)
	{
		return callObjectMethod(
			"format",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ListFormatter::format(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Collection;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ListFormatter::getPatternForNumItems(jint arg0)
	{
		return callObjectMethod(
			"getPatternForNumItems",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::text
