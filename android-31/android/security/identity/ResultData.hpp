#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::identity
{
	class ResultData : public __JniBaseClass
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
		template<typename ...Ts> explicit ResultData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResultData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getAuthenticatedData();
		jbyteArray getEntry(jstring arg0, jstring arg1);
		__JniBaseClass getEntryNames(jstring arg0);
		jbyteArray getMessageAuthenticationCode();
		__JniBaseClass getNamespaces();
		__JniBaseClass getRetrievedEntryNames(jstring arg0);
		jbyteArray getStaticAuthenticationData();
		jint getStatus(jstring arg0, jstring arg1);
	};
} // namespace android::security::identity

