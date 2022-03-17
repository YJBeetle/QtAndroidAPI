#pragma once

#include "../../../JArray.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./NumberingSystem.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline NumberingSystem::NumberingSystem()
		: JObject(
			"android.icu.text.NumberingSystem",
			"()V"
		) {}
	
	// Methods
	inline JArray NumberingSystem::getAvailableNames()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getAvailableNames",
			"()[Ljava/lang/String;"
		);
	}
	inline android::icu::text::NumberingSystem NumberingSystem::getInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"()Landroid/icu/text/NumberingSystem;"
		);
	}
	inline android::icu::text::NumberingSystem NumberingSystem::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberingSystem NumberingSystem::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;",
			arg0.object()
		);
	}
	inline android::icu::text::NumberingSystem NumberingSystem::getInstance(jint arg0, jboolean arg1, JString arg2)
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
	inline android::icu::text::NumberingSystem NumberingSystem::getInstanceByName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0.object<jstring>()
		);
	}
	inline jboolean NumberingSystem::isValidDigitString(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString NumberingSystem::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JString NumberingSystem::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint NumberingSystem::getRadix() const
	{
		return callMethod<jint>(
			"getRadix",
			"()I"
		);
	}
	inline jboolean NumberingSystem::isAlgorithmic() const
	{
		return callMethod<jboolean>(
			"isAlgorithmic",
			"()Z"
		);
	}
} // namespace android::icu::text

// Base class headers

