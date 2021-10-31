#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::apache::http::params
{
	class HttpConnectionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpConnectionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HttpConnectionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getConnectionTimeout(__JniBaseClass arg0);
		static jint getLinger(__JniBaseClass arg0);
		static jint getSoTimeout(__JniBaseClass arg0);
		static jint getSocketBufferSize(__JniBaseClass arg0);
		static jboolean getTcpNoDelay(__JniBaseClass arg0);
		static jboolean isStaleCheckingEnabled(__JniBaseClass arg0);
		static void setConnectionTimeout(__JniBaseClass arg0, jint arg1);
		static void setLinger(__JniBaseClass arg0, jint arg1);
		static void setSoTimeout(__JniBaseClass arg0, jint arg1);
		static void setSocketBufferSize(__JniBaseClass arg0, jint arg1);
		static void setStaleCheckingEnabled(__JniBaseClass arg0, jboolean arg1);
		static void setTcpNoDelay(__JniBaseClass arg0, jboolean arg1);
	};
} // namespace org::apache::http::params

