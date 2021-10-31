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
		
		SyncFailedException(QAndroidJniObject obj);
		// Constructors
		SyncFailedException(jstring arg0);
		SyncFailedException() = default;
		
		// Methods
	};
} // namespace java::io

