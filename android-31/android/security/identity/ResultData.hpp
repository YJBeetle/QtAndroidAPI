#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

namespace android::security::identity
{
	class ResultData : public JObject
	{
	public:
		// Fields
		static jint STATUS_NOT_IN_REQUEST_MESSAGE();
		static jint STATUS_NOT_REQUESTED();
		static jint STATUS_NO_ACCESS_CONTROL_PROFILES();
		static jint STATUS_NO_SUCH_ENTRY();
		static jint STATUS_OK();
		static jint STATUS_READER_AUTHENTICATION_FAILED();
		static jint STATUS_USER_AUTHENTICATION_FAILED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResultData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResultData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getAuthenticatedData();
		JByteArray getEntry(JString arg0, JString arg1);
		JObject getEntryNames(JString arg0);
		JByteArray getMessageAuthenticationCode();
		JObject getNamespaces();
		JObject getRetrievedEntryNames(JString arg0);
		JByteArray getStaticAuthenticationData();
		jint getStatus(JString arg0, JString arg1);
	};
} // namespace android::security::identity

