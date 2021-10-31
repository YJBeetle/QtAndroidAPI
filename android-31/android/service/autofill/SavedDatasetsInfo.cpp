#include "./SavedDatasetsInfo.hpp"

namespace android::service::autofill
{
	// Fields
	jstring SavedDatasetsInfo::TYPE_OTHER()
	{
		return getStaticObjectField(
			"android.service.autofill.SavedDatasetsInfo",
			"TYPE_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SavedDatasetsInfo::TYPE_PASSWORDS()
	{
		return getStaticObjectField(
			"android.service.autofill.SavedDatasetsInfo",
			"TYPE_PASSWORDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SavedDatasetsInfo::SavedDatasetsInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SavedDatasetsInfo::SavedDatasetsInfo(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.service.autofill.SavedDatasetsInfo",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean SavedDatasetsInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SavedDatasetsInfo::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jstring SavedDatasetsInfo::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SavedDatasetsInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SavedDatasetsInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

