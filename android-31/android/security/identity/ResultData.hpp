#pragma once

#include "../../../JObject.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit ResultData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResultData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getAuthenticatedData();
		jbyteArray getEntry(jstring arg0, jstring arg1);
		JObject getEntryNames(jstring arg0);
		jbyteArray getMessageAuthenticationCode();
		JObject getNamespaces();
		JObject getRetrievedEntryNames(jstring arg0);
		jbyteArray getStaticAuthenticationData();
		jint getStatus(jstring arg0, jstring arg1);
	};
} // namespace android::security::identity

