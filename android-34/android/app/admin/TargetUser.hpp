#pragma once

#include "../../../JObject.hpp"
#include "./TargetUser.def.hpp"

namespace android::app::admin
{
	// Fields
	inline android::app::admin::TargetUser TargetUser::GLOBAL()
	{
		return getStaticObjectField(
			"android.app.admin.TargetUser",
			"GLOBAL",
			"Landroid/app/admin/TargetUser;"
		);
	}
	inline android::app::admin::TargetUser TargetUser::LOCAL_USER()
	{
		return getStaticObjectField(
			"android.app.admin.TargetUser",
			"LOCAL_USER",
			"Landroid/app/admin/TargetUser;"
		);
	}
	inline android::app::admin::TargetUser TargetUser::PARENT_USER()
	{
		return getStaticObjectField(
			"android.app.admin.TargetUser",
			"PARENT_USER",
			"Landroid/app/admin/TargetUser;"
		);
	}
	inline android::app::admin::TargetUser TargetUser::UNKNOWN_USER()
	{
		return getStaticObjectField(
			"android.app.admin.TargetUser",
			"UNKNOWN_USER",
			"Landroid/app/admin/TargetUser;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TargetUser::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TargetUser::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
