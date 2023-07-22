#pragma once

#include "../../../JObjectArray.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "../../../JString.hpp"
#include "./DevicePolicyResourcesManager.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::drawable::Drawable DevicePolicyResourcesManager::getDrawable(JString arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::graphics::drawable::Drawable DevicePolicyResourcesManager::getDrawable(JString arg0, JString arg1, JString arg2, JObject arg3) const
	{
		return callObjectMethod(
			"getDrawable",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::graphics::drawable::Icon DevicePolicyResourcesManager::getDrawableAsIcon(JString arg0, JString arg1, android::graphics::drawable::Icon arg2) const
	{
		return callObjectMethod(
			"getDrawableAsIcon",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/drawable/Icon;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::graphics::drawable::Icon DevicePolicyResourcesManager::getDrawableAsIcon(JString arg0, JString arg1, JString arg2, android::graphics::drawable::Icon arg3) const
	{
		return callObjectMethod(
			"getDrawableAsIcon",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/drawable/Icon;)Landroid/graphics/drawable/Icon;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::graphics::drawable::Drawable DevicePolicyResourcesManager::getDrawableForDensity(JString arg0, JString arg1, jint arg2, JObject arg3) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/function/Supplier;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		);
	}
	inline android::graphics::drawable::Drawable DevicePolicyResourcesManager::getDrawableForDensity(JString arg0, JString arg1, JString arg2, jint arg3, JObject arg4) const
	{
		return callObjectMethod(
			"getDrawableForDensity",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/util/function/Supplier;)Landroid/graphics/drawable/Drawable;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4.object()
		);
	}
	inline JString DevicePolicyResourcesManager::getString(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/util/function/Supplier;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString DevicePolicyResourcesManager::getString(JString arg0, JObject arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/util/function/Supplier;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jobjectArray>()
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
