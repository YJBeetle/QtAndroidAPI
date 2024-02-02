#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Topic.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	inline Topic::Topic(jlong arg0, jlong arg1, jint arg2)
		: JObject(
			"android.adservices.topics.Topic",
			"(JJI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean Topic::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong Topic::getModelVersion() const
	{
		return callMethod<jlong>(
			"getModelVersion",
			"()J"
		);
	}
	inline jlong Topic::getTaxonomyVersion() const
	{
		return callMethod<jlong>(
			"getTaxonomyVersion",
			"()J"
		);
	}
	inline jint Topic::getTopicId() const
	{
		return callMethod<jint>(
			"getTopicId",
			"()I"
		);
	}
	inline jint Topic::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Topic::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
