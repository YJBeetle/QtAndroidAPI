#include "../../../JArray.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./NumberingSystem.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	NumberingSystem::NumberingSystem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NumberingSystem::NumberingSystem()
		: JObject(
			"android.icu.text.NumberingSystem",
			"()V"
		) {}
	
	// Methods
	JArray NumberingSystem::getAvailableNames()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getAvailableNames",
			"()[Ljava/lang/String;"
		);
	}
	android::icu::text::NumberingSystem NumberingSystem::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"()Landroid/icu/text/NumberingSystem;"
		);
	}
	android::icu::text::NumberingSystem NumberingSystem::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	android::icu::text::NumberingSystem NumberingSystem::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	android::icu::text::NumberingSystem NumberingSystem::getInstance(jint arg0, jboolean arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	android::icu::text::NumberingSystem NumberingSystem::getInstanceByName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0.object<jstring>()
		);
	}
	jboolean NumberingSystem::isValidDigitString(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString NumberingSystem::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JString NumberingSystem::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
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

