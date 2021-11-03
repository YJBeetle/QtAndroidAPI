#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::content
{
	class IntentFilter_MalformedMimeTypeException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntentFilter_MalformedMimeTypeException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		IntentFilter_MalformedMimeTypeException(QAndroidJniObject obj);
		
		// Constructors
		IntentFilter_MalformedMimeTypeException();
		IntentFilter_MalformedMimeTypeException(jstring arg0);
		
		// Methods
	};
} // namespace android::content

