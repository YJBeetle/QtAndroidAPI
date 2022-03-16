#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PackageIdentifier.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline PackageIdentifier::PackageIdentifier(JString arg0, JByteArray arg1)
		: JObject(
			"android.app.appsearch.PackageIdentifier",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean PackageIdentifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PackageIdentifier::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray PackageIdentifier::getSha256Certificate() const
	{
		return callObjectMethod(
			"getSha256Certificate",
			"()[B"
		);
	}
	inline jint PackageIdentifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers

