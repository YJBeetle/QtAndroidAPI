#pragma once

#include "../util/AndroidRuntimeException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::app
{
	class Fragment_InstantiationException : public android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Fragment_InstantiationException(const char *className, const char *sig, Ts...agv) : android::util::AndroidRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		Fragment_InstantiationException(QAndroidJniObject obj) : android::util::AndroidRuntimeException(obj) {}
		
		// Constructors
		Fragment_InstantiationException(JString arg0, java::lang::Exception arg1);
		
		// Methods
	};
} // namespace android::app

