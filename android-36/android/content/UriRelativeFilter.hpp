#pragma once

#include "../net/Uri.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UriRelativeFilter.def.hpp"

namespace android::content
{
	// Fields
	inline jint UriRelativeFilter::FRAGMENT()
	{
		return getStaticField<jint>(
			"android.content.UriRelativeFilter",
			"FRAGMENT"
		);
	}
	inline jint UriRelativeFilter::PATH()
	{
		return getStaticField<jint>(
			"android.content.UriRelativeFilter",
			"PATH"
		);
	}
	inline jint UriRelativeFilter::QUERY()
	{
		return getStaticField<jint>(
			"android.content.UriRelativeFilter",
			"QUERY"
		);
	}
	
	// Constructors
	inline UriRelativeFilter::UriRelativeFilter(jint arg0, jint arg1, JString arg2)
		: JObject(
			"android.content.UriRelativeFilter",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jboolean UriRelativeFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString UriRelativeFilter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/lang/String;"
		);
	}
	inline jint UriRelativeFilter::getPatternType() const
	{
		return callMethod<jint>(
			"getPatternType",
			"()I"
		);
	}
	inline jint UriRelativeFilter::getUriPart() const
	{
		return callMethod<jint>(
			"getUriPart",
			"()I"
		);
	}
	inline jint UriRelativeFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean UriRelativeFilter::matchData(android::net::Uri arg0) const
	{
		return callMethod<jboolean>(
			"matchData",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline JString UriRelativeFilter::toString() const
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
