#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class SyncFailedException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncFailedException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		SyncFailedException(QAndroidJniObject obj);
		
		// Constructors
		SyncFailedException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

