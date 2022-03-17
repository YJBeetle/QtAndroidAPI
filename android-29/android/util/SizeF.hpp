#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SizeF.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline SizeF::SizeF(jfloat arg0, jfloat arg1)
		: JObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::util::SizeF SizeF::parseSizeF(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0.object<jstring>()
		);
	}
	inline jboolean SizeF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat SizeF::getHeight() const
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	inline jfloat SizeF::getWidth() const
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	inline jint SizeF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SizeF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
