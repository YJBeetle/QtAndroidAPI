#pragma once

#include "./MessagePattern_ArgType.def.hpp"
#include "./MessagePattern_Part_Type.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_Part.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MessagePattern_Part::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_Part::getArgType() const
	{
		return callObjectMethod(
			"getArgType",
			"()Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline jint MessagePattern_Part::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint MessagePattern_Part::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint MessagePattern_Part::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	inline android::icu::text::MessagePattern_Part_Type MessagePattern_Part::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Landroid/icu/text/MessagePattern$Part$Type;"
		);
	}
	inline jint MessagePattern_Part::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	inline jint MessagePattern_Part::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MessagePattern_Part::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
