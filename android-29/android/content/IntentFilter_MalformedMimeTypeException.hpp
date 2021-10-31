#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::content
{
	class IntentFilter_MalformedMimeTypeException : public android::util::AndroidException
	{
	public:
		// Fields
		
		IntentFilter_MalformedMimeTypeException(QAndroidJniObject obj);
		// Constructors
		IntentFilter_MalformedMimeTypeException();
		IntentFilter_MalformedMimeTypeException(jstring arg0);
		
		// Methods
	};
} // namespace android::content

