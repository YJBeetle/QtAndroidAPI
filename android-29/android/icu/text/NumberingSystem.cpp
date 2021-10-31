#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./NumberingSystem.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject NumberingSystem::LATIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberingSystem",
			"LATIN",
			"Landroid/icu/text/NumberingSystem;"
		);
	}
	
	// QAndroidJniObject forward
	NumberingSystem::NumberingSystem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NumberingSystem::NumberingSystem()
		: __JniBaseClass(
			"android.icu.text.NumberingSystem",
			"()V"
		) {}
	
	// Methods
	jarray NumberingSystem::getAvailableNames()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getAvailableNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject NumberingSystem::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"()Landroid/icu/text/NumberingSystem;"
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(jint arg0, jboolean arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject NumberingSystem::getInstanceByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0
		);
	}
	jboolean NumberingSystem::isValidDigitString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring NumberingSystem::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NumberingSystem::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NumberingSystem::getRadix()
	{
		return callMethod<jint>(
			"getRadix",
			"()I"
		);
	}
	jboolean NumberingSystem::isAlgorithmic()
	{
		return callMethod<jboolean>(
			"isAlgorithmic",
			"()Z"
		);
	}
} // namespace android::icu::text

