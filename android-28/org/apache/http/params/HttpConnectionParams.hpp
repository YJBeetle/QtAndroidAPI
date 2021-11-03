#pragma once

#include "../../../../JObject.hpp"


namespace org::apache::http::params
{
	class HttpConnectionParams : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpConnectionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HttpConnectionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getConnectionTimeout(JObject arg0);
		static jint getLinger(JObject arg0);
		static jint getSoTimeout(JObject arg0);
		static jint getSocketBufferSize(JObject arg0);
		static jboolean getTcpNoDelay(JObject arg0);
		static jboolean isStaleCheckingEnabled(JObject arg0);
		static void setConnectionTimeout(JObject arg0, jint arg1);
		static void setLinger(JObject arg0, jint arg1);
		static void setSoTimeout(JObject arg0, jint arg1);
		static void setSocketBufferSize(JObject arg0, jint arg1);
		static void setStaleCheckingEnabled(JObject arg0, jboolean arg1);
		static void setTcpNoDelay(JObject arg0, jboolean arg1);
	};
} // namespace org::apache::http::params

