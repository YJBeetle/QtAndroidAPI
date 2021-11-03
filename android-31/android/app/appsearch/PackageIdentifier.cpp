#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PackageIdentifier.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	PackageIdentifier::PackageIdentifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PackageIdentifier::PackageIdentifier(JString arg0, JByteArray arg1)
		: JObject(
			"android.app.appsearch.PackageIdentifier",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	jboolean PackageIdentifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString PackageIdentifier::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray PackageIdentifier::getSha256Certificate() const
	{
		return callObjectMethod(
			"getSha256Certificate",
			"()[B"
		);
	}
	jint PackageIdentifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app::appsearch

