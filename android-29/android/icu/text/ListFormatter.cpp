#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ListFormatter.hpp"

namespace android::icu::text
{
	// Fields
	
	ListFormatter::ListFormatter(QAndroidJniObject obj) { __thiz = obj; }
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
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ListFormatter::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;",
			arg0.__jniObject().object()
		);
	}
	jstring ListFormatter::format(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ListFormatter::format(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Collection;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ListFormatter::getPatternForNumItems(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPatternForNumItems",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::text

