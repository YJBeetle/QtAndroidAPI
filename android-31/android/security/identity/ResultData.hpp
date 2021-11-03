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
		
		// QJniObject forward
		template<typename ...Ts> explicit ResultData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResultData(QJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getAuthenticatedData() const;
		JByteArray getEntry(JString arg0, JString arg1) const;
		JObject getEntryNames(JString arg0) const;
		JByteArray getMessageAuthenticationCode() const;
		JObject getNamespaces() const;
		JObject getRetrievedEntryNames(JString arg0) const;
		JByteArray getStaticAuthenticationData() const;
		jint getStatus(JString arg0, JString arg1) const;
	};
} // namespace android::security::identity

