#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::apache::http::params
{
	class HttpConnectionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		HttpConnectionParams(QAndroidJniObject obj);
		// Constructors
		HttpConnectionParams() = default;
		
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

