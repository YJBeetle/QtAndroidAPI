#include "./AppSearchSchema_PropertyConfig.hpp"

namespace android::app::appsearch
{
	// Fields
	jint AppSearchSchema_PropertyConfig::CARDINALITY_OPTIONAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_OPTIONAL"
		);
	}
	jint AppSearchSchema_PropertyConfig::CARDINALITY_REPEATED()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_REPEATED"
		);
	}
	jint AppSearchSchema_PropertyConfig::CARDINALITY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_REQUIRED"
		);
	}
	
	// QAndroidJniObject forward
	AppSearchSchema_PropertyConfig::AppSearchSchema_PropertyConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AppSearchSchema_PropertyConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AppSearchSchema_PropertyConfig::getCardinality()
	{
		return callMethod<jint>(
			"getCardinality",
			"()I"
		);
	}
	jstring AppSearchSchema_PropertyConfig::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppSearchSchema_PropertyConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AppSearchSchema_PropertyConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

