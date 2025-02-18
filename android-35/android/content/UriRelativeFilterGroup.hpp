#pragma once

#include "./UriRelativeFilter.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UriRelativeFilterGroup.def.hpp"

namespace android::content
{
	// Fields
	inline jint UriRelativeFilterGroup::ACTION_ALLOW()
	{
		return getStaticField<jint>(
			"android.content.UriRelativeFilterGroup",
			"ACTION_ALLOW"
		);
	}
	inline jint UriRelativeFilterGroup::ACTION_BLOCK()
	{
		return getStaticField<jint>(
			"android.content.UriRelativeFilterGroup",
			"ACTION_BLOCK"
		);
	}
	
	// Constructors
	inline UriRelativeFilterGroup::UriRelativeFilterGroup(jint arg0)
		: JObject(
			"android.content.UriRelativeFilterGroup",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void UriRelativeFilterGroup::addUriRelativeFilter(android::content::UriRelativeFilter arg0) const
	{
		callMethod<void>(
			"addUriRelativeFilter",
			"(Landroid/content/UriRelativeFilter;)V",
			arg0.object()
		);
	}
	inline jboolean UriRelativeFilterGroup::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint UriRelativeFilterGroup::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline JObject UriRelativeFilterGroup::getUriRelativeFilters() const
	{
		return callObjectMethod(
			"getUriRelativeFilters",
			"()Ljava/util/Collection;"
		);
	}
	inline jint UriRelativeFilterGroup::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean UriRelativeFilterGroup::matchData(android::net::Uri arg0) const
	{
		return callMethod<jboolean>(
			"matchData",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline JString UriRelativeFilterGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
