#include "./PackageIdentifier.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	PackageIdentifier::PackageIdentifier(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PackageIdentifier::PackageIdentifier(jstring arg0, jbyteArray arg1)
		: __JniBaseClass(
			"android.app.appsearch.PackageIdentifier",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean PackageIdentifier::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PackageIdentifier::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray PackageIdentifier::getSha256Certificate()
	{
		return callObjectMethod(
			"getSha256Certificate",
			"()[B"
		).object<jbyteArray>();
	}
	jint PackageIdentifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app::appsearch

