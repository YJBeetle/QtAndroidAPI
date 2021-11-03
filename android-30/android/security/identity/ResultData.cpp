#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	ResultData::ResultData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray ResultData::getAuthenticatedData()
	{
		return callObjectMethod(
			"getAuthenticatedData",
			"()[B"
		);
	}
	JByteArray ResultData::getEntry(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/lang/String;)[B",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject ResultData::getEntryNames(JString arg0)
	{
		return callObjectMethod(
			"getEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	JByteArray ResultData::getMessageAuthenticationCode()
	{
		return callObjectMethod(
			"getMessageAuthenticationCode",
			"()[B"
		);
	}
	JObject ResultData::getNamespaces()
	{
		return callObjectMethod(
			"getNamespaces",
			"()Ljava/util/Collection;"
		);
	}
	JObject ResultData::getRetrievedEntryNames(JString arg0)
	{
		return callObjectMethod(
			"getRetrievedEntryNames",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0.object<jstring>()
		);
	}
	JByteArray ResultData::getStaticAuthenticationData()
	{
		return callObjectMethod(
			"getStaticAuthenticationData",
			"()[B"
		);
	}
	jint ResultData::getStatus(JString arg0, JString arg1)
	{
		return callMethod<jint>(
			"getStatus",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::security::identity

