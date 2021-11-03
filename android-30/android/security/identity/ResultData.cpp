#include "./ResultData.hpp"

namespace android::security::identity
{
	// Fields
	jint ResultData::STATUS_NOT_IN_REQUEST_MESSAGE()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NOT_IN_REQUEST_MESSAGE"
		);
	}
	jint ResultData::STATUS_NOT_REQUESTED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NOT_REQUESTED"
		);
	}
	jint ResultData::STATUS_NO_ACCESS_CONTROL_PROFILES()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NO_ACCESS_CONTROL_PROFILES"
		);
	}
	jint ResultData::STATUS_NO_SUCH_ENTRY()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_NO_SUCH_ENTRY"
		);
	}
	jint ResultData::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_OK"
		);
	}
	jint ResultData::STATUS_READER_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_READER_AUTHENTICATION_FAILED"
		);
	}
	jint ResultData::STATUS_USER_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.security.identity.ResultData",
			"STATUS_USER_AUTHENTICATION_FAILED"
		);
	}
	
	// QAndroidJniObject forward
	ResultData::ResultData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray ResultData::getAuthenticatedData()
	{
		return callObjectMethod(
			"getAuthenticatedData",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray ResultData::getEntry(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	JObject ResultData::getEntryNames(jstring arg0)
	{
		return callObjectMethod(
			"getEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0
		);
	}
	jbyteArray ResultData::getMessageAuthenticationCode()
	{
		return callObjectMethod(
			"getMessageAuthenticationCode",
			"()[B"
		).object<jbyteArray>();
	}
	JObject ResultData::getNamespaces()
	{
		return callObjectMethod(
			"getNamespaces",
			"()Ljava/util/Collection;"
		);
	}
	JObject ResultData::getRetrievedEntryNames(jstring arg0)
	{
		return callObjectMethod(
			"getRetrievedEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0
		);
	}
	jbyteArray ResultData::getStaticAuthenticationData()
	{
		return callObjectMethod(
			"getStaticAuthenticationData",
			"()[B"
		).object<jbyteArray>();
	}
	jint ResultData::getStatus(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getStatus",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
} // namespace android::security::identity

